# Table of content
1. About the Wiper Control System
    1. Description
    2. Identifying features
    3. State of art
    4. 5W’s & 1H and S.W.O.T analysis
2. Requirements
    1. High level requirements
    1. Low level requirements
3. Architecture
    1. Behavioural Diagram
        1. High Level Flow chart Behavioural Diagram
        2. Low Level Flow chart Behavioural Diagram
    2. Structural Diagram
        1. High Level UML Use Case Structural Diagram
        2. Low Level UML Use Case Structural Diagram
4. Test plan and Output
    1. High level test plan
    2. Low level test plan
    
# 1 About the Wiper Control System
## 1.1 Description
* This project is an Wiper Control System. This system Displays Ignition ACC status, Wiper position status (in 3 Various HZ) . There is a led signaling which helps us to identify the features. For example if we press a button 1 time, Ignition Red LED will be turned ON. Then with next button press all the LED will be on which means the Wiper status of car is displayng, similarly for 2 and 3 clicks with alternate Wiper Speed Frequencies.
---
## 1.2 Identifying features
* It shall display Ignition status of car for one long User Button Click(ON state).
* It shall display Wiper status(1HZ) of car on First User Button Click.
* It shall display Wiper status(4HZ) of car on Second User Button Click. 
* It shall display Wiper status(8HZ) of car on Third User Button Click.
* It shall display Ignition status of car for one long User Button Click(OFF state).
---
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

---

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

---

# 3 Architecture
* ## 3.1 Behavioural Diagram
    * ### 3.1.1 High Level Flow chart Behavioural Diagram
    ![WiperHighlvl](https://user-images.githubusercontent.com/101641134/168012966-69035b75-1404-4ecc-97a8-030d17feb174.png)
    
    * ### 3.1.2 Low Level Flow chart Behavioural Diagram
    ![WiperLowlvl](https://user-images.githubusercontent.com/101641134/168013148-699915b6-38d8-4183-9ac4-c8038c62b478.png)
    
    * ### 3.1.3 High Level UML Use Case Structural Diagram
    ![WiperUmlusecaseHigh1vl](https://user-images.githubusercontent.com/101641134/168091830-0899dfe1-bda7-4e56-afee-def8dad4e3bd.png)
    
    * ### 3.1.4 Low Level UML Use Case Structural Diagram
    ![WiperUmlusecaseLow1vl](https://user-images.githubusercontent.com/101641134/168096188-ff16d617-c192-436f-bdec-4da398f33f46.png)

# Best Methods Followed
* Exact Mapping of code to avoid confusions
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Followed the exact symbols to make the understanding easier
* Detailed explanation in Low level Behavioural and Structural Diagrams

---

# 4 Test Plan and Output
# 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Ignition On | 1st 2sec User Button Press | Ignition key status | Displayed Ignition key status  | 
| 02 | Viper On | 1st User Button Press | Viper Status-1Hz | Displayed Viper Status | 
| 03 | Viper On | 2nd User Button Press | Viper Status-4Hz | Displayed Viper Status | 
| 04 | Viper On | 3rd User Button Press | Viper Status-8Hz | Displayed Viper Status | 
| 05 | Ignition Off | 2nd 2sec User Button Press |  Ignition key status  | Displayed Ignition key status  | 

### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 4.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ignition_on() | 1st 2sec User Button Press | RED LED ON | RED LED ON | ✅ |
| 02 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-1Hz | ✅ |
| 03 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-2Hz| ✅ |
| 04 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-3Hz | ✅ |
| 04 | Check for ignition_off() | 2nd 2sec User Button Press | RED LED OFF | RED LED OFF | ✅ |

| Test ID (for Button Count For Turning Viper on)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Button_Count() | 1 User Button Press | 1 | 1 | ✅ |
| 02 | Check for Button_Count() | 2 User Button Presses | 2 | 2 | ✅ |
| 03 | Check for Button_Count() | 3 User Button Presses | 3 | 3 | ✅ |

---
