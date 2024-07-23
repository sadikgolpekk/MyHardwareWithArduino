import serial # Serial kütüphanesi

# Seri port bağlantısını 'COM6' üzerinde 9600 baud rate ile başlat
port = serial.Serial('COM6', 9600)

while True:
    # Kullanıcıdan LED'i yakmak veya söndürmek için giriş alınması
    verigiris = input("ledi yakmak icin 'a' harfine basin, söndürmek için ise 'b' ye basin: ")
    
    if verigiris == "a":
        port.write(b'a')  # 'a' karakterini byte olarak seri porta yaz
        print("LED yakma komutu gönderildi.")
    
    elif verigiris == "b":
        port.write(b'b')  # 'b' karakterini byte olarak seri porta yaz
        print("LED söndürme komutu gönderildi.")
    
    else:
        print("Geçersiz giriş. 'a' veya 'b' harflerinden birini giriniz.")
