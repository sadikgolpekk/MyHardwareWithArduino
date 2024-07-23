# Arduino ve Python ile LED Kontrolü

Bu proje, Python programı üzerinden Arduino'daki bir LED'i kontrol etmek için yapılmıştır.

## Gereksinimler

- Arduino IDE
- Python Uygulaması
- pyserial kütüphanesi

## Kullanım

1. **Arduino Kodunu Yükleme:**
   - Arduino IDE kullanarak `LED_Control.ino` dosyasını Arduino'ya yükleyin.
   
2. **Python Kodunu Çalıştırma:**
   - Bilgisayarınızda Python ortamını hazırlayın ve `led_control.py` dosyasını çalıştırın.
   - `pyserial` kütüphanesinin yüklü olduğundan emin olun (`pip install pyserial`).

3. **Seri Port Ayarları:**
   - Python kodundaki seri port ayarlarınızı (`'COM6'`, `9600`) kendi bilgisayarınıza göre güncelleyin.

4. **LED Kontrolü:**
   - Python programını çalıştırdıktan sonra terminaldeki talimatları takip ederek LED'i kontrol edin:
     - 'a' harfine basarak LED'i yakın.
     - 'b' harfine basarak LED'i söndürün.

## Baud Rate Nedir?

Baud rate, seri iletişimde kullanılan veri hızını ifade eder. Arduino ve Python kodları arasında iletişim kurabilmek için aynı baud rate değerini kullanmalısınız. Bu projede kullanılan 9600 baud rate, veri iletim hızını 9600 bit/saniye olarak ayarlar.

## Lisans

Bu proje MIT lisansı ile lisanslanmıştır. Detaylı bilgi için [LICENSE](LICENSE) dosyasına bakabilirsiniz.
