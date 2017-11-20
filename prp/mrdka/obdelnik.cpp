/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   obdelnik.cpp
 * Author: student
 * 
 * Created on 19. října 2017, 11:51
 */

#include "obdelnik.hpp"

obdelnik::obdelnik() {
    this->a=1;
    this->b=2;
}

obdelnik::obdelnik(const obdelnik& orig) {
}

obdelnik::~obdelnik() {
}

float obdelnik::get_a()const{
    return this->a;
}

float obdelnik::get_b() const{
    return this->b;
}
