//arduinoo
char dataString[50] = {0};
int a =0; 

void setup() {
Serial.begin(9600);              //Starting serial communication
}
  
void loop() {
  a++;                          // a value increase every loop
  sprintf(dataString,"%02X",a); // convert a value to hexa 
  Serial.println(dataString);   // send the data
  delay(1000);                  // give the loop some break
}

//rsp
import serial

ser = serial.Serial('/dev/ttyACM0',9600)
s = [0,1]
while True:
  read_serial=ser.readline()
  s[0] = str(int (ser.readline(),16))
  print s[0]
  print read_serial
