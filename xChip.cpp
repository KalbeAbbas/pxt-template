#include "xChip.h"

using namespace pxt;
using namespace xChip;

//MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);


xChipClass::xChipClass()
{

}

uint8_t xChipClass::begin(uint8_t var)
{
  return var; 
}

bool xChipClass::wireWriteByte(uint8_t val)
{
   auto sda = LOOKUP_PIN(SDA);
 auto scl = LOOKUP_PIN(SCL);
 codal::I2C* i2c = pxt::getI2C(sda, scl);
    int error;
    error = i2c->write((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)&val, 1);
    if(error != 0) {
        return false;
    } 
    return true;
}

// bool xChipClass::wireWriteDataByte(uint8_t reg, uint8_t val)
// {
//    auto sda = LOOKUP_PIN(SDA);
//  auto scl = LOOKUP_PIN(SCL);
//  codal::I2C* i2c = pxt::getI2C(sda, scl);
//     int error;
//     uint8_t buf[2];
//     buf[0]=(uint8_t)reg;
//     buf[1]=(uint8_t)val;
//     error = i2c->write((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)&buf, 2);
//     if(error != 0) {
//         return false;
//     } 
//     return true;
// }

// bool xChipClass::wireWriteDataBlock(uint8_t reg, uint8_t *val, unsigned int len)
// {
//     return true;
// }

// bool xChipClass::wireReadDataByte(uint8_t reg, uint8_t &val)
// {
//    auto sda = LOOKUP_PIN(SDA);
//  auto scl = LOOKUP_PIN(SCL);
//  codal::I2C* i2c = pxt::getI2C(sda, scl);
//     int error;
//     error = i2c->write((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)&reg, 1, true);
//     if(error != 0) {
//         return false;
//     }
//     error = i2c->read((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)&val, 1);
//     if(error != 0) {
//         return false;
//     }
//      return true;
// }

// int xChipClass::wireReadDataBlock(uint8_t reg, uint8_t *val, unsigned int len)
// {
//    auto sda = LOOKUP_PIN(SDA);
//  auto scl = LOOKUP_PIN(SCL);
//  codal::I2C* i2c = pxt::getI2C(sda, scl);
//     unsigned char i = 0;
//     int error;
//     error = i2c->write((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)&reg, 1, true);
//     if(error != 0) {
//         return false;
//     }
//     error = i2c->read((uint16_t)APDS9960_I2C_ADDR, (uint8_t*)val, len);
//     if(error != 0) {
//         return false;
//     }
//     return len;
// }

// void xChipClass::delay(uint16_t time)
// {
//     //uBit.sleep(time);
// }

// create functions for the .ts file to access
namespace xChip
{
  // create pointer object. eg
  xChipClass *xChipPointer = new xChipClass;
  
  // eg of how to point to class member
  //%
  uint8_t begin(uint8_t var)
  {
    return xChipPointer->begin(var);
  }
}
