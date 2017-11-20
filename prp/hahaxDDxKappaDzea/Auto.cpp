/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Auto.hpp"
#include <cstring>
#define DELKA_SPZ 7

Auto::Auto() {
    this->spz = new char[DELKA_SPZ + 1];
    if (this->spz != 0) {
        this->spz[0]='\0';
    }
    this->spotreba = 0.1;
    this->rokVyroby = 1900;
}

Auto::Auto(const Auto& orig) {
    this->spz = new char[DELKA_SPZ];
    if (this->spz != 0) {
        strcpy(this->spz, orig.getSPZ());
    }
    this->spotreba = orig.getSpotreba();
    this->rokVyroby = orig.getRokVyroby();
}

Auto::~Auto() {
    if(this->spz != 0) {
        delete[] this->spz;
        this->spz = 0;
    }
}

char * Auto::getSPZ() const {
    return this->spz;
}

float Auto::getSpotreba() const {
    return this->spotreba;
}

int Auto::getRokVyroby() const {
    return this->rokVyroby;
}

bool Auto::checkSPZ(char * spz) {
    if(strlen(spz) < DELKA_SPZ || strlen(spz) > 5) return false;
    for(int i = 0; i < strlen(spz); i++) {
        if((spz[i] < 'A' || spz[i] > 'Z' || spz[i]) && (spz[i] < '0' || spz[i] > '9')) return false;
    }
    return true;
}