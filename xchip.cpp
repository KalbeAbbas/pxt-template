#include "xChip.h"

using namespace pxt;
using namespace xChip;

MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);

bool xChip::begin()
{
  return true; 
}

nampespace xChip
{
  // create pointer object. eg
  xChipClass *xChipPointer = new xChipClass;
  
  // eg of how to point to class member
  //%
  bool begin()
  {
    return xChipPointer->begin();
  }
}
