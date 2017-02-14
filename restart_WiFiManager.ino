void RestartWifiManager()
{

  String data = server.arg("plain");
  yield();
  StaticJsonBuffer<200> jBuffer;
  JsonObject& jObject = jBuffer.parseObject(data);
  String Password = jObject["Password"];

  if(Password == passw)
 {
  EEPROM.write(35, 1);
  EEPROM.commit();
  Serial.println("reset WiFiManager");
  Serial.println(EEPROM.read(35));
  Serial.println("reset wifi modulen");
  rightPassword = true;
 }
 else
 {
  Serial.println("Wrong password!");
  rightPassword = false;
 }
  
}
