/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: student
 *
 * Created on 13. října 2017, 11:45
 */

#include <cstdlib>
#include <iostream>
#include "Bod.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char answer;
    int x, y;
    Bod s;
    Bod a(5, 4);
    Bod b(a);
    cout.precision(3);
    do{
        cout << "-------------------------" <<endl;
        cout << "Original state: S[" << s.getX() << ";" << s.getY() << "]" << endl;
        cout << "Set X coordinate for S: ";
        cin >> x;
        s.setX(x);
        cout << "Set Y coordinate for S: ";
        cin >> y;
        s.setY(y);
        cout << "Changed state:  S[" << s.getX() << ";" << s.getY() << "]" << endl;
        cout << "-------------------------" <<endl;
        cout << "Original state: A[" << a.getX() << ";" << a.getY() << "]" << endl;
        cout << "Set X coordinate for A: ";
        cin >> x;
        a.setX(x);
        cout << "Set Y coordinate for A: ";
        cin >> y;
        a.setY(y);
        cout << "Changed state:  A[" << a.getX() << ";" << a.getY() << "]" << endl;
        cout << "-------------------------" <<endl;
        cout << "Original state: B[" << b.getX() << ";" << b.getY() << "]" << endl;
        cout << "Set X coordinate for B: ";
        cin >> x;
        b.setX(x);
        cout << "Set Y coordinate for B: ";
        cin >> y;
        b.setY(y);
        cout << "Changed state:  B[" << b.getX() << ";" << b.getY() << "]" << endl;
        cout << "-------------------------" <<endl;
        cout << "Distance between A and B = " << a.distance(b) << endl;
        cout << "Distance between S and A = " << s.distance(a) << endl;
        cout << "Distance between B and S = " << b.distance(s) << endl;
        cout << "-------------------------" <<endl;
        cout << "The angle ASB = " << s.uhel() << " degrees" << endl;
        cout << "The angle ABS = " << b.uhel() << " degrees" << endl;
        cout << "The angle BAS = " << a.uhel() << " degrees" << endl;
        cout << "-------------------------" <<endl;
        cout << "The radius of S is " << s.r() << endl;
        cout << "The radius of A is " << a.r() << endl;
        cout << "The radius of B is " << b.r() << endl;
        cout << "-------------------------" <<endl;
        cout << "Do you want to try another setup of coordinates? y/n: ";
        cin >> answer;
    }while();
    return 0;
}

