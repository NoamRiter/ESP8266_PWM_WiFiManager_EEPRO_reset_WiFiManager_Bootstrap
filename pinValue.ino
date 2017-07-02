void PinValue()
{
  String data = server.arg("plain");
   yield();
  StaticJsonBuffer<200> jBuffer;
  JsonObject& jObject = jBuffer.parseObject(data);
  int pinNumber = jObject["pin"];
  int value = jObject["value"];
  yield();

  switch ((int)pinNumber) {
    case 5:
      pwm5 = value;
      Serial.print("Pin: ");
      Serial.println(pinNumber);
      Serial.print("Value: ");
      Serial.println(pwm5);
      analogWrite(14, value);
      break;
    case 6:
      pwm6 = value;
      Serial.print("Pin: ");
      Serial.println(pinNumber);
      Serial.print("Value: ");
      Serial.println(value);
      analogWrite(2, value);
      break;
    case 7:
      pwm7 = value;
      Serial.print("Pin: ");
      Serial.println(pinNumber);
      Serial.print("Value: ");
      Serial.println(value);
      analogWrite(0, value); 
      break;
    case 8:
      pwm8 = value;
      Serial.print("Pin: ");
      Serial.println(pinNumber);
      Serial.print("Value: ");
      Serial.println(value);
      analogWrite(13, value); 
      break;  
    case 9:
      pwm9 = value;
      Serial.print("Pin: ");
      Serial.println(pinNumber);
      Serial.print("Value: ");
      Serial.println(value);
      analogWrite(12, value);
      break;
      
    default: 
          //do nothing!
    break;
  }
  
}
