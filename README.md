# Driver Development of 16x2 Liquid Crystal Display on STM32 

# ⚡ What is Liquid Crystal Display?

A Liquid Crystal Display (LCD) is an electronic visual display that uses the light-modulating properties of liquid crystals combined with polarizers to produce images. It is widely used in devices like monitors, calculators, and embedded systems for clear and energy-efficient visual output.

# 🔥 How to Use an LCD with Microcontrollers?

Using an LCD with a microcontroller involves connecting the display’s data and control pins to the microcontroller’s GPIO pins, then programming the microcontroller to send commands and data to the LCD. 

Typically, you initialize the LCD in your code, configure it for the desired display mode (such as 16x2 characters), and then write text or custom characters to the screen. This process allows the microcontroller to visually present information, making debugging and user interaction easier.

# 🛠️ Electrical Diagram

<h4> VSS (Pin 1) </h4>

Ground connection (GND). It serves as the reference voltage for the circuit.

<h4> VDD (Pin 2) </h4>

Power supply pin, typically connected to +5V.

<h4> VO (Pin 3) </h4>

Contrast adjustment pin. Usually connected to the wiper of a potentiometer.

The other ends of the potentiometer connect to +5V and GND.

This pin allows you to adjust the display contrast for optimal visibility.

<h4> RS - Register Select (Pin 4) </h4>

Determines the type of data sent to the LCD.

RS = 0: Instruction/command register

RS = 1: Data register

<h4> RW - Read/Write (Pin 5) </h4>

Selects the read or write mode.

RW = 0: Write mode

RW = 1: Read mode

In most applications, RW is tied to GND for write-only operation.

<h4> E - Enable (Pin 6) </h4>

Enables data read/write operations.

A high-to-low transition on this pin triggers the LCD to latch data from the data pins.

<h4> D0 - D7 (Pins 7 to 14) </h4>

8-bit data bus lines used to send commands and data to the LCD.

Usually, 4-bit mode is used to save pins, utilizing only D4 to D7.

<h4> A - LED Anode (Pin 15) </h4>

Positive terminal for the LCD’s backlight LED, typically connected to +5V.

<h4> K - LED Cathode (Pin 16) </h4>

Negative terminal for the LCD’s backlight LED, typically connected to GND.

![Shematic](images/shematic.JPG)

In this application, the STM32 Nucleo F446RE development board was used. You can refer to the above wiring diagram.

# 🚀 Code Explanation

![Shematic](images/init_function.png)

This function configures the required pins for a 16x2 LCD to work with the STM32 and initializes the LCD in 4-bit mode according to its datasheet.

![Shematic](images/clear_function.png)

This function sends the necessary commands to clear all characters from the LCD screen.

![Shematic](images/set_cursor_function.png)

This function positions the LCD cursor to the specified row and column based on the LCD datasheet

![Shematic](images/write_function.png)

These functions handle displaying text on the LCD. LCD_writeString() sends a full string character-by-character, while LCD_writeChar() sends each individual character by splitting it into high and low 4-bit parts and transmitting them with proper control signals.

![Shematic](images/shift_function.png)

These functions allow shifting the entire LCD display content horizontally; LCD_shiftLeft() moves the content to the left, while LCD_shiftRight() moves it to the right by sending the appropriate control commands to the LCD.

## 🎉 Thank You for Reviewing!

Thank you for taking the time to check out this project.

Feel free to follow me on these platforms for more updates and projects:

-YouTube: @mnane34

-LinkedIn: Mertcan Nane