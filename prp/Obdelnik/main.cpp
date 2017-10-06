/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: student
 *
 * Created on 6. října 2017, 12:01
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Obdelnik.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float sirka;
    float vyska;
    cout.precision(2);
    cout << "|-----------------------------------------------------------------" << endl;
    cout << "| Zadejte sirku obdelniku: ";
    cin >> sirka;
    cout << "| Zadejte vysku obdelniku: ";
    cin >> vyska;
    Obdelnik oUser(sirka, vyska);
    Obdelnik oDefault;  
    cout << "|-----------------------------------------------------------------" << endl;
    cout << "| Vychozi obdelnik ma rozmery a = " << 
            oDefault.getVyska() << ", b = " << 
            oDefault.getSirka() << endl;
    cout << "| Obvod vychoziho obdelniku je O = " << oDefault.obvod() << endl;
    cout << "| Obsah vychoziho obdenliku je S = " << oDefault.obsah() << endl;
    cout << "| Uhlopricka vychoziho obdelniku je u = " <<
            oDefault.uhlopricka() << endl;
    cout << "|-----------------------------------------------------------------" << endl;
    cout << "| Uzivatelsky obdelnik ma rozmery a = " << 
            oUser.getVyska() << ", b = " << 
            oUser.getSirka() << endl;
    cout << "| Obvod uzivatelskeho obdelniku je O = " << oUser.obvod() << endl;
    cout << "| Obsah uzivatelskeho obdenliku je S = " << oUser.obsah() << endl;
    cout << "| Uhlopricka uzivatelskeho obdelniku je u = " << 
            oUser.uhlopricka() << endl;
    cout << "|-----------------------------------------------------------------" << endl;
    cout << "| Zadejte novou hodnotu sirky vychoziho obdelniku: ";
    cin >> sirka;
    if(!oDefault.setSirka(sirka)) {
        cout << "| Zadal jsi neplatnou hodnotu, sirka nebyla nastavena";
    }
    cout << "| Zadejte novou hodnotu vysky vychoziho obdelniku: ";
    cin >> vyska;
    if(!oDefault.setVyska(vyska)) {
        cout << "| Zadal jsi neplatnou hodnotu, vyska nebyla nastavena";
    }
    cout << "|-----------------------------------------------------------------" << endl;
    cout << "| Nove zadane rozmery vychoziho obdelniku jsou a = " <<
            oDefault.getVyska() << ", b = " <<
            oDefault.getSirka() << endl;
    cout << "| Obvod nove nastaveneho vychoziho obdelniku je O = " <<
            oDefault.obvod() << endl;
    cout << "| Obsah nove nastaveneho vychoziho obdenliku je S = " <<
            oDefault.obsah() << endl;
    cout << "| Uhlopricka nove nastaveneho vychoziho obdelniku je u = " <<
            oDefault.uhlopricka() << endl;
    cout << "|-----------------------------------------------------------------" << endl;
    return 0;
}

