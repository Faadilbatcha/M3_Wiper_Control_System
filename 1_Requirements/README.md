# 1 REQUIREMENTS:
## 1.1 Introduction:
This project is an Viper Control System. 
Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs
Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs

## 1.2 Features:
1.Blue, Green and Orange LEDs, Come on and OFF alternately for set frequency. State A, RED led will be ON
2.Simple circuit design and easy to understand.

## 1.3 4W'S and 1H:
### What?
* Viper Control system where the Viper of a car is controlled by a wireless key. Viper status will be Indicated through LED's.
### WHY?
* To know the principle behind a Viper system and to manipulate its speed with respect to user's need. 
### WHERE?
* Anywhere the user wants to use the feautures provided.
### WHO?
*  People who are all having Car.
### HOW?
* Through a Simple and single Button.

## 1.4 SWOT ANALYSIS:
### Strength:
- No need of Human Interaction.
- Viper system of Different cars can be Interfaced and handled.
- Easy handle and usage of features through a simple User Button.
- Cost efficient.
### Weakness:
- Limited usage Range.
- Less User privacy and security.
- Timers/Interrupts can be a better approach instead using Delays.
### Opportunity:
- Wide Scope in the Future of Automobiles Viper Managemnet and Control System.
- Cost efficient.
- Since advanced features can increase Car value.
### Threat:
- Now there are many new developing devices for competition in the Automobiles advancement sector.


# 2 REQUIREMENTS:
## 2.1 High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall display Ignition status of the car |
| HLR2 | System shall display Viper State-1 of the car |
| HLR3 | System shall display Viper State-2  of the car |
| HLR4 | System shall display Viper State-3  of the car |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|      
| -------- | -------------- | 
| LLR1.1 | According to the press of __Button__ for 2 seconds, Ignition LED_RED shall be on | 
| LLR1.2 | According to the press of __Button__ for 2 seconds, Ignition LED_RED shall be off | 
     
| ID | Low Level Requirements for HL2| 
| -------- | -------------- | 
| LLR2.1 | According to the press of __Button__ all LED's shall be on in alternate fashion in Frequency(1Hz) indicating Viper movement |
| LLR2.2 | According to the press of __Button__ all LED's shall be on in alternate fashion in Frequency(4Hz) indicating Viper movement |
| LLR2.3 | According to the press of __Button__ all LED's shall be on in alternate fashion in Frequency(4Hz) indicating Viper movement |



