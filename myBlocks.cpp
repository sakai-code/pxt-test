#include "pxt.h"




//% weight=100 color=#0fbc11 
//% icon="\uf110"
namespace myBlocks
{
    
 
  
      /**
     * Draws an image on the LED screen.
     * @param leds the pattern of LED to turn on/off
     * @param interval time in milliseconds to pause after drawing
     */
    //% help= myBlocks/cToF
    //% weight=95 blockGap=8
    //% blockId=CTOF
    //% block="CTOF" icon="\uf00a"
    int  cToF()   
    {  

    uBit.display.scroll("HELLO WORLD!",50);

    release_fiber();
    return 0;
    }

  
    float fToC(float value)
    {   
        return (value - 32.0) / 1.8;
    }
} // namespace myBlocks
// Documentation on defining PXT blocks:
// https://www.pxt.io/defining-blocks

