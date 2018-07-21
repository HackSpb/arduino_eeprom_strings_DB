class EEPROMStringClass
{
    
  public:
  int start_address=0, max_length=70;

  void writeString(int num, String s){
    int addr=start_address + num*max_length;
    
    for(int i=0; i<s.length();i++){
      EEPROM.write(addr, s[i]);
      addr++;
      }
    EEPROM.write(addr, NULL);
    }

  String readString(int num){
    int addr=start_address + num*max_length;
    String s;
    char c;
    for(int i=0; i<max_length;i++){
      c = EEPROM.read(addr);
      if(c!=NULL) s+= c;
      else break;
      addr++;
      }Serial.println(s); 
      return s;
    }
      
};
