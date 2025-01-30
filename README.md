# Wokwi Project - Potentiometer & LED Control

This **Wokwi** project simulates an **Arduino Uno** circuit where a **potentiometer** controls an LED. The LED turns **on** when the potentiometer value exceeds **400** and turns **off** otherwise. The potentiometer values are also printed to the **Serial Monitor**.

## Usage

### 1. Add Components
To build this circuit in Wokwi:
- Click the blue **"+"** button in the **diagram editor**.
- Add the following components:
  - **Arduino Uno**
  - **Potentiometer**
  - **LED**
  - (Optional) **Resistor (220Ω or 330Ω)** if simulating real hardware.

### 2. Connect Components
Wire the components as follows:

#### **Potentiometer Wiring**
- **Left leg** → **5V** (Power)
- **Middle leg** → **A0** (Analog Input)
- **Right leg** → **GND** (Ground)

#### **LED Wiring**
- **Anode (+, longer leg)** → **Digital Pin 2** (via a **220Ω or 330Ω resistor** in real-world setups)
- **Cathode (-, shorter leg)** → **GND**

### 3. Upload & Run the Code
Paste the following code into the Wokwi **code editor**:

```cpp
// Initialize the setup
void setup() {
  Serial.begin(9600); // Start serial communication
  pinMode(2, OUTPUT); // Set LED pin as output
}

// Main loop
void loop() {
  int knobValue = analogRead(A0); // Read potentiometer value
  Serial.println(knobValue); // Print value to Serial Monitor

  if (knobValue > 400) {
    digitalWrite(2, HIGH); // Turn LED on
  } else {
    digitalWrite(2, LOW);  // Turn LED off
  }
  delay(100); // Small delay for stability
}
