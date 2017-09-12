/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on 8. září 2017, 10:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INPUT "datalog.csv"
#define OUTPUT "data.html"
#define ODDELOVACE " \n"
#define BUFFER 100
/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    int dataSum1 = 0, dataSum2 = 0, dataSum3 = 0, dataSum4 = 0, dataSum5 = 0, dataSum6 = 0;
    int rows = 0;
    char *pch;
    char buffer[BUFFER];
    typedef struct{
        char tag[10];
        char start[6];
        char end[6];
        int data;
    }DATA;
    DATA table[30];
    FILE*input;
    input = fopen(INPUT, "r");
    if(input == NULL){
        printf("File %s couldn't be opened.\n", INPUT);
        return EXIT_FAILURE;
    }
    
    while(fgets(buffer, BUFFER, input) != NULL){
            i = 0;
            pch = strtok(buffer, ODDELOVACE);
            while(pch != NULL){
                switch(i){
                    case 0: 
                        strcpy(table[rows].tag, pch);
                        break;
                    case 1:
                        strcpy(table[rows].start, pch);
                        break;
                    case 2:
                        strcpy(table[rows].end, pch);
                        break;
                    case 3:
                        table[rows].data = atoi(pch);
                        break;
                }
                i++;
                pch = strtok(NULL, ODDELOVACE);
            }           
        rows++;
    }
    
    if(fclose(input) == EOF){
        printf("File %s couldn't be closed.\n", INPUT);
    }
    
    rows;
    FILE*output;
    output = fopen(OUTPUT, "w");
    if(output == NULL){
        printf("File %s couldn't be opened.\n", OUTPUT);
        return EXIT_FAILURE;
    }

    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC1") == 0){
            dataSum1 += table[i].data;
        }
        else if(strcmp(table[i].tag, "PC2") == 0){
            dataSum2 += table[i].data;
        }
        else if(strcmp(table[i].tag, "PC3") == 0){
            dataSum3 += table[i].data;
        }
        else if(strcmp(table[i].tag, "PC4") == 0){
            dataSum4 += table[i].data;
        }
        else if(strcmp(table[i].tag, "PC5") == 0){
            dataSum5 += table[i].data;
        }
        else if(strcmp(table[i].tag, "PC6") == 0){
            dataSum6 += table[i].data;
        }
    }
    
    fprintf(output, "<h1>Prehled pripojeni</h1>");
    fprintf(output, "<table>");
    fprintf(output, "<tr><th>pc</th><th>start</th><th>konec</th><th>minuty</th><th>data</th></tr>");
    fprintf(output, "<tr><th>PC1</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum1);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC1") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "<tr><th>PC2</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum2);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC2") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "<tr><th>PC3</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum3);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC3") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "<tr><th>PC4</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum4);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC4") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "<tr><th>PC5</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum5);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC5") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "<tr><th>PC6</th><th> </th><th> </th><th> </th><th>%d b</th></tr>", dataSum6);
    for(i = 0; i < rows; i++){
        if(strcmp(table[i].tag, "PC6") == 0){
            fprintf(output, "<tr><td> </td><td>%s</td><td>%s</td><td> </td><td>%d b</td></tr>", table[i].start, table[i].end, table[i].data);
        }
    }
    fprintf(output, "</table>");
    
    if(fclose(output) == EOF){
        printf("File %s couldn't be closed.\n", OUTPUT);
    }
    return (EXIT_SUCCESS);
}

