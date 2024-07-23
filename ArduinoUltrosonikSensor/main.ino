#include <LiquidCrystal.h>

// Ultrasonik sensör ve LCD bağlantı pinleri tanımlamaları
int trig = 7;       // Trig pin, ultrasonik sensörün tetik pinidir
int echo = 6;       // Echo pin, ultrasonik sensörün echo pinidir

// Değişkenler tanımlamaları
int sure;           // Ultrasonik dalganın geri dönüş süresini ölçen değişken
int uzaklik;        // Hesaplanan uzaklık değerini tutan değişken

// LCD bağlantı pinleri tanımlamaları
int rs = 12;
int en = 11;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);  // LCD nesnesi oluşturulması

void setup() {
  // Pin modları tanımlamaları
  pinMode(trig, OUTPUT);   // Trig pin çıkış olarak ayarlanır (Ultrasonik tetik)
  pinMode(echo, INPUT);    // Echo pin giriş olarak ayarlanır (Ultrasonik echo)
  
  // LCD ekran başlatılır
  lcd.begin(16, 2);        // 16x2 LCD ekran başlatılır (16 sütun, 2 satır)
}

void loop() {
  // Ultrasonik sensör tetiklenir
  digitalWrite(trig, LOW);           // Trig pin düşük seviyeye getirilir
  delayMicroseconds(5);              // Kısa bir bekleme süresi
  digitalWrite(trig, HIGH);          // Trig pin yüksek seviyeye getirilir
  delayMicroseconds(10);             // Ultrasonik dalganın gönderilmesi için bekleme süresi
  digitalWrite(trig, LOW);           // Trig pin tekrar düşük seviyeye getirilir
  
  // Echo pininden geri dönüş süresi ölçülür
  sure = pulseIn(echo, HIGH, 11600); // Echo pininden yüksek sinyal süresi ölçülür (mikro saniye cinsinden)
  
  öm // Uzaklık hesaplanır
  uzaklik = sure * 0.0345 / 2;       // Ses hızına göre uzaklık hesaplanır
  
  delay(250);                        // 250 milisaniye bekleme süresi
  
  // LCD ekran temizlenir
  lcd.clear();                       // LCD ekran temizlenir
  
  // LCD ekran üzerine yazılar yazılır
  lcd.setCursor(0, 0);               // İmleç 1. satırın 1. sütununa konumlandırılır
  lcd.print("Uzaklik:");             // Uzaklık metni yazılır
  
  lcd.setCursor(0, 1);               // İmleç 2. satırın 1. sütununa konumlandırılır
  lcd.print(uzaklik);                // Hesaplanan uzaklık değeri yazılır
  lcd.print("cm");                   // Birim (cm) yazılır
}

