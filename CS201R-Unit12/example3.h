#pragma once
#include <iostream>
using namespace std;

// Pair class (a set of 2 items of the same type)
// update to template class

class Pair {
    int values[2];

public:
    Pair(int first, int second) {
        values[0] = first;
        values[1] = second;
    }
    int get0() { return values[0]; }
    int get1() { return values[1]; }

    Pair operator+(Pair rhs) {
        Pair temp(this->values[0] + rhs.values[0],
            this->values[1] + rhs.values[1]);
        return temp;
    }
    friend ostream& operator<<(ostream& out, Pair rhs) {
        out << rhs.values[0] << " : " << rhs.values[1];
        return out;
    }
};

void example3() {
    cout << "\n\nEXAMPLE 3a - PAIRS WITH INTEGERS\n";
    Pair  P1(15, 16);
    Pair  P2(5, -6);
    Pair  P3(0, 0);
    P3 = P1 + P2;
    cout << "   The new pair is: ";
    cout << P3 << endl;

    /*
    //add the following after updating Pair to template class
    cout << "\n\nEXAMPLE 3b - PAIRS WITH FLOAT TYPES\n";
    Pair<float> P4(15.2, 19.5);
    Pair<float> P5(0.5, 3.1);
    Pair<float> P6(0, 0);
    P6 = P4 + P5;
    cout << "   The new pair is: " << P6 << endl;


    cout << "\n\nEXAMPLE 3c - PAIRS WITH STRING TYPES\n";
    Pair<string> P7("this", "why");
    Pair<string> P8("that", "not");
    Pair<string> P9("", "");
    P9 = P7 + P8;
    cout << "   The new pair is: " << P9 << endl;
    */
}
