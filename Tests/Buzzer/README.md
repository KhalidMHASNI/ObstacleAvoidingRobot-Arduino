This is a simple code to show how you can play with buzzer in two different ways<br />
<br />
**Methode 1:**<br />
    It's much better than methode 2 , because you can edit the sound signal and more<br />
**Methode 2:**<br />
    It's a basic methode<br />
    Sometimes if you use Methode 1 (tone() ...) along with the library NewPing for the ultrasonic sensor a huge error pop-up while compiling or uploading : <br />
              ``` Arduino: 1.8.19 (Linux), Board: "Arduino Uno"<br />
                  Tone.cpp.o (symbol from plugin): In function `timer0_pin_port': <br />
                (.text+0x0): multiple definition of `__vector_7' <br />
                libraries/NewPing/NewPing.cpp.o (symbol from plugin):(.text+0x0): first defined here<br />
                collect2: error: ld returned 1 exit status<br />
                exit status 1<br />
                Error compiling for board Arduino Uno.<br />```
    This error simply means that the function **tone()** and the library **newPing()** use the same symbol, so it's recommended to use the Methode 2, for simple codes.<br />
