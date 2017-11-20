/* 
 * File:   Kruznice.cpp
 * Author: ucitel
 * 
 * Created on 29. září 2017, 11:55
 */

#include "Kruznice.hpp"
#include <cmath>

Kruznice::Kruznice() {
    this->polomer = 1;
}

Kruznice::Kruznice(float polomer) {
    if(polomer <= 0){
        this->polomer = 1;
    }else{
        this->polomer = polomer;
    }
}

float Kruznice::vypocitejObvod() const{
    return 2 * M_PI * this->polomer;
}

float Kruznice::vypocitejObsah() const{
    return M_PI * this->polomer * this->polomer;
}

bool Kruznice::setPolomer(float polomer){
    if(polomer <= 0){
        return false;
    }
    this->polomer = polomer;
    return true;
}


float Kruznice::getPolomer() const{
    return this->polomer;
}

Kruznice::~Kruznice() {
}

