/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package people;

/**
 * Třída Human
 * @author student
 */
public class Human {
    /* Vlastní výčtový typ */
    public enum Sex {
        MAN, WOMAN
    }
    /* Atributy třídy */
    String name;
    private int age = 20;
    private int weight = 70;
    private float height = (float) 1.80;
    private Sex sex = Sex.MAN;
    
    /* Metody třídy */
    public Human(String jmeno) {
        this.name = jmeno;
    }
    
    /* Getters a Setters */
    public int getAge() {
        return this.age;
    }
    
    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) {
        this.height = height;
    }

    public Sex getSex() {
        return sex;
    }

    public void setSex(Sex sex) {
        this.sex = sex;
    }
    
    public double getBMI(int weight, float height) {
        return this.weight/Math.pow(this.height, 2);
    }
    
    public String toString() {
        String output = "My name is " + this.name + "\n";
        output += "I'm a " + this.sex + "\n";
        output += "Age: " + this.age + "years old.\n";
        output += "Height: " + this.height + "m\n";
        output += "Weight: " + this.weight + "kg\n";
        output += "BMI: " + this.getBMI(this.weight, this.height) + "\n";
        return output;
    }
}
