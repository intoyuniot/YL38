/**************************************************
soil humidity
**************************************************/

#include <yl38.h>

YL38 yl38 = YL38(A0);

uint8_t soilHumidity;

void setup()
{
    yl38.begin();
    Serial.begin(115200);
    delay(1000);
}

void loop()
{
    soilHumidity = yl38.CalculateHumidity();
    Serial.println(soilHumidity);
    delay(2000);
}
