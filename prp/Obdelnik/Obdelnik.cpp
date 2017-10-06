/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Obdelnik.cpp
 * Author: student
 * 
 * Created on 6. října 2017, 12:05
 */

#include "Obdelnik.h"
#include <cmath>

void Obdelnik::init(float vyska, float sirka) {
    this->sirka = sirka;
    this->vyska = vyska;
    return;
}

Obdelnik::Obdelnik() {
    init(1, 1);
}

Obdelnik::Obdelnik(float vyska, float sirka) {
    if(sirka <= 0 || vyska <= 0) {
        init(1, 1);
    }
    else {
        init(vyska, sirka);
    }
}

float Obdelnik::getSirka() const {
    return this->sirka;
}

bool Obdelnik::setSirka(float sirka) {
    if(sirka > 0) {
        this->sirka = sirka;
        return true;
    }
    else return false;
}

float Obdelnik::getVyska() const {
    return this->vyska;
}

bool Obdelnik::setVyska(float vyska) {
    if(vyska > 0) {
        this->vyska = vyska;
        return true;
    }
    else return false;
}

float Obdelnik::obvod() const {
    return 2*(this->sirka + this->vyska);
}

float Obdelnik::obsah() const {
    return this->sirka*this->vyska;
}

float Obdelnik::uhlopricka() const {
    return sqrt(pow(this->sirka, 2) + pow(this->vyska, 2));
}

Obdelnik::Obdelnik(const Obdelnik& orig) {
}

Obdelnik::~Obdelnik() {
}

