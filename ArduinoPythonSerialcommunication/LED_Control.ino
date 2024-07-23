char gelenveri; // Karakter tipinde değişken tanımlaması, seri porttan gelen veriyi tutacak.

void setup() {
  Serial.begin(9600); // Seri iletişimi başlatma, baud rate olarak 9600 kullanılıyor.
  pinMode(13, OUTPUT); // 13. pine bağlı LED'in çıkış olarak ayarlanması.
}

void loop() {
  if (Serial.available() > 0) { // Seri portta veri var mı diye kontrol ediliyor.
    gelenveri = Serial.read(); // Seri porttan gelen veriyi okuma.
    
    if (gelenveri == 'a') { // Eğer gelen veri 'a' ise:
      digitalWrite(13, HIGH); // 13. pine bağlı LED'i yak.
    } else if (gelenveri == 'b') { // Eğer gelen veri 'b' ise:
      digitalWrite(13, LOW); // 13. pine bağlı LED'i söndür.
    }
  }
}

