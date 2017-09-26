/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package areas;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author student
 */
public class Areas {
    Scanner sc = new Scanner(System.in, "UTF-8");
    enum Options {
        S, R, T, C, X;
    }
    
    float readNumber(String text){
        float input = -1;
        do {
            try {
                System.out.print(text + ": ");
                input = sc.nextFloat();
                if (input < 0) {
                    System.out.println("Číslo nesmí být záporné!");
                }
            } catch (InputMismatchException e) {
                System.out.println("Nesprávně zadané číslo!");
            }
            sc.nextLine();
        } while (input < 0);
        return input;
    }
    
    double getSquareArea(float a) {
        return(Math.pow(a, 2));
    }
    
    double getRectArea(float a, float b) {
        return a*b;
    }
    
    double getTriArea(float a, float b, float c) {
        return 0;
    }
    
    double getCircleArea(float r) {
        return Math.PI*Math.pow(r, 2);
    }
    
    void menu(){
        String optChar = "";
        do {
            System.out.println("Výpočet plochy geometrických tvarů");
            System.out.println("----------------------------------");
            System.out.println("S - Čtverec, R - Obdélník, T - Trojúhelník, C - Kruh, X - Konec");
            System.out.println("Zadej volbu: ");
            optChar = sc.nextLine();
            try {
                Options option = Options.valueOf(optChar.toUpperCase());
                switch(option) {
                    case S: System.out.println("Čtverec");
                            float a = this.readNumber("Zadej stranu a: ");
                            System.out.printf("Plocha čtverce o straně %.2f je %.2f", a, this.getSquareArea(a));
                            System.out.println();
                            break;
                    case R: System.out.println("Obdélník");
                            float ar = this.readNumber("Zadej stranu a: ");
                            float br = this.readNumber("Zadej stranu b: ");
                            System.out.printf("Plocha obdélníku o stranách %.2f a %.2f je %.2f", ar, br, this.getRectArea(ar, br));
                            System.out.println();
                            break;
                    case T: System.out.println("Trojúhelník");
                            float at = this.readNumber("Zadej stranu a: ");
                            float bt = this.readNumber("Zadej stranu b: ");
                            float ct = this.readNumber("Zadej stranu c: ");
                            System.out.printf("Plocha trojúhelníku o stranách %.2f, %.2f a %.2f je %.2f", at, bt, ct, this.getTriArea(at, bt, ct));
                            System.out.println();
                            break;
                    case C: System.out.println("Kruh");
                            float r = this.readNumber("Zadej poloměr kruhu: ");
                            System.out.printf("Plocha kruhu o poloměru %.2f je %.2f", r, this.getCircleArea(r));
                            break;
                }
            } catch (Exception e) {
                System.out.printf("Chybná volba!");
            }
        } while(!optChar.equalsIgnoreCase("X"));
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        menu();
    }
    
}
