# mioke80 / ayla_411
QMK Based Open Hardware Keyboard with 99 Keys

Just another open source / open hardware ~80% keyboard...

Ref: https://hackaday.io/project/197065-mioke80-iso-99-key-80-keyboard

Schematic complete...  
Software 80% complete...  
QMK code tested on Blackpill 411 Dev Board... working 11th August 2024  

Note: *kicad2* folder contains working test copy, files will be moved to **kicad** once testing complete...  

Kicad Resources:  
[https://github.com/ebastler/marbastlib](https://github.com/ebastler/marbastlib)  
[https://github.com/joe-scotto/scottokeebs](https://github.com/joe-scotto/scottokeebs)

```
    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │   │   │   ││   ││   │   │   │   ││   │   │   │   ││   │   │   │   ││   ││   ││   │
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │   │   │   │ ! │ " │ € │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       ││   ││   ││   │
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │   │   │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │     ││   ││   ││   │
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │   │   │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ ' │ # │    ││   ││   ││   │
    ├───┤   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │   │   │LSht│ \ │ Z │ X │ C │ V │ B │ N │ M │ < │ > │ ? │ RShift   ││   ││   ││   │
    ├───┤   ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │   │   │    │    │    │                        │    │    │    │    ││   ││   ││   │
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘
```

Will add 4x3 number keypad and rotary encoder which attaches via a 5x2 ribbon cable but might need more gpio pin, another process for this version?
The Blackpill version has an endoder... 
**Note**
Some GPIO pins may change as it appears some can't be used (according to sources)...
