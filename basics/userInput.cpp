#include <iostream>
using namespace std;

/*

<!-------- USER INPUT (cin) -------->

*/

// cin is a part of the iostream library

int main() {

    // in c++, cin is used to get user input

    // syntax: cin >> variableName, where variableName is the variable that will store the user input

    int myNum;
    cout << "Enter a number: ";
    cin >> myNum;
    cout << "You entered: " << myNum << endl << endl; // outputs the number that the user entered
    

    // a simple calculator that takes two numbers as input and outputs the sum of the two numbers

    int num1, num2;
    cout << "a simple calculator that takes two numbers as input and outputs the sum of the two numbers" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum of the two numbers is: " << num1 + num2 << endl << endl;


    // a  simple calculator that takes two numbers as input and outputs the difference of the two numbers

    int num3, num4;
    cout << "enter two numbers: ";
    cin >> num3 >> num4; // cin also can be used like this
    cout << "the sum of the two numbers is: " << num3 - num4;
    return 0;
}