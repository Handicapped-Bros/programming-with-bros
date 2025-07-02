/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg01;

/**
 *
 * @author gsmur
 */
//public class Main {
//
//    /**
//     * @param args the command line arguments
//     */
//    public static void main(String[] args) {
//        // TODO code application logic here
//    }
//    
//}



//package b1tranger.JAVA.learning;

import java.util.ArrayList;
import java.util.List;

// Interface - defines contract for drawable objects
interface Drawable {
    void draw();
    double getArea();
}

// Abstract class - cannot be instantiated directly
abstract class Shape implements Drawable {
    protected String color;
    protected static int shapeCount = 0;
    
    // Constructor
    public Shape(String color) {
        this.color = color;
        shapeCount++;
        System.out.println("Shape created. Total shapes: " + shapeCount);
    }
    
    // Abstract method - must be implemented by subclasses
    public abstract double getPerimeter();
    
    // Concrete method
    public String getColor() {
        return color;
    }
    
    // Destructor equivalent (finalize method)
    @Override
    protected void finalize() throws Throwable {
        shapeCount--;
        System.out.println("Shape destroyed. Remaining shapes: " + shapeCount);
        super.finalize();
    }
}

// Inheritance - Circle extends Shape
class Circle extends Shape {
    private double radius;
    
    // Constructor with super call
    public Circle(String color, double radius) {
        super(color); // Call parent constructor
        this.radius = radius;
        System.out.println("Circle constructor called");
    }
    
    // Implementing abstract method
    @Override
    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }
    
    // Implementing interface method
    @Override
    public void draw() {
        System.out.println("Drawing a " + color + " circle with radius " + radius);
    }
    
    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }
    
    // Getter method
    public double getRadius() {
        return radius;
    }
}

// Another inheritance example
class Rectangle extends Shape {
    private double length;
    private double width;
    
    // Constructor
    public Rectangle(String color, double length, double width) {
        super(color);
        this.length = length;
        this.width = width;
        System.out.println("Rectangle constructor called");
    }
    
    @Override
    public double getPerimeter() {
        return 2 * (length + width);
    }
    
    @Override
    public void draw() {
        System.out.println("Drawing a " + color + " rectangle " + length + "x" + width);
    }
    
    @Override
    public double getArea() {
        return length * width;
    }
}

// Another interface example
interface Printable {
    void print();
}

// Multiple interface implementation
class Triangle extends Shape implements Printable {
    private double side1, side2, side3;
    
    public Triangle(String color, double side1, double side2, double side3) {
        super(color);
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
        System.out.println("Triangle constructor called");
    }
    
    @Override
    public double getPerimeter() {
        return side1 + side2 + side3;
    }
    
    @Override
    public void draw() {
        System.out.println("Drawing a " + color + " triangle");
    }
    
    @Override
    public double getArea() {
        // Using Heron's formula
        double s = getPerimeter() / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    
    @Override
    public void print() {
        System.out.println("Triangle details: " + color + " with sides " + 
                         side1 + ", " + side2 + ", " + side3);
    }
}

// Main class demonstrating OOP concepts
//public class OOPExample {
public class Main {
    public static void main(String[] args) {
        System.out.println("=== OOP Concepts Demonstration ===\n");
        
        // Creating objects (instances of classes)
        Circle circle = new Circle("Red", 5.0);
        Rectangle rectangle = new Rectangle("Blue", 4.0, 6.0);
        Triangle triangle = new Triangle("Green", 3.0, 4.0, 5.0);
        
        System.out.println();
        
        // Polymorphism - treating objects as their parent type
        List<Shape> shapes = new ArrayList<>();
        shapes.add(circle);
        shapes.add(rectangle);
        shapes.add(triangle);
        
        System.out.println("=== Polymorphism Example ===");
        for (Shape shape : shapes) {
            shape.draw(); // Calls overridden method
            System.out.println("Area: " + String.format("%.2f", shape.getArea()));
            System.out.println("Perimeter: " + String.format("%.2f", shape.getPerimeter()));
            System.out.println("Color: " + shape.getColor());
            System.out.println();
        }
        
        // Interface usage
        System.out.println("=== Interface Usage ===");
        Drawable drawable = new Circle("Yellow", 3.0);
        drawable.draw();
        System.out.println("Area: " + drawable.getArea());
        
        // Multiple interface implementation
        System.out.println("\n=== Multiple Interface Implementation ===");
        if (triangle instanceof Printable) {
            ((Printable) triangle).print();
        }
        
        // Static member access
        System.out.println("\n=== Static Members ===");
        System.out.println("Total shapes created: " + Shape.shapeCount);
        
        // Demonstrating method overriding vs overloading
        System.out.println("\n=== Method Demonstrations ===");
        displayShapeInfo(circle);
        displayShapeInfo(rectangle);
        
        // Cleanup (Java handles garbage collection automatically)
        System.out.println("\n=== End of Program ===");
    }
    
    // Method overloading example
    public static void displayShapeInfo(Shape shape) {
        System.out.println("Shape: " + shape.getClass().getSimpleName());
        System.out.println("Color: " + shape.getColor());
    }
    
    public static void displayShapeInfo(Circle circle) {
        System.out.println("Circle with radius: " + circle.getRadius());
    }
}