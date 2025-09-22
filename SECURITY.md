Thanks for helping make GitHub safe for everyone.
# Güvenlik (SECURITY.md)

Bu depo: `Cpp-Ornekler` (sahibi: `yusufyorunc`) örnek C++ projeleri içerir. Bu dosya, güvenlik açıklarını nasıl bildireceğinizi ve hangi bilgilerin faydalı olduğunu açıklamak için hazırlanmıştır.

Lütfen hassas güvenlik sorunlarını herkese açık issue, pull request veya discussion ile paylaşmayın. Aşağıdaki adımları takip ederek özel/koordine bir bildirim yapın.

## Hangi durumları bildirmelisiniz

- Kod örneklerinde tespit ettiğiniz bellek taşmaları, buffer overflow, use-after-free, double-free gibi bellek güvenliği açıkları
- Sisteme komut enjeksiyonu, shell execution veya dosya okuma/yazma ile ilgili kritik hatalar
- Gizli anahtarlar/şifreler/erişim token'ları gibi hassas bilgilerin repoda veya geçmiş commitlerde yer alması
- Örnek kodların gerçekte tehlikeli konfigürasyonlar veya tehlikeli API kullanımı içermesi (ör. sanitize edilmemiş input ile exec çağrıları)

## Güvenli bildirim kanalları

1. Tercih edilen yol: GitHub'ın Private Security Advisory özelliğini kullanarak özel bir advisory oluşturun (repo ayarlarında Security → Advisories). Bu yöntem, bildirimin gizliliğini korur.
2. Alternatif/ek yol: Aşağıdaki e-posta adresine özel (private) bildirim gönderin:

   opensource-security[@]github.com

   Not: Bu adres GitHub'ın genel açık kaynak güvenlik hattıdır; repo sahibi ile koordinasyon sağlanması için uygun bir kanaldır.

Eğer doğrudan depo sahibiyle iletişim kurmak isterseniz (ör. hızlı acil durum), bildirimde repo sahibinin GitHub kullanıcı adını (`yusufyorunc`) belirtin; gönderdiğiniz içeriğe göre yönlendirme yapılacaktır.

## Bildirimde bulunurken eklemeniz gereken bilgiler (şablon)

Lütfen mümkün olduğunca aşağıdaki bilgileri ekleyin:

- Özet: Kısa ve açık bir açıklama (1-2 cümle)
- Etki derecesi: Low/Medium/High/Critical (varsa kısa neden)
- Etkilenen dosyalar ve satır aralıkları (örn. `Diziler/Diziler.cpp:12-34`)
- Hangi commit/branch/tag ta olduğu (örn. `main` branch, commit `abc123`)
- Tekrarlanabilir adımlar (adım adım) ve gereken konfigürasyon
- Proof-of-Concept (PoC) kodu veya minimal repro (varsa)
- Önerilen düzeltme/önlem (varsa)
- İletişim tercihi: anonim/şifreli/PGP ile yazışma istenir mi?

Örnek kısa rapor:

```
Özet: `Diziler` örneğinde bound check yapılmıyor, kullanıcı girişi sonucunda buffer overflow oluşabiliyor.
Etkilenen dosya: `Diziler/Diziler.cpp` satırlar 23-42
Branch/commit: main / commit abc12345
Adımlar: 1) programı derleyin 2) girdi olarak 1000 karakter gönderin 3) uygulama çöküyor
PoC: attach edilmiş küçük test programı
Impact: Local crash, potansiyel remote exploit sırasında information leak
Öneri: std::vector veya güvenli sınır kontrolü eklenmesi
```

## Açıklama politikası ve tepki süresi

- Lütfen güvenlik açığını kamuya açıklamayın (public disclosure) — önce repo sahibi/yönetici ile koordinasyon yapılmalı.
- Biz (veya repo sahibi) bildirimi aldıktan sonra öncelik ve ciddiyete göre geri dönüş yapacağız; acil/critical durumlarda hızlı davranacağız. Eğer şifreli iletişim isterseniz belirtin, gereken PGP anahtarı sağlanacaktır.

## Gizli bilgilerin (secrets) yönetimi

- Eğer repoda gizli anahtar/şifre/tokens bulduysanız: bu bilgileri public olarak paylaşmayın. Hemen ilgili servisteki anahtarı iptal/rotate edin.
- Git geçmişinde gizli bilgi varsa, `git filter-repo` veya BFG Repo-Cleaner gibi araçlarla geçmişten kaldırma ve ardından anahtarların rotasyonu gereklidir.

## Acil durum (aktif saldırı veya exploit)

- Eğer proje veya kullanıcılarınız aktif olarak saldırı altında ise, bildirimi hem Private Security Advisory ile yapın hem de opensource-security[@]github.com adresine e-posta gönderin. Raporda "HIGH/CRITICAL - active exploit" şeklinde belirtin.

## Teşekkür

Güvenlik bulgularınızı bildirdiğiniz için teşekkür ederiz. Bildiriminiz, örnek kodların daha güvenli olmasına yardımcı olacak ve tüm kullanıcılar için faydalı olacaktır.

-- `Cpp-Ornekler` bakım ekibi (repo sahibi: `yusufyorunc`)
