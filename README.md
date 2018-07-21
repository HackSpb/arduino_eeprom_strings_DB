# arduino_eeprom_strings_DB
library for simple write and read strings variables in EEPROM

```c++
//necessary head
#include <EEPROM.h>
EEPROMStringClass eString;

//your code
String stringOne = "simple string" ,stringTwo;
int number_of_variable=1;
void setup()
{
  EEPROM.begin(4096);
  Serial.begin(9600);
  eString.start_address=0; //default
  eString.max_length=70; 
  delay(4000);
  Serial.println("Hello");
  eString.writeString(number_of_variable,stringOne);
  delay(50);
  stringTwo = eString.readString(number_of_variable);
  Serial.println(stringTwo);
}
```
