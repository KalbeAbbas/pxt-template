#ifndef xChip_H
#define xChip_H

#include "pxt.h"
//#include "MicroBitI2C.h"
#include "Pin.h"
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
            bool wireWriteByte(uint8_t val);
            bool wireWriteDataByte(uint8_t reg, uint8_t val);
            bool wireWriteDataBlock(uint8_t reg, uint8_t *val, unsigned int len);
            bool wireReadDataByte(uint8_t reg, uint8_t &val);
            int wireReadDataBlock(uint8_t reg, uint8_t *val, unsigned int len);
    void delay(uint16_t time);
  };
  
}
#endif
         
