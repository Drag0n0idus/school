/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package people;

/**
 *
 * @author student
 */
public class People {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Human student = new Human("Hugo");
        System.out.println(student.toString());
        System.out.println(student.age);
        Human studentka = new Human("Hildegarda");
        System.out.println(studentka.toString());
        System.out.println(studentka.age);
    }
    
}
