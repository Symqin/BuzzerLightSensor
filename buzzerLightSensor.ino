#define BUZZER 2

// Fungsi untuk membuat LED berkedip
void ledBlink(int speed) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(speed);
  digitalWrite(LED_BUILTIN, LOW);
  delay(speed); // Tambahan delay agar kedipan terlihat jelas (mati-nyala)
}

// Fungsi untuk membuat suara di buzzer module
void soundAlert(int speed, int freq) {
  tone(BUZZER, freq);
  delay(speed);
  noTone(BUZZER);
}

void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);            // LDR di pin A5
  pinMode(LED_BUILTIN, OUTPUT);  // LED internal (Pin 13)
  pinMode(BUZZER, OUTPUT);       // Buzzer di Pin 2
  
  Serial.println("--- Sistem Monitoring Cahaya Dimulai ---");
}

void loop() {
  // 1. Membaca nilai sensor cahaya
  int sensor_value = analogRead(A5);
  
  // 2. Menampilkan nilai ke Serial Monitor
  Serial.print("Intensitas Cahaya: ");
  Serial.println(sensor_value);

  // 3. Logika kontrol (Jika GELAP, nyalakan alarm)
  // Kamu bisa ubah angka 500 ini sesuai sensitivitas yang diinginkan
  if (sensor_value < 500) {
    Serial.println("STATUS: GELAP - Alarm Aktif!");
    ledBlink(200);        // Kedip cepat
    soundAlert(150, 1000); // Bunyi bip frekuensi 1000Hz
  } else {
    // Jika terang, pastikan semua mati
    digitalWrite(LED_BUILTIN, LOW);
    noTone(BUZZER);
  }

  delay(300); // Jeda sedikit agar pembacaan sensor stabil
}