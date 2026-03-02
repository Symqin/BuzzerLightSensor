# 🌙 Sistem Monitoring Intensitas Cahaya (Arduino UNO)

Sistem monitoring cahaya berbasis **Arduino UNO** menggunakan sensor **LDR (Light Dependent Resistor)** untuk mendeteksi kondisi terang dan gelap pada lingkungan secara real-time.

Ketika kondisi **gelap** terdeteksi, sistem akan mengaktifkan **LED indikator** dan **buzzer** sebagai alarm otomatis.

---

## 📸 Preview Proyek

Tambahkan gambar rangkaian pada folder `/images`.

```md
![image alt ](https://github.com/Symqin/BuzzerLightSensor/blob/main/images/rangkaian.png?raw=true)
```

---

## 📌 Fitur Utama

✅ Monitoring intensitas cahaya real-time
✅ Alarm otomatis saat gelap
✅ LED indikator berkedip
✅ Monitoring melalui Serial Monitor
✅ Sistem sederhana dan mudah dikembangkan

---

## 🧰 Komponen yang Digunakan

| Komponen           | Jumlah     |
| ------------------ | ---------- |
| Arduino UNO        | 1          |
| LDR (Light Sensor) | 1          |
| Resistor 10kΩ      | 1          |
| Buzzer             | 1          |
| Breadboard         | 1          |
| Kabel Jumper       | Secukupnya |

---

## ⚙️ Cara Kerja Sistem

1. Sensor LDR membaca intensitas cahaya lingkungan.
2. Arduino menerima data analog dari pin **A5**.
3. Sistem membandingkan nilai cahaya dengan batas (threshold).
4. Jika kondisi gelap:

   * LED berkedip
   * Buzzer berbunyi
5. Jika kondisi terang:

   * Alarm dimatikan.

---

## 🔌 Konfigurasi Pin

| Komponen   | Pin Arduino       |
| ---------- | ----------------- |
| LDR Output | A5                |
| Buzzer     | D2                |
| LED        | LED_BUILTIN (D13) |

---

## ▶️ Cara Menjalankan

1. Install **Arduino IDE**
2. Hubungkan Arduino UNO ke komputer menggunakan USB
3. Upload program `.ino` ke board Arduino
4. Buka **Serial Monitor (9600 baud)**
5. Uji sensor dengan menutup atau memberi cahaya pada LDR

---

## 📊 Contoh Output Serial Monitor

```
--- Sistem Monitoring Cahaya Dimulai ---
Intensitas Cahaya: 320
STATUS: GELAP - Alarm Aktif!
```

---

## 📁 Struktur Repository

```
arduino-light-monitor/
│
├── README.md
├── light_monitor.ino
└── images/
    └── rangkaian.png
```

---

## 🚀 Pengembangan Selanjutnya

* Integrasi IoT (ESP8266 / ESP32)
* Notifikasi ke smartphone
* LCD / OLED display
* Smart lamp automation
* Penyimpanan data intensitas cahaya

---

## 👨‍💻 Author

**Syahril Mutaqin**

---
