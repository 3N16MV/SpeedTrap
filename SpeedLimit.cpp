/* ---------------------------------------------------------------------------
** Author: Alexis Lariviere
** File: SpeedTrap.cpp
** Description: This program determines if a vehicle is speeding based on the posted speed limit and the driver's current speed and issues a fine based on how much the driver is exceeding the speed limit.
** Date: 08/09/2026
** -------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()

{
    // Constants for speed limit and fine amount
    const int STANDARD_LIMIT = 65;
    const int MINOR_FINE = 150;
    const int MAJOR_FINE = 300;
    const int RECKLESS_FINE = 500;

    // Two variables requiring user input
    int speedLimit;
    int currentSpeed;

    cout << "Enter posted speed limit: ";
    cin >> speedLimit;

    cout << "Enter your current speed: ";
    cin >> currentSpeed;

    // Decision control structure
    if (speedLimit <= 0 || currentSpeed < 0)
    {
        cout << "Error: Speed values cannot be negative." << endl;
        return 1; // Exit the program with an error code
    }

    int speedDifference = currentSpeed - speedLimit;

    //Compare the current speed to the posted speed limit and determine the fine
    if (speedDifference <= 0)
    {
        cout << "You are within the speed limit. No fine." << endl;
    }
    else if (speedDifference <= 10)
    {
        cout << "You are speeding " << speedDifference << "MPH over the limit. Fine: $" << MINOR_FINE << endl;
    }
    else if (speedDifference <= 20)
    {
        cout << "You are speeding " << speedDifference << "MPH over the limit. Fine: $" << MAJOR_FINE << endl;

    }
    else
    {
        cout << "Reckless driving! You are speeding " << speedDifference << "MPH over the limit. Fine: $" << RECKLESS_FINE << endl;
    }
}