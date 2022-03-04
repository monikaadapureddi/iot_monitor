#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "gTtVGv8yDLfM0zjxMAv7Gm70BYIslhz3";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "JioFi3_08C755";
char pass[] = "nudrzjps3d";
WidgetTerminal terminal(V1);

void setup()
{
  // Debug console
  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  
 
  terminal.print("sensorValue");
   Blynk.run();
  if(sensorValue<500)
  {
    terminal.print("I AM HEALTHY");
    }
    else{
       terminal.println("NO WATER");
      
      }
}
