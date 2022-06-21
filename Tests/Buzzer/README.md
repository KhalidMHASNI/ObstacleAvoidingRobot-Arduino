This is a simple code to show how you can play with buzzer in two different ways

**Methode 1:**
    It's much better than methode 2 , because you can edit the sound signal and more
**Methode 2:**
    It's a basic methode
    Sometimes if you use Methode 1 (tone() ...) along with the library NewPing for the ultrasonic sensor a huge error pop-up while compiling or uploading :
                **Arduino: 1.8.19 (Linux), Board: "Arduino Uno"**
                **Tone.cpp.o (symbol from plugin): In function `timer0_pin_port':**
                **(.text+0x0): multiple definition of `__vector_7'**
                **libraries/NewPing/NewPing.cpp.o (symbol from plugin):(.text+0x0): first defined here**
                **collect2: error: ld returned 1 exit status**
                **exit status 1**
                **Error compiling for board Arduino Uno.**
    This error simply means that the function **tone()** and the library **newPing()** use the same symbol, so it's recommended to use the Methode 2, for simple codes.