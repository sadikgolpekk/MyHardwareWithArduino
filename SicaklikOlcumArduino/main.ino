// LM35 sıcaklık sensörü A0 pinine bağlı
int lm35Pin = A0; // Sıcaklık sensöründen okuma yapılacak pin

// LED ve buzzer pinleri
int led = 8; // LED'in bağlı olduğu pin
#define buzzer 9 // Buzzer'ın bağlı olduğu pin

// LED ve buzzer için zaman aralığı
int zaman = 50; // LED ve buzzer'ın yanıp sönme süresi (milisaniye cinsinden)

// Sıcaklık sensöründen okunan değeri tutacak değişken
int okunandeger = 0;

// Sensörden okunan voltaj değerini tutacak değişken
float sicaklikgerilim = 0;

// Hesaplanan sıcaklık değerini tutacak değişken
float sicaklik = 0;

void setup() {
    pinMode(led, OUTPUT); // LED pinini çıkış olarak ayarla
    pinMode(buzzer, OUTPUT); // Buzzer pinini çıkış olarak ayarla
    Serial.begin(9600); // Seri haberleşmeyi 9600 baud hızında başlat
}

void loop() {
    okunandeger = analogRead(lm35Pin); // LM35 sensöründen analog değer oku
    sicaklikgerilim = (500.0 / 1023.0) * okunandeger; // Analog değeri voltaj değerine dönüştür
    sicaklik = sicaklikgerilim / 10.0; // Voltajı Celsius cinsinden sıcaklığa dönüştür

    Serial.println(sicaklik); // Hesaplanan sıcaklığı seri port üzerinden yazdır

    if (sicaklik >= 27) { // Eğer sıcaklık 27°C veya daha yüksekse
        digitalWrite(led, HIGH); // LED'i yak
        digitalWrite(buzzer, HIGH); // Buzzer'ı çalıştır
        delay(zaman); // Zaman aralığı kadar bekle
        digitalWrite(led, LOW); // LED'i söndür
        digitalWrite(buzzer, LOW); // Buzzer'ı kapat
        delay(zaman); // Zaman aralığı kadar bekle
    }
}

