#include <iostream>

int main() {
    // Bir tam sayı değişkeni tanımla
    int sayi = 25;

    // Bir tam sayı işaretçisi (pointer) tanımla
    int* ptr;

    // İşaretçiye 'sayi' değişkeninin bellek adresini ata
    ptr = &sayi;

    // Değişkenin değerini ve bellek adresini yazdır
    std::cout << "Sayi degiskeninin degeri: " << sayi << std::endl;
    std::cout << "Sayi degiskeninin bellek adresi: " << &sayi << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    // İşaretçinin tuttuğu bellek adresini yazdır
    std::cout << "Isaretcinin (ptr) tuttugu bellek adresi: " << ptr << std::endl;

    // İşaretçinin gösterdiği yerdeki değeri (dereferencing) yazdır
    std::cout << "Isaretcinin gosterdigi yerdeki deger (*ptr): " << *ptr << std::endl;

    // İşaretçi üzerinden değeri değiştir
    *ptr = 50;

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Isaretci uzerinden deger degistirildi." << std::endl;
    std::cout << "Sayi degiskeninin yeni degeri: " << sayi << std::endl;

    return 0;
}