# Obstacle-Avoiding Robot (Arduino)

Design and construction of an autonomous robot that detects obstacles with an ultrasonic sensor mounted on a servo motor and steers towards the direction with the most free space.

## How it works

1. Initialise the ultrasonic sensor, servo motor, motor shield, LCD and buzzer.
2. Read the distance ahead.
3. While the distance is 20 cm or more, keep moving forward.
4. When it drops below 20 cm, stop.
5. Turn the servo left and measure the distance, then right and measure again.
6. Compare the two readings and move in the direction with the larger distance.

The flowchart is in [`FinalCode/logigrame.png`](FinalCode/logigrame.png).

## Repository contents

| Path | Content |
|---|---|
| `FinalCode/ObstacleAvoid.ino` | Complete sketch |
| `FinalCode/logigrame.png` | Flowchart of the control loop |
| `Tests/` | One sketch per component: buzzer, chassis movement, LCD, servo motor, ultrasonic sensor, and servo with ultrasonic sensor |

## Running it

Open `FinalCode/ObstacleAvoid.ino` in the Arduino IDE, install the libraries it includes, select your board and port, then upload. If a component misbehaves, test it alone with the matching sketch in `Tests/`.
