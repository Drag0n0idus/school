/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kruznice.hpp
 * Author: ucitel
 *
 * Created on 29. září 2017, 11:55
 */

#ifndef KRUZNICE_HPP
#define KRUZNICE_HPP
#include "Bod.h"

class Kruznice {
public:
    Kruznice();
    Kruznice(float);
    Kruznice(float,const Bod &);
    Kruznice(float,int,int);
    float getPolomer() const;
    bool  setPolomer(float);
    int getX() const;
    int getY() const;
    
    float vypocitejObvod() const;
    float vypocitejObsah() const;
    virtual ~Kruznice();
private:
    float polomer;
    Bod stred;
};

#endif /* KRUZNICE_HPP */

