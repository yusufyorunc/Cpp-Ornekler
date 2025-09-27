#include <iostream>
#include <memory> // Akıllı işaretçiler için bu başlık dosyası gereklidir.
#include <string>

// Örnek olarak kullanılacak basit bir sınıf
class Varlik {
public:
    Varlik(const std::string& isim) : m_Isim(isim) {
        std::cout << "'" << m_Isim << "' Varlik olusturuldu." << std::endl;
    }
    ~Varlik() {
        std::cout << "'" << m_Isim << "' Varlik yok edildi." << std::endl;
    }
    void BilgiVer() const {
        std::cout << "Benim adim: " << m_Isim << std::endl;
    }
private:
    std::string m_Isim;
};

void unique_ptr_ornegi() {
    std::cout << "--- std::unique_ptr Örneği ---" << std::endl;
    // unique_ptr, yönettiği nesnenin tek sahibi olabilir.
    // Kapsam (scope) dışına çıkıldığında nesneyi otomatik olarak siler.
    // Kopyalanamaz, ancak sahipliği taşınabilir (std::move).

    std::unique_ptr<Varlik> varlik_ptr = std::make_unique<Varlik>("Benzersiz Varlik");
    varlik_ptr->BilgiVer();

    // Kopyalama denemesi (bu satır derleme hatası verir):
    // std::unique_ptr<Varlik> kopya_ptr = varlik_ptr;

    // Sahipliği taşıma
    std::unique_ptr<Varlik> tasinmis_ptr = std::move(varlik_ptr);

    if (varlik_ptr) {
        std::cout << "varlik_ptr hala bir nesneye sahip." << std::endl;
    } else {
        std::cout << "varlik_ptr'in sahipligi tasindi, artik bos." << std::endl;
    }

    tasinmis_ptr->BilgiVer();

    // Fonksiyon bittiğinde 'tasinmis_ptr' kapsam dışı kalır ve yönettiği 'Varlik' nesnesi otomatik olarak yok edilir.
    std::cout << "unique_ptr_ornegi fonksiyonu bitiyor..." << std::endl;
}

void shared_ptr_ornegi() {
    std::cout << "\n--- std::shared_ptr Örneği ---" << std::endl;
    // shared_ptr, bir nesnenin birden fazla sahibi olmasına izin verir.
    // Bir referans sayacı tutar. Sahip sayısı sıfıra ulaştığında nesneyi siler.

    std::shared_ptr<Varlik> paylasilan_ptr1;
    {
        std::shared_ptr<Varlik> paylasilan_ptr2 = std::make_shared<Varlik>("Paylasilan Varlik");
        paylasilan_ptr1 = paylasilan_ptr2; // Sahiplik paylaşıldı.

        std::cout << "Referans sayaci: " << paylasilan_ptr1.use_count() << std::endl; // Sayac: 2
        paylasilan_ptr2->BilgiVer();

        std::cout << "Icteki kapsam bitiyor..." << std::endl;
        // 'paylasilan_ptr2' kapsam dışı kalır, referans sayısı 1 azalır.
    }

    std::cout << "Referans sayaci: " << paylasilan_ptr1.use_count() << std::endl; // Sayac: 1
    paylasilan_ptr1->BilgiVer();

    // Fonksiyon bittiğinde 'paylasilan_ptr1' kapsam dışı kalır, referans sayısı sıfır olur ve nesne yok edilir.
    std::cout << "shared_ptr_ornegi fonksiyonu bitiyor..." << std::endl;
}

void weak_ptr_ornegi() {
    std::cout << "\n--- std::weak_ptr Örnegi ---" << std::endl;
    // weak_ptr, bir nesneye "zayıf" bir referans tutar.
    // shared_ptr'ın referans sayacını artırmaz. Bu, döngüsel bağımlılıkları (circular dependency) kırmak için kullanışlıdır.
    // Doğrudan nesneye erişemez, önce onu bir shared_ptr'a dönüştürmek gerekir.

    std::weak_ptr<Varlik> zayif_ptr;

    {
        std::shared_ptr<Varlik> sahip_ptr = std::make_shared<Varlik>("Zayif Referansli Varlik");
        zayif_ptr = sahip_ptr; // Zayıf referans oluşturuldu. Referans sayacı artmaz.

        std::cout << "Referans sayaci: " << sahip_ptr.use_count() << std::endl; // Sayac: 1

        // weak_ptr'dan shared_ptr oluşturarak güvenli erişim
        if (auto gecici_sahip_ptr = zayif_ptr.lock()) {
            std::cout << "Nesneye weak_ptr uzerinden erisildi: ";
            gecici_sahip_ptr->BilgiVer();
            std::cout << "Gecici sahip ile referans sayaci: " << gecici_sahip_ptr.use_count() << std::endl; // Sayac: 2
        }

        std::cout << "Icteki kapsam bitiyor..." << std::endl;
        // 'sahip_ptr' kapsam dışı kalır ve nesneyi yok eder.
    }

    // Nesne artık yok olduğu için weak_ptr'ın süresi dolmuştur.
    if (zayif_ptr.expired()) {
        std::cout << "weak_ptr'in gosterdigi nesne yok edilmis (suresi dolmus)." << std::endl;
    }

    // lock() denemesi boş bir shared_ptr döndürür.
    if (auto deneme_ptr = zayif_ptr.lock()) {
        std::cout << "Bu mesaj yazdirilmayacak." << std::endl;
    } else {
        std::cout << "Nesneye erisim basarisiz." << std::endl;
    }
}

int main() {
    unique_ptr_ornegi();
    shared_ptr_ornegi();
    weak_ptr_ornegi();

    std::cout << "\nProgram bitti." << std::endl;
    return 0;
}