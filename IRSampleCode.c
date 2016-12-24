#include <IRremote.h>
int RECV_PIN = 2; // set digital 2 to be the receive pin

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {                
  irrecv.enableIRIn(); // Start the receiver
  Serial.begin(9600);
}
void loop() {
  int i=0;
   if (irrecv.decode(&results)) {   
       translateIR();
       irrecv.resume(); // Receive the next value 
   }   
 }

 void translateIR() // takes action based on IR code received describing Car MP3 IR codes 
{
  switch(results.value){
  case 0xFFA25D:  
    Serial.println(" CH-            "); 
    break;
  case 0xE318261B:  
    Serial.println(" CH-            "); 
    break;
  case 0xFF629D:  
    Serial.println(" CH             "); 
    break;
  case 0x511DBB:  
    Serial.println(" CH             "); 
    break;
  case 0xFFE21D:  
    Serial.println(" CH+            "); 
    break;
  case 0xEE886D7F:  
    Serial.println(" CH+            "); 
    break;  
  case 0xFF22DD:  
    Serial.println("|<<          "); 
    break;
   case 0x52A3D41F:  
    Serial.println("|<<          "); 
    break;
  case 0xFF02FD:  
    Serial.println(">>|       "); 
    break;
  case 0xD7E84B1B:  
    Serial.println(">>|        "); 
    break;
  case 0xFFC23D:  
    Serial.println(" PLAY/PAUSE     "); 
    break;
   case 0xBE90A873:  
    Serial.println(" PLAY/PAUSE     "); 
    break;
  case 0xFFE01F:  
    Serial.println(" VOL-           "); 
    break;
   case 0xF076C13B:  
    Serial.println(" VOL-           "); 
    break;
  case 0xFFA857:  
    Serial.println(" VOL+           "); 
    break;

    case 0xA3C8EDDB:  
    Serial.println(" VOL+           "); 
    break;
  case 0xFF906F:  
    Serial.println(" EQ             "); 
    break;
  case 0xE5CFBD7F:  
    Serial.println(" EQ             "); 
    break;
  case 0xFF6897:  
    Serial.println(" 0              "); 
    break;
  case 0xC101E57B:  
    Serial.println(" 0              "); 
    break;
  case 0xFF9867:  
    Serial.println(" 100+           "); 
    break;
    case 0x97483BFB:  
    Serial.println(" 100+           "); 
    break;
  case 0xFFB04F:  
    Serial.println(" 200+           "); 
    break;
  case 0xF0C41643:  
    Serial.println(" 200+           "); 
    break;
  case 0xFF30CF:  
    Serial.println(" 1              "); 
    break;
  case 0x9716BE3F:  
    Serial.println(" 1              "); 
    break;

  case 0xFF18E7:  
    Serial.println(" 2              "); 
    break;
  case 0x3D9AE3F7:  
    Serial.println(" 2              "); 
    break;
  case 0xFF7A85:  
    Serial.println(" 3              "); 
    break;
  case 0x6182021B:  
    Serial.println(" 3              "); 
    break;
  case 0xFF10EF:  
    Serial.println(" 4              "); 
    break;
  case 0x8C22657B:  
    Serial.println(" 4              "); 
    break;
  case 0xFF38C7:  
    Serial.println(" 5              "); 
    break;
  case 0x488F3CBB:  
    Serial.println(" 5              "); 
    break;
  case 0xFF5AA5:  
    Serial.println(" 6              "); 
    break;
  case 0x449E79F:  
    Serial.println(" 6              "); 
    break;
  case 0xFF42BD:  
    Serial.println(" 7              "); 
    break;
  case 0x32C6FDF7:  
    Serial.println(" 7              "); 
    break;
  case 0xFF4AB5:  
    Serial.println(" 8              "); 
    break;
  case 0x1BC0157B:  
    Serial.println(" 8              "); 
    break;
  case 0xFF52AD:  
    Serial.println(" 9              "); 
    break;
  case 0x3EC3FC1B:  
    Serial.println(" 9              "); 
    break;
    case 0xFFFFFFFF:  
    Serial.println("               ");  //ignore the buffer error
    break;
  case 0xFF:  
    Serial.println("               "); // ignore buffer error
    break;
  default: 
    Serial.print(" unknown button   ");
    Serial.println(results.value, HEX);
  }
  delay(500);
} 
