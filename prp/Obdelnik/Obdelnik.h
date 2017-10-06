/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Obdelnik.h
 * Author: student
 *
 * Created on 6. října 2017, 12:05
 */

#ifndef OBDELNIK_H
#define OBDELNIK_H

class Obdelnik {
public:
    Obdelnik();
    Obdelnik(float, float);
    
    float getVyska() const;
    bool setVyska(float);
    float getSirka() const;
    bool setSirka(float);
    float obvod() const;
    float obsah() const;
    float uhlopricka() const;
    
    Obdelnik(const Obdelnik& orig);
    virtual ~Obdelnik();
private:
    void init(float, float);
    float vyska;
    float sirka;
};

#endif /* OBDELNIK_H */

