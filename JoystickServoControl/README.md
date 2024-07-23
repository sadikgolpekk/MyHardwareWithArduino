# Arduino ile Servo Motor Kontrolü

Bu proje, Arduino kullanarak bir servo motorun kontrolünü sağlar. Projede, Arduino'nun analog girişinden okunan bir sensör değeri kullanılarak servo motorun konumu belirlenir.

## Özellikler

- Servo motorun hareket açısı, Arduino'nun analog girişinden okunan değere göre belirlenir.
- Servo motor, 0 ile 180 derece arasında belirtilen konuma ayarlanabilir.

## Gereksinimler

- Arduino UNO veya benzeri bir Arduino kartı.
- Servo motor.
- Bağlantı kablosu.
- Arduino IDE (https://www.arduino.cc/en/Main/Software).
- `Servo` kütüphanesi (Arduino IDE kütüphane yöneticisinden yüklenebilir).

## Devre Şeması

![Devre Şeması](devre_semasi.png)

- Servo motor sinyal pini (örnekte 3. pin) Arduino'ya bağlanmalıdır.
- Servo motorun güç ve toprak bağlantıları, Arduino'nun besleme pinlerine (+5V ve GND) bağlanmalıdır.
- Analog sensör (örneğin potansiyometre) Arduino'nun A0 pinine bağlanmalıdır.

## Kullanım

1. Arduino IDE kullanarak `servo_control.ino` kodunu Arduino'ya yükleyin.
2. Servo motoru ve analog sensörü devreleyin (yukarıdaki devre şemasına bakın).
3. Arduino'yu USB bağlantısı ile bilgisayara bağlayın.
4. Arduino'nun gücünü sağlayın ve servo motorun hareket ettiğini gözlemleyin.

## Lisans

Bu proje MIT lisansı ile lisanslanmıştır. Ayrıntılar için [LICENSE](LICENSE) dosyasına bakabilirsiniz.
