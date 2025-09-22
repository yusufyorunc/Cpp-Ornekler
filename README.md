# C++ Dersleri - Örnek Projeler

Bu depo, C++ öğrenimi amacıyla hazırlanmış küçük, bağımsız örnek projeler içerir. Her klasör bir ders/konu örneğini barındırır ve Visual Studio ile açılabilecek `.vcxproj` proje dosyalarına sahiptir.

## İçindekiler

- [Nasıl açılır ve derlenir](#nasıl-açılır-ve-derlenir)
- [Projeler (kısa açıklamalar)](#projeler-kısa-açıklamalar)
- [Katkıda bulunma](#katkıda-bulunma)

## Nasıl açılır ve derlenir

Bu projeler Visual Studio C++ proje dosyaları (.vcxproj) içerir. Önerilen yöntemler:

1. Visual Studio ile açma
    - Visual Studio'yu açın, `File > Open > Project/Solution` seçeneğiyle ilgili klasördeki `*.vcxproj` dosyasını seçin.
    - Projeyi seçip Build (Ctrl+Shift+B) yaparak derleyin.

2. Komut satırından (MSBuild)
    - Windows'ta Developer Command Prompt veya normal cmd'de Visual Studio araçlarının erişilebilir olduğundan emin olun.
    - Örnek: 

```
msbuild "c:\Users\yusuf\Documents\C++ Dersleri\Merhaba_Dunya\Merhaba_Dunya.vcxproj" /p:Configuration=Debug
```

3. Çalıştırma
    - Derleme tamamlandığında proje ayarlarına bağlı olarak `Debug` veya `Release` çıktı klasöründe `.exe` oluşur. Visual Studio'da `Debug > Start Without Debugging` (Ctrl+F5) ile çalıştırabilirsiniz veya exe dosyasını doğrudan çalıştırın.

Not: Her projenin çalışma dizini ve giriş noktası (`main`) farklı olabilir; proje içindeki `.cpp` dosyalarındaki yorumları ve proje özelliklerini kontrol edin.

## Projeler (kısa açıklamalar):

- `Merhaba_Dunya` — C++ ile ilk "Hello World" örneği.
- `Degiskenler` — Değişken türleri ve temel atamalar.
- `Degisken ve Ram` — Değişkenlerin bellekteki temsili ve RAM ilişkisi.
- `Diziler` — Tek boyutlu diziler örnekleri.
- `İc İce Diziler` — Çok boyutlu (iç içe) diziler örnekleri.
- `For Kullanimi` — `for` döngüsü örnekleri.
- `While Kullanimi` — `while` döngüsü örnekleri.
- `Do-While Kullanimi` — `do-while` döngüsü örnekleri.
- `if Kullanimi` — `if/else` kontrol yapıları.
- `Switch Kullanimi` — `switch` kullanımı örnekleri.
- `Fonksiyonlar` — Fonksiyon tanımlama ve çağırma.
- `Fonksiyon CallBack` — Fonksiyon pointer'ları ve callback örnekleri.
- `Operatorler` — Aritmetik/karşılaştırma/atama operatörleri.
- `Onislemci` — Ön işlemci direktifleri (`#define`, `#include`) örnekleri.
- `Hazır Kutuphane Kullanimi` — Standart veya üçüncü taraf kütüphanelerin kullanımı.
- `Kapsulleme` — Sınıf kapsülleme (encapsulation) örnekleri.
- `Soyutlama` — Soyutlama (abstraction) ile ilgili sınıf örnekleri.
- `Siniflar` — Sınıf ve nesne (OOP) temel örnekleri.
- `Satır İci Fonksiyon` — Inline fonksiyon örnekleri.
- `Sablon Olusturma` — Şablon (template) kullanımı örnekleri.
- `Kalitim` — Kalıtım (inheritance) örnekleri.
- `Istisnalar` — İstisna (exception) yakalama ve fırlatma.
- `Cok Bicimlilik` — Polimorfizm (çok biçimlilik) örnekleri.
- `Bellek Yonetimi` — Dinamik bellek, new/delete kullanımı.

## Katkıda bulunma

Değişiklik yapmak isterseniz:

1. Fork/clone edin.
2. Yeni bir branch açın: `git checkout -b feature/yeniproje`
3. Değişikliklerinizi yapın ve commit edin.
4. Pull request gönderin.
