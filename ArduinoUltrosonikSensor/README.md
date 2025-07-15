# Arduino Ultrasonik Mesafe Ölçer/LCD ekran Projesi

Bu proje, Arduino Uno kullanarak HC-SR04 ultrasonik mesafe sensörü ve 16x2 LCD ekran ile mesafe ölçen bir cihazı kontrol etmek için geliştirilmiştir.

---

## Gereksinimler

- Arduino Uno
- HC-SR04 Ultrasonik Mesafe Sensörü
- 16x2 LCD Ekran
- Jumper kabloları
- Potansiyometre (LCD ekran kontrast ayarı için)


## Devre Bağlantısı

- **trigPin (Tetik Pini)**: Arduino'dan gelen sinyal ile ultrasonik dalga gönderir.
- **echoPin (Okuma Pini)**: Geri dönen ultrasonik dalganın zamanını ölçer.
- **LCD Bağlantısı**:
  - RS Pin: Arduino Pin 12
  - EN Pin: Arduino Pin 11
  - D4 Pin: Arduino Pin 5
  - D5 Pin: Arduino Pin 4
  - D6 Pin: Arduino Pin 3
  - D7 Pin: Arduino Pin 2

**Bağlantılar:**
- trigPin (Arduino Pin 7) → HC-SR04 Trig Pin
- echoPin (Arduino Pin 6) → HC-SR04 Echo Pin
- LCD Bağlantıları → Arduino Pins 2, 3, 4, 5, 11, 12

## Kullanılan Kütüphaneler

- **LiquidCrystal.h**: LCD ekran kontrolü için kullanılır.

## Kurulum

1. Arduino IDE'yi açın.
2. USB kablosuyla Arduino Uno'yu bilgisayara bağlayın.
3. Kodu Arduino Uno'ya yüklemek için `Ctrl + Upload` (veya Upload butonu) kullanarak kodu yükleyin.

## Kullanım

1. Arduino'yu USB kablosuyla bir güç kaynağına bağlayın.
2. Mesafe sensörünü ölçülmek istenen yüzeye yönlendirin.
3. LCD ekran üzerinde ölçülen mesafeyi gözlemleyin.

## Dikkat Edilmesi Gerekenler

- LCD ekranın kontrast ayarını potansiyometre ile doğru bir şekilde ayarlayın.
- Ultrasonik sensör ve LCD ekran bağlantılarını doğru pinlere yapın.
- Arduino IDE'de doğru port seçildiğinden ve Arduino Uno için uygun kartın seçildiğinden emin olun.

## Lisans

Bu proje MIT lisansı altında lisanslanmıştır. Daha fazla bilgi için [MIT Lisansı](LICENSE) dosyasına göz atabilirsiniz.



![Image](https://github.com/user-attachments/assets/f27441de-36c4-4bb9-8892-468fd1c3554b)

