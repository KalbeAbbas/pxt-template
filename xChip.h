#ifndef xChip_H
#define xChip_H

#include "pxt.h"
//#include "MicroBitI2C.h"

#include "I2C.h"

#ifndef byte
typedef uint8_t byte;
#endif

namespace xChip
{
  class xChipClass
  {
    public:
    xChipClass();
    uint8_t begin(uint8_t var);
    private:
    auto sda;
    auto scl;
    
  };
  
}
#endif
         
