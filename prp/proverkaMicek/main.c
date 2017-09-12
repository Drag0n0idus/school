/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on 26. května 2017, 8:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ODDELOVACE ";\n"
#define BUFFER 200
#define VSTUP "skoky.txt"
#define VYSTUP "skoky.html"
/*
 * 
 */
char *datum(const char *datum){
    int i;
    char *pch;
    char den[3];
    char pom[2];
    char mesic[3];
    char rok[5];
    char *novy = (char*)malloc(12 * sizeof(char));
    i = 0;
    char datumKopie[15];
    strcpy(datumKopie, datum);
    pch = strtok(datumKopie, ".\n");
    while(pch != NULL){
        switch(i){
            case 0:
                strcpy(den, pch);
                break;
            case 1:
                strcpy(mesic, pch);
                break;
            case 2:
                strcpy(rok, pch);
                break;
        }
        i++;
        pch = strtok(NULL, ".\n");
    }
    strcpy(novy, rok);
    strcat(novy, "-");
    if(strlen(mesic) == 1){
        strcpy(pom, mesic);
        mesic[0] = '0';
        strcat(mesic, pom);
    }
    strcat(novy, mesic);
    strcat(novy, "-");
    if(strlen(den) == 1){
        strcpy(pom, den);
        den[0] = '0';
        strcat(den, pom);
    }
    strcat(novy, den);
    return novy;
}

int main(int argc, char** argv) {
    typedef struct{
        char jmeno[50];
        char prijmeni[50];
        char datumNarozeni[50];
        char stat[5];
        int delka;
        int tymy;
    }SKOKANI;
    SKOKANI skokani[100];
    char buffer[BUFFER];
    char *pch;
    int pocetRadku = 0;
    int i = 0;
    int neTym = 0;
    int index;
    int poradi = 1;
    int maxSkok = 0;
    float prumDelka = 0;
    FILE * soubor;
    soubor = fopen(VSTUP, "r");
    if(soubor == NULL){
        printf("Soubor %s nebyl otevren.\n", VSTUP);
        return EXIT_FAILURE;
    }
    
    while(fgets(buffer, BUFFER, soubor) != NULL){
        if(pocetRadku != 0){
            i = 0;
            pch = strtok(buffer, ODDELOVACE);
            while(pch != NULL){
                switch(i){
                    case 0:
                        strcpy(skokani[pocetRadku - 1].prijmeni, pch);
                        break;
                    case 1:
                        strcpy(skokani[pocetRadku - 1].jmeno, pch);
                        break;
                    case 2:
                        strcpy(skokani[pocetRadku - 1].datumNarozeni, pch);
                        break;
                    case 3:
                        strcpy(skokani[pocetRadku - 1].stat, pch);
                        break;
                    case 4:
                        skokani[pocetRadku - 1].delka = atoi(pch);
                        if(skokani[pocetRadku - 1].delka > maxSkok){
                            maxSkok = skokani[pocetRadku - 1].delka;
                            index = pocetRadku - 1;
                        }
                        prumDelka += skokani[pocetRadku - 1].delka;
                        break;
                    case 5:
                        if(strcmp(pch, "ANO") == 0){
                            skokani[pocetRadku - 1].tymy = 1;
                        }
                        else{
                            skokani[pocetRadku - 1].tymy = 0;
                            neTym++;
                        }
                        break;
                }
                i++;
                pch = strtok(NULL, ODDELOVACE);
            }
        }
        pocetRadku++;
    }
    pocetRadku = pocetRadku - 2;
    
    printf("Celkovy pocet zavodniku je %d.\n\n", pocetRadku);
    printf("Pocet zavodniku nezarazenych v tymech je %d.\n\n", neTym);
    printf("Nejdelsi skok meri %dm, skocil ho %s %s z %s.\n\n", maxSkok,skokani[index].jmeno, skokani[index].prijmeni, skokani[index].stat);
    printf("Prumerna delka skoku je %.2fm.\n\n", prumDelka/pocetRadku);
    
    if(fclose(soubor) == EOF){
        printf("Soubor %s nebyl uzavren.\n", VSTUP);
        return EXIT_FAILURE;
    }
    
    soubor = fopen(VYSTUP, "w");
    if(soubor == NULL){
        printf("Soubor %s nebyl otevren.\n", VYSTUP);
        return EXIT_FAILURE;
    }
    
    fprintf(soubor, "<style>td{border: 1px dotted black;} th, td{width: 100px}</style>");
    fprintf(soubor, "<h1>Tym Ceske Republiky</h1>");
    fprintf(soubor, "<table>");
    fprintf(soubor, "<tr><th>Poradi</th><th>Jmeno</th><th>Prijmeni</th><th>Datum narozeni</th><th>Delka skoku</th></tr>");
    for(i = 0; i < pocetRadku; i++){
        if(skokani[i].tymy){
            if(strcmp(skokani[i].stat, "CZE") == 0){
                pch = datum(skokani[i].datumNarozeni);
                fprintf(soubor, "<tr><td>%d.</td><td>%s</td><td>%s</td><td>%s</td><td>%dm</td></tr>", 
                        poradi, skokani[i].jmeno, skokani[i].prijmeni, pch, skokani[i].delka);
                poradi++;
            }
        }
    }
    fprintf(soubor, "</table>");
    
    if(fclose(soubor) == EOF){
        printf("Soubor %s nebyl uzavren.\n", VYSTUP);
        return EXIT_FAILURE;
    }
    else{
        printf("Byl vytvoren soubor %s.\n\n", VYSTUP);
        free(pch);
    }
    return (EXIT_SUCCESS);
}

