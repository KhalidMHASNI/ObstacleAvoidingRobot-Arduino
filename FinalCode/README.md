If you don't understand the full code, i recommend to you to read __/Tests__ wich has every code seperately <br />
<br />
this code has 8 steps (see **logigrame.png**):<br />
<br />
    1. initialise ultrasonic sensor,servo motor, motor shield, lcd and the buzzer<br />
    2. Read distance Forward in **cm**<br />
    3. If distance Forward < 20cm (else keep moving forward and reading distance Forward)<br />
    4. Stop moving <br />
    5. Turn the servo left and read distance (**dis-L**) using the sensor, then <br />
    6. Turn the servo right and read distance (**dis-R**) using the sensor<br />
    7. Compare (**dis_L** and **dis_R**)<br />
    8. the biggest one is the way the robot shall using to move forward<br />
