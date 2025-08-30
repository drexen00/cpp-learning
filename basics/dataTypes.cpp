#include <iostream>
#include <string> // needed for string, if not, it will throw error in string myString = "string";
using namespace std;

/*

<--------  DATA TYPES    -------->

*/


int main() {

    // char syntax: char variableName = 'symbol'
    char character = 'c'; // stores 1 character or ASCII occupying no more than one byte (1 byte)

    // wchar_t syntax: wchar_t variableName = L'symbol';
    wchar_t character2 = L'c'; // stores 1 character or Unicode occupying no more than two bytes (2 bytes)

    // int syntax: int variableName = number;
    int integer = 5; // stores whole numbers from -2,147,483,648 to 2,147,483,647 (4 bytes)

    // float syntax: float variableName = number.number;
    float realNumber = 3.14; // stores real numbers with decimal places but with less precision than double (4 bytes)

    // double syntax: double variableName = number.number;
    double realNumber2 = 3.14159; // stores real numbers with decimal places and with more precision than float, but it requires more memory (8 bytes)

    // bool syntax: bool variableName = true || false;
    bool boolean = true; // stores true(1) or false(0) (1 byte)

    // char* syntax: const char* variableName = "text";
    const char* cCharacter = "character"; // stores a string of characters (1 byte per character)

    // In C++, string is not a built-in type; it's a class from the <string> library.
    string myString = "string"; // string: dynamic string class from <string>, manages memory automatically.
    
    return 0;
}