#pragma once
#include <iostream>
using namespace std;

void maxIt(int a[], int size) {
    int max = a[0];
    int index;
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    cout << "   Max is found at location " << index << endl;
}

 
void maxIt2(float a[], int size) {
    float max = a[0];
    int index;
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    cout << "   Max is found at location " << index << endl;
}


void example2() {

    cout << "\n\nEXAMPLE 2 - MAXIT FUNCTION - INTEGERS\n";
    int a[10] = { 7,3,5,2,45,2,88, 22, 44,66 };
    int size = 10;
    maxIt(a, size);


    cout << "\n\nEXAMPLE 2 - MAXIT2 FUNCTION - FLOATS\n";
    float b[10] = { 7.2,99.8,5.9,2.25,45.66,2.88,88.5, 22.6, 4.4,66.8 };
    size = 10;
    maxIt2(b, size);


    //update maxIt2 to be template function
    /*
    cout << "\n\nEXAMPLE 2 - MAXIT2 FUNCTION - TEMPLATES\n";
    char c[4] = { 'a','h', 'm', 'z' };
    maxIt2(c, 4);
    */

}

