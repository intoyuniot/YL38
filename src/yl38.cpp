/*
 ******************************************************************************
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation, either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, see <http://www.gnu.org/licenses/>.

 This library is YL38 soil moisture sensors, you can use this library to obtain soil moisture

 ******************************************************************************
 */

#include "yl38.h"

//Specifications Pin
YL38::YL38(uint16_t pin)
{
    _pin = pin;
}

//Initialization should call this function
void YL38::begin(void)
{
    pinMode(_pin,AN_INPUT);
}

// Get soil moisture values
uint32_t YL38::Read(void)
{
    return analogRead(_pin);
}

//Calculation of soil moisture
uint8_t YL38::CalculateHumidity(void) // 3.3V
{
    soilHumidity = Read();

    if(soilHumidity < 1990)
    {
        return 100;
    }
    else if(soilHumidity >= 3970)
    {
        return 0;
    }
    else
    {
        return (uint8_t)((3970-soilHumidity)/20);
    }
}





