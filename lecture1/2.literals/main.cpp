/* 
  Lecture 1: Literals ( aka literal values)
  This program will get you started in C++. It consists of code that 
  demonstrates literal values, 
 
  To compile: $ g++ -o runme main.cpp
  To execute: $ ./runme
 
*/

/*Global Scope*/

#include <iostream> 
using namespace std; 

/*Global Scope*/

int main()
{
    /*Local Scope: main */
 

    // boolean literal values, in C++ we say bool 
    cout << true << "\n";
    cout << false << "\n";
 
    // integer literal values, in C++ we say int
    cout << -5 << "\n";
    cout << 5 << "\n";
    cout << 5+10 << "\n";

    // Floating/Decimal point literal values, 
    // in C++ we say double
    cout << 2.3 << "\n";
    cout << -0.279 << "\n";
    cout << 22.5 - 0.5 << "\n";  

    // Character literal value, in C++ we say char
    cout << 'a' << ' ' << 'b' << ' ' << 'd' << '\n';
    // note: use of single quotes for char
    
    // String literal value, in C++ we say string
    cout << "Hello World" << "\n";
    cout << "Hello " << "New " << "York" << "\n";
    // note: use double quotes for string
    
    
    return 0; 
}

/*Global Scope*/
