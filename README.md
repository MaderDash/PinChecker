# PinChecker for arduino's and esp's

## This code should be used to find out what pins are what on the board  

To use the button sniffer: You will open the serial monitor, press the button,
Then the serial monitor will output what pin that button is on.  

To use the led sniffer: you will conect your led to the pin you wish to find,
open the serial monitor and as soon as the led lights, the pin that the led is
on will be shown in the serial monitor.

### pinSnifferButton.ino🧮  

This tests the pins to locate the addresses of pins on dev kits
You can change the pin ranges by the first two defines, in the code.
By defalt it is set to a range of 0 to 15.

### ledPinChecker.ino🧮  

This tests each pin High, then low so if you have an led conected, 
you by defalt the pins being checked is 0-15. If the sweep does not reveal
 anything, you can adjust the defines to include another group of pins to check farther.
