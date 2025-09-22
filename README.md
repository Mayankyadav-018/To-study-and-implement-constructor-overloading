# EXPERIMENT NO – 13

* Aim: To study and implement Constructor Overloading in C++ for flexible object initialization.

* Tools Used: IDE, objects, parameterized constructors, function overloading concept.

* Theory:

In C++, constructor overloading allows a class to have multiple constructors with different parameter lists.
This provides flexibility in initializing objects in different ways.

The compiler distinguishes between constructors based on the number and types of arguments.

Overloading helps in creating objects with varying initial data.

🔹 *Key Features of Constructor Overloading:*

Same class can have multiple constructors.

Constructors differ in parameter list (number or type of arguments).

Provides flexibility in object creation.

No return type (same as normal constructors).

Constructors are automatically invoked at the time of object creation.

1. *Syntax:*

       class ClassName {
       public:
          ClassName();                 // default constructor  
          ClassName(int x);            // parameterized constructor (1 arg)  
          ClassName(int x, int y);     // parameterized constructor (2 args)  
       };

2. *Advantages of Constructor Overloading:*

* Provides multiple ways to initialize objects.

* Improves code readability and flexibility.

* Reduces the need for multiple initialization functions.

* Makes classes more user-friendly.

# Function Overloading:

This program demonstrates the concept of Function Overloading in C++.
The Calculator class contains two add() functions:

* One takes two integers as parameters.

* The other takes two double values.

Depending on the type of arguments passed, the appropriate add() function is executed. This highlights the concept of compile-time polymorphism in Object-Oriented Programming.

ALGORITHM:

1> Start

2> Define a class Calculator with the following overloaded functions:

* int add(int a, int b) → returns sum of integers.

* double add(double a, double b) → returns sum of doubles.

3> In main():

* Create an object calc of class Calculator.

* Call add(5, 10) and store result in intResult.

* Call add(5.5, 2.5) and store result in floatResult.

4> Display both results using cout.

5> End

# Operator Overloading Calc

This program demonstrates the concept of Operator Overloading in C++.
The Calc class defines overloaded operators +, -, *, and / for performing arithmetic operations on objects.

Each operator function returns a new object with the computed value.

Division includes a check to prevent division by zero.

The show() function displays the result with a label.

This program highlights the use of operator overloading to extend the functionality of operators for user-defined classes.

ALGORITHM:

1> Start

2> Define a class Calc with:

* A private data member value.

* A constructor Calc(int v = 0) for initialization.

* A member function show() to display results.

3> In main():

* Create objects a(20) and b(4).

* Perform operations using overloaded operators:

4> Display all results using show().

5> End

# Addition using constructor overloading

This program demonstrates the concept of Constructor Overloading in C++.
The Sum class contains multiple constructors with different parameter lists:

* A constructor that takes two integers and displays their sum.

* A constructor that takes two floating-point numbers and displays their sum.

* A constructor that takes three integers and displays their sum.

At the time of object creation, the compiler automatically calls the appropriate constructor based on the number and type of arguments provided. This highlights the flexibility of constructor overloading in Object-Oriented Programming.

*ALGORITHM:*

1> Start

2> Define a class Sum with multiple constructors:

3> In main():

* Declare variables a, b, c (integers) and p, q (floats).

* Prompt the user to enter two integers, two floating-point numbers, and three integers.

4> Display the results directly from constructors.

5> End

