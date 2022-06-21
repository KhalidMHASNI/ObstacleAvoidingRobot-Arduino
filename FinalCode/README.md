If you don't understand the full code, i recommend to you to read __/Tests__ wich has every code seperately \n
this code has 8 steps (see **logigrame.png**):
    1. initialise ultrasonic sensor,servo motor, motor shield, lcd and the buzzer
    2. Read distance Forward in **cm**
    3. If distance Forward < 20cm (else keep moving forward and reading distance Forward)
    4. Stop moving 
    5. Turn the servo left and read distance (**dis-L**) using the sensor, then
    6. Turn the servo right and read distance (**dis-R**) using the sensor
    7. Compare (**dis_L** and **dis_R**)
    8. the biggest one is the way the robot shall using to move forward
