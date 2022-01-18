#include "pxt.h"





namespace myBlocks
{
    //% blockId=device_get_digital_pin block="test $value"
      //% blockNamespace=myBlocks
    void cToF(float value)   
    {  

    uBit.display.scroll("HELLO WORLD!",50);

    release_fiber();
    }

    //%
    float fToC(float value)
    {   
        return (value - 32.0) / 1.8;
    }
} // namespace myBlocks
// Documentation on defining PXT blocks:
// https://www.pxt.io/defining-blocks

