/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bod.h
 * Author: student
 *
 * Created on 13. října 2017, 11:46
 */

#ifndef BOD_H
#define BOD_H

class Bod {
public:
    Bod();
    Bod(int, int);
    Bod(const Bod& orig);
    virtual ~Bod();
    int getX() const;
    void setX(int);
    int getY() const;
    void setY(int);
    float distance(const Bod&) const;
    float r() const;
    float uhel() const;
private:
    int x;
    int y;
};

#endif /* BOD_H */

