
#include <iostream>
using namespace std;

//Challenge:

// Write a program to find the “Sum” and “Average” of “three” numbers.
// Provide a hint to the user, take the input and return some output results 
// to show the user the calculations for their three numbers.

int main()
{
    // Prompt the user to input 3 numbers
    cout << "Enter three numbers: " << endl;

    // Get the numbers
    int num1;
    cin >> num1;

    int num2;
    cin >> num2;

    int num3;
    cin >> num3;

    // Display result to user
    int sum = num1 + num2 + num3;
    int avg = sum / 3;
    cout << "Sum of three numbers is " << sum << endl;
    cout << "Average of three numbers is " << avg << endl;


}
