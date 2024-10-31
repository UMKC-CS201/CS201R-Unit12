#pragma once
#include "example1.h"
// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
// template to swap 2 items

//UPDATE SWAPIT4 FOR TEMPLATE CLASS2
 
void swapIt4(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//UPDATE BUBBLESORT FOR TEMPLATE CLASS
 
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swapIt4(a[j], a[j - 1]);
}

void example4() {
    cout << "\n\nEXAMPLE 4 - SORTING INTEGERS\n";
    // UPDATE BUBBLE SORT FOR TEMPLATE TYPES
    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);

    cout << "   Sorted array (int) : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    /*
    // add this after making bubble & sort templates
    cout << "\n\nEXAMPLE 4 - SORTING FLOATS\n";
    float b[5] = { 99.6,10.1,66.3,90.2,89.5 };
    int o = sizeof(b) / sizeof(b[0]);

    //CALL template function
    bubbleSort(b, o);

    //PRINT ARRAY AFTER SORTING
    cout << "   Sorted array (int) : ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;



    cout << "\n\nEXAMPLE 4 - SORTING CHARACTERS\n";
    char c[5] = { 'b','c','a','e','z' };
    o = sizeof(c) / sizeof(c[0]);

    //CALL template function
    bubbleSort(c, o);

    //PRINT ARRAY AFTER SORTING
    cout << "   Sorted array (int) : ";
    for (int i = 0; i < 5; i++)
        cout << c[i] << " ";
    cout << endl;
    */
} 