#include <Servo.h> // Servo motor kontrolü için gerekli kütüphane tanımlaması

Servo motor; // Servo motor nesnesi tanımlaması

int deger; // Analog sensörden okunan değeri saklamak için değişken
int derece; // Servo motorun açısını saklamak için değişken

void setup() {
  motor.attach(3); // Servo motorun sinyal pini olarak 3. pin kullanılacak
   
}

void loop() {
  deger = analogRead(A0); // A0 pininden analog değer oku (0-1023 arası)
  
  // Okunan analog değeri, servo motorun hareket açısına dönüştür
  // 0-1023 arasındaki analog değeri 0-180 derece arasındaki bir açıya haritala
  derece = map(deger, 0, 1023, 0, 180);
  
  // Servo motorunun açısını belirlenen dereceye ayarla
  motor.write(derece);
  

}
