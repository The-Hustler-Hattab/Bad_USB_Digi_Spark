# Arduino Digispark Bad USB

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Dependencies](#dependencies)
- [Configuration](#configuration)
- [Documentation](#documentation)
- [Examples](#examples)
- [Troubleshooting](#troubleshooting)
- [Disclamer](#disclamer)



## Introduction

This project leverages the Arduino platform with a Digispark USB Development Board to automate keyboard inputs to a computer. Using the `DigiKeyboard.h` library, it simulates key presses to perform tasks automatically, such as opening the command prompt, navigating directories, downloading the malicious software and executing it. 




## Installation

1. **Arduino IDE**: Ensure you have the Arduino IDE installed on your computer.
2. **Digispark USB Drivers**: Install the Digispark USB drivers to allow your computer to communicate with the Digispark board. Follow the instructions provided [here](http://digistump.com/wiki/digispark/tutorials/connecting).
3. **DigiKeyboard Library**: The `DigiKeyboard.h` library is included in the standard Digispark installation. Ensure it is available in your Arduino IDE.

## Usage

To use this project:
1. Connect your Digispark USB Development Board to your computer.
2. Open the Arduino IDE and load the provided script.
3. Select the correct board and port from the Tools menu.
4. Upload the script to your Digispark board.
5. Upon successful upload, the board will automatically start executing the programmed tasks.

## Features

- Automated keyboard inputs without the need for physical interaction.
- Can open command prompts, navigate file systems, and run scripts or applications.
- Utilizes delays to manage execution timing and ensure commands are processed correctly.

## Dependencies

- Arduino IDE
- Digispark USB Development Board
- `DigiKeyboard.h` library (included with Digispark Arduino installation)

## Configuration

No additional configuration is required beyond the installation steps. You may customize the script by changing the commands within the `typeCommand` function calls to suit your specific needs.

## Documentation

For more information on the Digispark board and the `DigiKeyboard` library, refer to the [Digistump Wiki](http://digistump.com/wiki/digispark).

## Examples

The provided example script demonstrates how to:
- Open the command prompt using keyboard shortcuts.
- Navigate to the temporary directory.
- Execute a placeholder command (replace "file name" with your actual command).

## Troubleshooting

If you encounter issues with the Digispark board not being recognized, ensure the drivers are correctly installed and that you are selecting the right board within the Arduino IDE. For more detailed troubleshooting, visit the [Digistump forums](http://digistump.com/board/index.php).

## Disclamer  
This project is for educational purposes only.  
