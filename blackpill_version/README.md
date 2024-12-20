# mioke80 / ayla_411 / BlackPill Version

QMK Based Open Hardware Keyboard with 99 Keys + Rotary Encoder
Just another open source / open hardware ~80% keyboard...

Ref: https://hackaday.io/project/197065-mioke80-iso-99-key-80-keyboard

The new 10x10 matrix version requires only 20 GPIO pins, previously the 18x6 required 24. As it turns out, when taking into account pins that can't be used, and those, that are not recommended to use, we did not have enough GPIOs with old 19x6 matrix if we needed macros (flash), hence the 10x10 matrix update...

Schematic complete (10x10 matrix version)...  
Software 75% complete (no macros yet)...  

The original 18x6 matrix code was tested on Blackpill 411 Dev Board... working 11th August 2024  

The QMK folder for reference only, it's my local copy for building (not part of the main qmk_firmware repository).
Perhaps some day, if I get this complete...  

**Status**
+ Designed a prototype PCB using an STM32 411 Blackpill for testing... ***complete***
+ Test prototype PCB and initial keyboard code... ***complete, 100% working***
+ Now loads in usevia.app ***(I removed unnecessary files... RGB and Encoder require lots more work)***
+ Write and test RGB code... ***in progress***
+ I will proceed to a fully assembled PCB using the STM32F072CBT6 and associated components.

The keyboard code was simple enough but RGB code looks a little more involved...  
  
**Col/Row**
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
    ├───┤   ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴────┤├───┤├───┤├───┤
    │7,0│   │  7,1  │7,2│7,3│7,4│7,5│7,6│7,7│7,8│7,9│8,0│8,1│8,2│  8,3  ││8,4││8,5││8,6│
    ├───┤   ├────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┴───┴┬──┴─┬─┴──┬────┤├───┤├───┤├───┤
    │8,7│   │8.8 │8,9 │9,1 │           9,2          │9,3 │9,4 │9,5 │9,6 ││9,7││9,8││9,9│
    └───┘   └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘└───┘└───┘└───┘
```
**Matrix**
```
       C0    C1    C2    C3    C4    C5    C6    C7    C8    C9
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R0    │Rst│ │Esc│ │F1 │ │F2 │ │F3 │ │F4 │ │F5 │ │F6 │ │F7 │ │F8 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R1    │F9 │ │F10│ │F11│ │F12│ │Prl│ │SL │ │Pse│ │M1 │ │ ` │ │ 1 │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R2    │ 2 │ │ 3 │ │ 4 │ │ 5 │ │ 6 │ │ 7 │ │ 8 │ │ 9 │ │ 0 │ │ - │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R3    │ + │ │BS │ │Ins│ │Hme│ │PgU│ │M2 │ │Tab│ │ Q │ │ W │ │ E │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R4    │ R │ │ T │ │ Y │ │ U │ │ I │ │ O │ │ P │ │ [ │ │ ] │ │ # │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R5    │Del│ │End│ │PgD│ │M3 │ │Cap│ │ A │ │ S │ │ D │ │ F │ │ G │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R6    │ H │ │ J │ │ K │ │ L │ │ ; │ │ @ │ │C R│ │<< │ │ > │ │ >>│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R7    │M4 │ │LSh│ │ Z │ │ X │ │ C │ │ V │ │ B │ │ N │ │ M │ │ , │
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R8    │ . │ │ / │ │ \ │ │Rsh│ │M5 │ │ ↑ │ │M6 │ │M7 │ │Lcr│ │GUI│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
      ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐ ┌───┐
R9    │Llt│ │S P│ │Rlt│ │Fn │ │Men│ │Rcr│ │ ← │ │ ↓ │ │ → │ │SPA│
      └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘ └───┘
```
