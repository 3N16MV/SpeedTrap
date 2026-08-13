Welcome to Speeding Fine Calculator, a C++ program designed to determine whether a vehicle is speeding based on 
the posted speed limit and the driver's current speed. If the driver is exceeding the speed limit, the program 
calculates the amount over the limit and issues the appropriate fine. 

Example: 

Vehicle Is Speeding

Enter the posted speed limit: 55
Enter the driver's current speed: 70
The vehicle is traveling 15 miles per hour over the speed limit.
Fine: $300

Vehicle Is Not Speeding

Enter the posted speed limit: 55
Enter the driver's current speed: 50
The vehicle is not speeding.

The exact fine displayed depends on the fine amounts or penalty levels defined in the program.

Installation: 

A C++ compiler, such as:

GCC / G++
Clang
Microsoft Visual C++ (MSVC)

A C++ compatible IDE or terminal environment.

Examples include:

Visual Studio
Visual Studio Code
CLion
Command Prompt or Terminal

Clone the Repository:
git clone https://github.com/3N16MV/SpeedTrap

Navigate to the project directory:

cd SpeedTrap

Compile the program:

Using G++:

g++ SpeedTrap.cpp -o SpeedTrap

Run the program:

On Windows:

SpeedTrap.exe

On Linux or macOS:

./SpeedTrap

The program prompts the user to enter the posted speed limit and the driver's current speed. It then compares the two values:

- If the current speed is less than or equal to the posted speed limit, the program reports that the vehicle is not speeding.

- If the current speed is greater than the posted speed limit, the program subtracts the speed limit from the current speed to determine how far over the limit the driver is traveling.

- The program uses the amount over the speed limit to determine and display the applicable fine.

Miles per hour over the limit = Current speed − Posted speed 

Contributions

Contributions to improve SpeedTrap are welcome. Feel free to submit pull requests or open issues with suggestions for improvements.

License

This project is released under the MIT License. See the LICENSE file for details.

Support

For questions or issues, please open a GitHub issue in the repository.