// 2.25.) Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the remainder operator (`%`).]
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    int num1;
    int num2;

    //Assigning values to variables
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;

    //Determining whether Integer 2 (num2) is a multiple of Integer 1 (num1)
    if ((num1 % num2) == 0) {
        cout << "\n" << num2 << " is a multiple of " << num1 << "." << endl;
    }
    if ((num1 % num2) != 0) {
        cout << "\n" << num2 << " is not a multiple of " << num1 << "." << endl;
    }
}
