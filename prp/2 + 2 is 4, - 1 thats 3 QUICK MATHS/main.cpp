/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ucitel
 *
 * Created on 3. listopadu 2017, 11:47
 */

#include <cstdlib>
#include "Kruznice.hpp"
#include <iostream>
#include "Bod.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    int y;
    
    Kruznice k1;
    cout<<"Kruznice vytvorena konstruktorem bez parametru"<<endl;
    cout<<"Polomer: "<<k1.getPolomer()<<endl;
    cout<<"Stred["<<k1.getX()<<"]["<<k1.getY()<<"]"<<endl;
    
    Kruznice k2(4.2);
    cout<<"Kruznice vytvorena konstruktorem s parametrem"<<endl;
    cout<<"Polomer: "<<k2.getPolomer()<<endl;
    cout<<"Stred["<<k2.getX()<<"]["<<k2.getY()<<"]"<<endl;
    
    Kruznice k3(4.2,2,3);
    cout<<"Kruznice vytvorena konstruktorem s parametry"<<endl;
    cout<<"Polomer: "<<k3.getPolomer()<<endl;
    cout<<"Stred["<<k3.getX()<<"]["<<k3.getY()<<"]"<<endl;
    
    cout<<"Zadej bod x: ";
    cin>>x;
    cout<<"Zadej bod y: ";
    cin>>y;
    
    Kruznice k4(4.2,x,y);
    cout<<"Kruznice vytvorena konstruktorem s parametry"<<endl;
    cout<<"Polomer: "<<k4.getPolomer()<<endl;
    cout<<"Stred["<<k4.getX()<<"]["<<k4.getY()<<"]"<<endl;
    
    return 0;
}

