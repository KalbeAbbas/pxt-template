#include "xchip.h"

using namespace pxt;
using namespace xChip;

MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);

xChipClass::xChipClass()
{

}

uint8_t xChipClass::begin(uint8_t var)
{
  return var; 
}


// create functions for the .ts file to access
nampespace xChip
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
