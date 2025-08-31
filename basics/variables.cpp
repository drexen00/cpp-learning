/*


<--------  VARIABLES && CONSTANTS    -------->


*/

#include <iostream>
using namespace std;

int main() {
    cout << "hello github" << endl;

    // variable declaration syntax: dataType variableName;

    int declaration;

    cout << declaration << endl; // outputs garbage value 

    // variable initialization syntax: dataType variableName = value;
    int myNum = 25;
    cout << myNum << endl;

    // constant declaration syntax: const dataType constantName = value;
    const int MY_CONST = 50; // cannot be changed after initialization and Constants should be named with uppercase letters and underscores.
    cout << myConst << endl;

    // variable reassignment syntax: variableName = value; note: no dataType and variable must be declared first
    myNum = 35;
    cout << myNum << endl;


    // in c++, variable names are case sensitive, for example: myNum and MyNum are different variables

    int MyNum = 40;
    cout << MyNum << endl; // outputs 40
    int myNum = 45;
    cout << myNum << endl; // outputs 45


    // in c++, variable names cannot start with a number, for example: 1myNum is not a valid variable name
    // in c++, variable names cannot start with a special character, for example: @myNum is not a valid variable name BUT YOU CAN USE UNDERCORE CHARACTER "_"
    int _hello = 10; // it will work
    cout << _hello << endl; // outputs 10
    // in c++, variable names cannot contain spaces, for example: my Num is not a valid variable name

    // and you can initialize multiple variables in one line
    int myNum1 = 50, myNum2 = 60, myNum3 = 70;
    cout << myNum1 << endl; // outputs 50
    cout << myNum2 << endl; // outputs 60
    cout << myNum3 << endl; // outputs 70

    // or declare and then initialize

    int z, x, c;
    z = 100;
    x = 200;
    c = 300;
    cout << z << endl; // outputs 100
    cout << x << endl; // outputs 200
    cout << c << endl; // outputs 300

    // one value can be assigned to multiple variables
    int y, g, h;
    y = g = h = 400;
    cout << y << endl; // outputs 400
    cout << g << endl; // outputs 400
    cout << h << endl; // outputs 400
    return 0;

}
