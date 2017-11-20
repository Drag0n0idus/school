/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: student
 *
 * Created on 10. listopadu 2017, 12:03
 */

#include <cstdlib>
#include <iostream>
#include "Auto.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Auto autik;
    cout << "Auto 1" << endl;
    cout << "SPZ: " << autik.getSPZ() << endl;
    cout << "Spotreba: " << autik.getSpotreba() << "l na km" << endl;
    cout << "Rok vyroby: " << autik.getRokVyroby() << endl;
    cout << endl;
    Auto roman(autik);
    cout << "Roman" << endl;
    cout << "SPZ: " << roman.getSPZ() << endl;
    cout << "Spotreba: " << roman.getSpotreba() << "l na km" << endl;
    cout << "Rok vyroby: " << roman.getRokVyroby() << endl;
    cout << endl;
    return 0;
}

