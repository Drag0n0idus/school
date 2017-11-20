/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bod.cpp
 * Author: ucitel
 * 
 * Created on 13. října 2017, 11:46
 */

#include "Bod.h"
#include <cmath>

Bod::Bod() {
    this->x=0;
    this->y=0;
}

Bod::Bod(int x, int y){
    this->setY(y);
    this->setX(x);
}

Bod::Bod(const Bod& orig) {
    this->setX(orig.getX());
    this->setY(orig.getY());
}

Bod::~Bod() {
}

 int Bod::getX() const{
     return this->x;
 }
 int Bod::getY() const{
     return this->y;
 }
 
 void Bod::setX(int x){
     this->x = x;
 }
 
 void Bod::setY(int y){
     this->y = y;
 }
  
 float Bod::vzdalenost(const Bod & jinyBod)const{
     return hypot(this->x-jinyBod.getX(),this->y-jinyBod.getY());
 }
 
 float Bod::uhel()const{
     return atan2 (this->y,this->x) * 180 / M_PI;
 }
 
 float Bod::r() const{
     return hypot(this->x, this->y);
 }

