/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   obdelnik.hpp
 * Author: student
 *
 * Created on 19. října 2017, 11:51
 */

#ifndef OBDELNIK_HPP
#define OBDELNIK_HPP

class obdelnik {
public:
    //Výchozí konstruktor
    obdelnik(float, float);
    //kopírovací konstruktor
    obdelnik(const obdelnik& orig);
    virtual ~obdelnik();
    //přístupové metody
    float get_a()const;
    float get_b()const;
    bool set_a(float);
    bool set_b(float);
    float uhlopricka()const;
    float obvod()const;
    float obsah()const;
private:
    float a;
    float b; 
};

#endif /* OBDELNIK_HPP */

