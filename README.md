# DHT22-Temperature-Humidity-LCD

# DHT22 Temperature & Humidity Monitor 🌡️

A simple Arduino project that uses a **DHT22 temperature and humidity sensor** with a **16x2 I2C LCD** to display real-time temperature and humidity readings.

## 🛠️ Components

* Arduino Uno
* DHT22 Temperature & Humidity Sensor
* 16x2 I2C LCD
* Jumper wires
* Breadboard

## 🔌 Wiring

### DHT22

| DHT22 | Arduino       |
| ----- | ------------- |
| VCC   | 5V            |
| DATA  | Digital Pin 3 |
| GND   | GND           |

### 16x2 I2C LCD

| LCD | Arduino |
| --- | ------- |
| VCC | 5V      |
| GND | GND     |
| SDA | A4      |
| SCL | A5      |

## 📚 Libraries

This project uses:

* `DHT.h`
* `Wire.h`
* `LiquidCrystal_I2C.h`

Make sure these libraries are installed in the Arduino IDE before uploading the code.

## ⚙️ How It Works

The Arduino reads temperature and humidity data from the DHT22 sensor and displays the readings on the 16x2 I2C LCD.

The sensor is read approximately every **2 seconds**, which is suitable for the DHT22.

## 🚀 How to Use

1. Connect the components according to the wiring tables above.
2. Open `DHT22_LCD.ino` in the Arduino IDE.
3. Install the required libraries.
4. Select your Arduino board and COM port.
5. Upload the code.
6. The LCD will display the current temperature and humidity.

## 📺 Example Output

```text
Temp: 25.4 C
Humidity: 52.3%
```

## 📁 Project Structure

```text
DHT22-Temperature-Humidity/
│
├── DHT22_LCD.ino
└── README.md
```

## 🧑‍💻 About

This is a beginner Arduino electronics project created to learn about:

* Sensors
* I2C communication
* LCD displays
* Arduino programming
* Reading and displaying environmental data

---

⭐ Feel free to use this project as a starting point for your own Arduino experiments.
