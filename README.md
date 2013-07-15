## Ball and Plate Balancing System Project ##

**Author:** John Lee  
**Student Number:** s3273319  

###Description##
This is the ball and plate balancing system code.  This is to be compiled on the BeagleBoard XM and used with a bluetooth dongle (for wiimote access), Pololu Micro Maestro (for servo control) and the touch screen attached to the USB ports.  This code forms part of my final year project for the course Engineering Design 4 at RMIT.

###Usage###
Install Ball and Plate System Demonstrator code by running "sudo ./install_ball_plate" from the scripts directory. 
This will automatically install the "ball_plate" binary, install required debian packages and  download relevant *.wav files. 
It also sets up the ball_plate daemon to run at startup.  If you don't want to run at startup then type "sudo make not_startup" 
from the projects root directory.  You can manually execute the app by typing "ball_plate" from any directory. You can 
uninstall the app by typing "sudo ./uninstall_ball_plate" from the scripts directory.
