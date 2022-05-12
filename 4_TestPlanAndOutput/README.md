# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Ignition On | 1st 2sec User Button Press | Ignition key status | Displayed Ignition key status  | 
| 02 | Viper On | 1st User Button Press | Viper Status-1Hz | Displayed Viper Status | 
| 03 | Viper On | 2nd User Button Press | Viper Status-4Hz | Displayed Viper Status | 
| 04 | Viper On | 3rd User Button Press | Viper Status-8Hz | Displayed Viper Status | 
| 05 | Ignition Off | 2nd 2sec User Button Press |  Ignition key status  | Displayed Ignition key status  | 

### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 1.2 LOW LEVEL TEST PLAN

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
