# ayla keyboards

![ayla](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Mike](https://github.com/phpbbireland)
* Hardware Supported: [Hackaday](https://hackaday.io/project/197065-mioke80-iso-ansi-99-key-80-keyboard)
* Hardware Availability: *Once complete and 100% working, I will supply Links to where you can find this hardware*

This keyboard is similar to others in QMK keyboard directory, except it includes dedicated Marco keys and optional rotary encoder for volume etc...
I have not attempted to add it to QMK, I am not familiar with the process, perhaps later...

Make example for this keyboard (after setting up your build environment):

    example: make ayla_ayla80:via

Flashing example for this keyboard:

    example: make ayla_ayla80:via:flash or ./flash.sh ayla_ayla80_via.bin

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways: Note fully implemented yet

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
