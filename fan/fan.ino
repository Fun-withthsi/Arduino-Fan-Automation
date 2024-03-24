#include <LiquidCrystal.h>
#include <Servo.h>
#include <DHT.h>

#define DHTPIN 1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

Servo myservo;
int pos = 0;
const int incrementButtonPin = 2;  // Change the pin number based on your setup
const int decrementButtonPin = 3;  // Change the pin number based on your setup
int settingNumber = 22;

void setup() {
  lcd.begin(16, 2);
  dht.begin();
  myservo.attach(5);
   pinMode(incrementButtonPin, INPUT_PULLUP);
  pinMode(decrementButtonPin, INPUT_PULLUP);

 
}

void loop() {
  float temperature = dht.readTemperature();
   int incrementButtonState = digitalRead(incrementButtonPin);
  int decrementButtonState = digitalRead(decrementButtonPin);

lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  lcd.write(byte(223));
  

   if (incrementButtonState == LOW && settingNumber < 30) {
    settingNumber++;
    delay(100);  // debounce delay
  }

  // Check if the decrement button is pressed
  if (decrementButtonState == LOW && settingNumber > 17) {
    settingNumber--;
    delay(100);  // debounce delay
  }

  // Display the setting number on the LCD
  
  lcd.setCursor(9, 1);
  lcd.print("Set: ");
  lcd.print(settingNumber);


  if (temperature >= settingNumber) {
    myservo.write(180); // 360° position
    lcd.setCursor(0, 1);
  lcd.print("Fan: on ");
  } else if (temperature <= settingNumber-0.5) {
    myservo.write(0); // 0° position
    lcd.setCursor(0, 1);
lcd.print("Fan: Off ");

  
  }
  
  delay(100); // Adjust the delay as needed for your application
}

