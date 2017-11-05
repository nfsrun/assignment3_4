// Name         : reverseDigits.h
// Modified     : Kevin Tran
// Version      : 1.00 -- Initial Commit
// Description  : reverseDigits.h class has the reverserDigits method that takes
// an integer and turns it into it's reverse order. Please note that leading
// zeros in front of the number will be truncated be default.

#include <iostream>
using namespace std;

//reverseDigits method takes in an integer and recursively modulates and divides
//the number multiple times per recursion
void reverseDigits(int s) {
    if(s<0){
        cout<<"-";
        reverseDigits(-s);
    }else if(s!=0){
        cout<<s%10;
        if(s>0){
            reverseDigits(s/10);
        }
    }
}