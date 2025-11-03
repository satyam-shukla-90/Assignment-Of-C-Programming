/*
C Language Assignment
1. What do you mean by Arrays? Give one example of array and how you can declare an array.
2. What do you mean by Functions? Write the types of functions and give one example in code of each type.
3. What do you mean by Pointers? Write a code how you can initialise the pointer.
4. What are the types of Arrays? Write in code (1D & 2D included).
5. Explain the types of Operators in code.
*/

#include <stdio.h>

// 1. Arrays
/*
Explanation:
An array is a collection of elements of the same data type stored in contiguous memory locations.
It allows us to store multiple values under a single variable name.

Example Declaration:
int marks[5];
*/

void example_arrays() {
    int marks[5] = {85, 90, 78, 88, 92};
    printf("\n1. Array Example:\n");
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    // Output:
    // marks[0] = 85
    // marks[1] = 90
    // marks[2] = 78
    // marks[3] = 88
    // marks[4] = 92
}

// 2. Functions
/*
Explanation:
A function is a block of code that performs a specific task.
Types of functions in C:
1. Function with no arguments and no return value.
2. Function with arguments but no return value.
3. Function with no arguments but with return value.
4. Function with arguments and return value.
*/

void greet() { // no arguments, no return
    printf("Hello from function with no arguments and no return value!\n");
}

void printSum(int a, int b) { // with arguments, no return
    printf("Sum (with args, no return): %d\n", a + b);
}

int getNumber() { // no arguments, with return
    return 10;
}

int add(int x, int y) { // with arguments and return
    return x + y;
}

void example_functions() {
    printf("\n2. Functions Example:\n");
    greet();
    printSum(3, 4);
    int num = getNumber();
    printf("Function returned number: %d\n", num);
    int result = add(5, 7);
    printf("Sum (with args and return): %d\n", result);
    // Output:
    // Hello from function with no arguments and no return value!
    // Sum (with args, no return): 7
    // Function returned number: 10
    // Sum (with args and return): 12
}

// 3. Pointers
/*
Explanation:
A pointer is a variable that stores the memory address of another variable.

Initialization Example:
int a = 10;
int *ptr = &a;
*/

void example_pointers() {
    int a = 10;
    int *ptr = &a;
    printf("\n3. Pointer Example:\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value stored in pointer ptr: %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    // Output (Address will vary):
    // Value of a: 10
    // Address of a: 0x7ffeefbff5ac (example)
    // Value stored in pointer ptr: 0x7ffeefbff5ac
    // Value pointed by ptr: 10
}

// 4. Types of Arrays (1D and 2D)
/*
Explanation:
1D Array: Stores data in a single row.
2D Array: Stores data in rows and columns like a table.
*/

void example_array_types() {
    printf("\n4. Types of Arrays Example:\n");

    int oneD[3] = {1, 2, 3};
    printf("1D Array elements:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", oneD[i]);
    }
    printf("\n");

    int twoD[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("2D Array elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", twoD[i][j]);
        }
        printf("\n");
    }
    // Output:
    // 1D Array elements:
    // 1 2 3
    // 2D Array elements:
    // 1 2 3
    // 4 5 6
}

// 5. Operators
/*
Explanation:
Operators are symbols used to perform operations on operands.
Types of Operators:
1. Arithmetic Operators (+, -, *, /, %)
2. Relational Operators (==, !=, >, <, >=, <=)
3. Logical Operators (&&, ||, !)
4. Assignment Operators (=, +=, -=, etc.)
5. Increment/Decrement Operators (++ and --)
*/

void example_operators() {
    printf("\n5. Operators Example:\n");

    int a = 10, b = 5;

    // Arithmetic Operators
    printf("Arithmetic: a + b = %d\n", a + b);

    // Relational Operators
    printf("Relational: a > b = %d\n", a > b);

    // Logical Operators
    printf("Logical: (a > b && b < 10) = %d\n", (a > b && b < 10));

    // Assignment Operators
    a += 5;
    printf("Assignment: a += 5 -> %d\n", a);

    // Increment/Decrement
    b++;
    printf("Increment: b++ -> %d\n", b);

    // Output:
    // Arithmetic: a + b = 15
    // Relational: a > b = 1
    // Logical: (a > b && b < 10) = 1
    // Assignment: a += 5 -> 15
    // Increment: b++ -> 6
}

int main() {
    example_arrays();
    example_functions();
    example_pointers();
    example_array_types();
    example_operators();

    return 0;
}
