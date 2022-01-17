









//% color="#4C97FF"
namespace blocks {

    let test: () => void;
    //%block
    export function move(): void {

        test();

    }
    /**
     * This is an event handler block
     */
    //% block="on event"
    //% draggableParameters="reporter"
    export function onEvent(handler: () => void) {
        handler = test;

        let a = 0;



    }
}
