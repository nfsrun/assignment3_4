// Name         : reverseRun.cpp
// Author       : Kevin Tran
// Version      : 1.00 -- Initial Commit
// Description  : reverseRun.cpp class that processes an integer and outputs the
// integer in reverse. If a non-integer type input was added, it will output an
// error message on the console and recursively asks for the number again until
// an integer is inputted.

#include "reverseDigits.h"
using namespace std;

//numberPlease method will run recursively until a valid input is
int numberPlease() {
    double s;
    cout << "Enter a number: ";
    cin >> s;

    //checks to make sure if an integer was inputted. If not, clear cin, output
    // a message and recursively ask the user for a valid input again.
    if (cin.fail()) {
        cin.clear();
        cin.ignore(INTMAX_MAX, '\n');
        cin.sync();
        cout << "Invalid input, please try again. ";
        return numberPlease();
    }

    cout << endl;
    return s;
}

//main Method
int main() {
    reverseDigits(numberPlease());
    return 0;
}
