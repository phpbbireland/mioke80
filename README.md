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
      0       1    2    3   4   5   6    7   8   9  10   11  12  13  14   15   16   17
    ┌───┐   ┌───┐┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐┌───┐
    │Rst│   │Esc││P 6││F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PrL││SL ││Pse│
    └───┘   └───┘└───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘└───┘└───┘
    ┌───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐┌───┐┌───┐
    │P1 │   │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ + │ Bckspc││Ins││Hme││PgU│
    ├───┤   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤├───┤├───┤
    │P2 │   │ Tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │Enter││Del││End││PgD│
    ├───┤   ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │├───┤├───┤├───┤
    │P3 │   │ Caps │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ @ │ ~ │    ││<< ││ > ││ >>│
    ├───┤   ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤├───┤├───┤├───┤
    │P4 │   │ LShift │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │  RShift  ││P7 ││ ↑ ││P8 │
    ├───┤   ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤├───┤├───┤├───┤
    │P5 │   │LCrl│GUI │LAlt│         Space          │RAlt│ Fn │Menu│RCrl││ ← ││ ↓ ││ → │
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘
```

Will add 4x3 number keypad and rotary encoder which attaches via a 5x2 ribbon cable but might need more gpio pin, another process for this version?
