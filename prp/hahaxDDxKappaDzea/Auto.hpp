/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Auto.hpp
 * Author: student
 *
 * Created on 10. listopadu 2017, 12:12
 */

#ifndef AUTO_HPP
#define AUTO_HPP

class Auto {
public:
    Auto();
    Auto(const Auto&);
    virtual ~Auto();
    char * getSPZ() const;
    float getSpotreba() const;
    int getRokVyroby() const;
private:
    char * spz;
    float spotreba;
    int rokVyroby;
    bool checkSPZ(char *);
};

#endif /* AUTO_HPP */