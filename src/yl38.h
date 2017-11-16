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

#ifndef YL38_H_
#define YL38_H_

#include "Arduino.h"

class YL38
{
    public:

        YL38(uint16_t pin);
        void begin(void);
        uint32_t Read(void);
        uint8_t CalculateHumidity(void);

    private:
        uint16_t _pin;
        uint32_t soilHumidity;
};


#endif

