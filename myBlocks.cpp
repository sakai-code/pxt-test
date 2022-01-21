#include "pxt.h"



//% icon="\uf03e"
namespace custom
{
   /**
    * @brief 
    * 
    * @param value 
    */
   //%  help=custom/cToF
   //% blockid=CTOF
  //% block
 
    void cToF(float value = 0)   
    {  

    uBit.display.scroll("HELLO WORLD!",50);

    release_fiber();
    return;
    }
  
   //% block
   /**
    * @brief 
    * 
    * @param value 
    * @return float 
    */


    float fToC(float value = 0)
    {   
        return (value - 32.0) / 1.8;
    }
} // namespace myBlocks
// Documentation on defining PXT blocks:
// https://www.pxt.io/defining-blocks

