#pragma once
#include <iostream>
using namespace std;

//swap integers values
void swapIt1(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// template to swap 2 strings
void swapIt2(string& a, string& b) {
    string temp;
    temp = a;
    a = b;
    b = temp;
}

// update to template function

void swapIt3(float& a, float& b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
}

void example1() {

    cout << "\n\nEXAMPLE 1a - SWAPPING - WITH INTEGERS\n";
    int a = 5, b = 10;
    cout << "   BEFORE VALUES: " << a << " : " << b << endl;
    swapIt1(a, b);
    cout << "   AFTER VALUES:  " << a << " : " << b << endl;

    cout << "\n\nEXAMPLE 1b - SWAPPING - WITH STRINGS\n";
    string c = "this is c";
    string d = "this is d";
    cout << "   BEFORE VALUES: " << c << " : " << d << endl;
    swapIt2(c, d);
    cout << "   AFTER VALUES:  " << c << " : " << d << endl;


    cout << "\n\nEXAMPLE 1c - SWAPPING - WITH TEMPLATES\n";

    float e = 5.5, f = 10.3;

    cout << "   BEFORE VALUES: " << e << " : " << f << endl;
    swapIt3(e, f);
    cout << "   AFTER VALUES:  " << e << " : " << f << endl;


    //add after fixing swapIt3 to be a template function
    /*
    cout << "   BEFORE VALUES: " << a << " : " << b << endl;
    swapIt3(a, b);
    cout << "   AFTER VALUES:  " << a << " : " << b << endl;
    cout << "   BEFORE VALUES: " << c << " : " << d << endl;
    swapIt3(c, d);
    cout << "   AFTER VALUES:  " << c << " : " << d << endl;
    */
}