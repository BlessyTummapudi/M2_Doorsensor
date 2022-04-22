## Overall Report of the project:


### Introduction:
 * This project is a simple monitoring of door sensor ,when the door opens the LED is turned ON when the door is closed LED is OFF without changing the state of other pins.

 * Door sensor senses the opening and closing of the door,the device comes with two pieces reed switch and magnet.The switch is closed when the two parts are sitting close to one another, and an electric current can flow. When the switch opens, the two parts separate, causing the electrical current to stop and the circuit to deactivate.

 * Wherein One piece attaches on the door frame, and the other attaches parallel to the first piece on the door itself. The two parts create a closed circuit when the door is shut. As the door opens, the magnet and switch separate, breaking the circuit. When the circuit breaks, the sensor signals the central control panel.

 * The two pieces must sit directly next to each other with only a small amount of space between them. If they’re too far away or aren’t parallel to one another, the pieces can’t interact and the reed switch and magnet won’t create a circuit. 


### Swot Analysis:
 
 #### Strengths:
  * Extra Deterrent
  * Resourse availability
  * Remote
 #### Weaknesses:
 * Weak batterylife
 * Lack of manual control
 #### Oppurtunities:
 * Ability for connectivity
 * Smart phone application
 * Manual control option
 #### Threats:
 * Short porduct relevancy life span


### 4W's and 1H:
  
#### Who
 Electronic Students.
#### What
 Opening and closing of door can be detected using LED.
#### When
 At initial stage of home automation.
#### Where
 It can be used in our daily life also this can be included in home automation porjects.
#### How 
 This project can be included for security puposes of households due to its detecting capabilities.
 

### Block diagram:
 
 ![pic](https://www.researchgate.net/publication/327023036/figure/fig4/AS:434105029533699@1480510112268/The-Block-diagram-of-an-electronic-lock.png)
 
 
### State Transition diagram:

 ![pic](https://hackster.imgix.net/uploads/attachments/213897/sbVsWgptX9sfqta4Qz8x.png?auto=compress%2Cformat&w=680&h=510&fit=max)


### Implementation of the project:
 #### Below is the project code:
 
 
  ![code]( https://github.com/BlessyTummapudi/M2_Doorsensor/blob/main/3_Implementation/Doorsensor.c )


### Testcases:

#### Hardware's used in this porject are:
 
 #### Switch:
  * Here the closing of switch indicates that the door is closed so the led is in off state.If the switch is open then it means that the door is opened ther eby led will     be on.
 
 #### LED:
  * LED plays a major role in this project where it tells us whether the door sensor is on or off.If the door is open LED blinks if it's closed it doesn't blink.

 #### Voltimeter:
  * Here voltimeter is used  for measuring the voltage across the circuit.


