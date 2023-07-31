#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x3F,16,2); 
float soil_percentage; 
int soil_sensor; 
const int soil_pin = A0; 
const int Red_pin = 8; 
const int Yellow_pin = 9; 
const int Green_pin = 10; o
#define BUZZER_PIN 12 
void buz() { 
  for(int k=0;k<2;k++) 
  { 
    digitalWrite(BUZZER_PIN, HIGH); 
    delay(1000); 
    digitalWrite(BUZZER_PIN, LOW); 
    delay(200); 
 } 
} 
void setup() 
{ 
 pinMode(BUZZER_PIN,OUTPUT); 
 pinMode(Red_pin,OUTPUT); 
 pinMode(Yellow_pin,OUTPUT); 
 pinMode(Green_pin,OUTPUT); 
 pinMode(soil_pin,INPUT); 
 digitalWrite(Red_pin, LOW); 
 digitalWrite(Yellow_pin, LOW); 
 digitalWrite(Green_pin, LOW); 
 lcd.backlight(); 
 lcd.begin(16, 2); 
 lcd.clear(); 
 lcd.setCursor(0,0); 
 lcd.print("SOIL MOISTURE "); 
 lcd.setCursor(0,1); 
 lcd.print(" MONITORING "); 
 delay(3000); 
 //Serial.begin(9600); delay(100); 
} 
 
void loop() 
{ 
  ksn: 
  soil_sensor = analogRead(soil_pin); 
  Serial.println(soil_sensor); 
  soil_percentage= ( 100 - ( (soil_sensor/1023.00) * 100 ) ); 
  lcd.clear(); 
  lcd.setCursor(0,0); 
  lcd.print("SOIL MOISTURE: "); 
  lcd.setCursor(6,1);
  lcd.print(soil_percentage);
  lcd.print(" %"); 
  delay(1000); 
  if(soil_percentage>=0 && soil_percentage<=10) 
  { 
    digitalWrite(Red_pin, HIGH); 
 digitalWrite(Yellow_pin, LOW); 
digitalWrite(Green_pin, LOW); 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print(" SOIL MOISTURE "); 
lcd.setCursor(0,1); 
lcd.print(" LOW LEVEL "); 
buz(); 
delay(1000); 
 } 
 if(soil_percentage>=11 && soil_percentage<=69) 
 { 
 digitalWrite(Red_pin, LOW); 
digitalWrite(Yellow_pin, HIGH); 
digitalWrite(Green_pin, LOW); 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print(" SOIL MOISTURE "); 
lcd.setCursor(0,1); 
lcd.print(" MEDIUM LEVEL "); 
delay(1000); 
 } 
 if(soil_percentage>=70 && soil_percentage<=100) 
 { 
 digitalWrite(Red_pin, LOW); 
digitalWrite(Yellow_pin, LOW); 
digitalWrite(Green_pin, HIGH); 
lcd.clear(); 
lcd.setCursor(0,0); 
 lcd.print(" SOIL MOISTURE "); 
lcd.setCursor(0,1); 
lcd.print(" HIGH LEVEL "); 
delay(1000); 
 } 
}