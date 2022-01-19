#include "pxt.h"




//% 
namespace myBlocks
{ 
   /**
   *CTOF
   */
   //% block 
   //% help=myBlocks/cToF async
   //% weight=100
   //% blockId=CTOF 
    int ctof( int value)   
    {  

    uBit.display.scroll("HELLO WORLD!",50);

    release_fiber();

    return 100
    }
    /**

    
    
    */
    //% block
    
    float fToC(float value)
    {   
        return (value - 32.0) / 1.8;
    }
} // namespace myBlocks
// Documentation on defining PXT blocks:
// https://www.pxt.io/defining-blocks

