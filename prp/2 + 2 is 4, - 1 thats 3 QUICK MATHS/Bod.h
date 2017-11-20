/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bod.h
 * Author: ucitel
 *
 * Created on 13. října 2017, 11:46
 */

#ifndef BOD_H
#define BOD_H

class Bod {
public:
    Bod();
    Bod(const Bod&);
    Bod(int, int);
    virtual ~Bod();
    int getX() const;
    int getY() const;
    void setX(int);
    void setY(int);
    float vzdalenost(const Bod &) const;
    float r() const;
    float uhel() const;
private:
    int x;
    int y;

};

#endif /* BOD_H */

