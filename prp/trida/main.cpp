/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: student
 *
 * Created on 16. října 2017, 11:30
 */

#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
#define Trida "trida.cav"
#define VELIKOST 100
#define ODDELOVAC ";\n"

/*
 * 
 */
int main(int argc, char** argv) {
    typedef struct{
        char prijmeni[50];
        char jmeno[50];
        char narozeni[20];
        int absence;
        char trida[6];
        char pohlavi[5];
    }ZAK;
    FILE * pfile;
    char * pch;
    int pocetRadku=0;
    int i;
    char mystring[VELIKOST];
    pfile = fopen (Trida,"r");
    if(pfile=NULL){
        printf("soubor %s nebyl otevře",Trida);
        return -1;
    }
    while(fgets(mystring,VELIKOST,pfile)!= NULL)
        if(pocetRadku>0){
            puts (mystring);
            pch = strtok(mystring,ODDELOVAC);
        }
        pocetRadku++;
        printf("soubor ma %d radku",pocetRadku-1);
    if(fclose(pfile)==EOF)
        printf("soubor %s se neotevrel. \n",Trida);
    return 0;
}

