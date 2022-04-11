#include <Arduino.h>
#include <ArduinoJson.h>
DynamicJsonDocument JsonFile (256);
JsonObject json;
int x = 0;

void setup()
{
  Serial.begin(9600);
  
  
  JsonFile["Key1"] = "Value1";
  JsonFile["Key2"] = "Value2";
  JsonFile["Key3"] = "Value3";
}

void loop()
{

//JsonObject jsonObj;
  //jsonObj = JsonFile.as<JsonObject>();
  for (JsonPair item : JsonFile.as<JsonObject>())
  {
    Serial.printf("%s : %s \n", item.key().c_str(), item.value().as<String>().c_str());
  }
  Serial.println(x++);
  delay(10000);
}

