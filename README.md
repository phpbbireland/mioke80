# mioke80 / ayla_411
QMK Based Open Hardware Keyboard with 99 Keys

Just another open source / open hardware ~80% keyboard...

Ref: https://hackaday.io/project/197065-mioke80-iso-99-key-80-keyboard

+ Schematic complete...  
+ Software 80% complete...  
+ QMK/VIA code tested on Blackpill 411 Dev Board (see blackpill_version)... working 11th August 2024
+ Keyboard works... Loads in usevia.app... Needed work to get RGB and Encoder working...

My main test code is now in /blackpill_version/QMK/ayla/ayla80  

I have designed a new test board using the STM32F411RETx, it contains all the necessary keyboard electronics (except for the key switches, matrix diodes and RGB leds as these are on
the actual keyboard PCB from the first prototype). Connection between boards is via 30 pin 1.27" pitch header connector.  

Note: *kicad2* folder contains working test copy, files will be moved to **kicad** once testing complete...  

Kicad Resources:  
[https://github.com/ebastler/marbastlib](https://github.com/ebastler/marbastlib)  
[https://github.com/joe-scotto/scottokeebs](https://github.com/joe-scotto/scottokeebs)

Matrix 10X10
```
    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │0,0│   │0,1││N/A││0,2│0,3│0,4│0,5││0,6│0,7│0,8│0,9││1,0│1,1│1,2│1,3││1,4││1,5││1,6│
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │1,7│   │1,8│1,9│2,0│2,1│2,2│2,3│2,4│2,5│2,6│2,7│2,8│2,9│3,0│  3,1  ││3,2││3,3││3,4│
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │3,5│   │ 3,6 │3,7│3,8│3,9│4,0│4,1│4,2│4,3│4,4│4,5│4,6│4,7│4,8│     ││4,9││5,0││5,1│
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │5,2│   │ 5,3  │5,4│5,5│5,6│5,7│5,8│5,9│6,0│6,1│6,2│6,3│6,4│6,5│6.6 ││6,7││6,8││6,9│
    ├───┤   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │7,0│   │7,1 │7,2│7,3│7,4│7,5│7,6│7,7│7,8│7,9│8,0│8,1│8,2│    8,3   ││8,4││8,5││8,6│
    ├───┤   ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │8,7│   │8.8 │8,9 │9,1 │           9,2          │9,3 │9,4 │9,5 │9,6 ││9,7││9,8││9,9│
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘
```

Will add 4x3 number keypad and rotary encoder which attaches via a 5x2 ribbon cable but might need more gpio pin, another process for this version?
The Blackpill version has an endoder... 
**Note**
Some GPIO pins may change as it appears some can't be used (according to sources)...
