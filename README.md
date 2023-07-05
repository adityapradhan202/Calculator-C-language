# Calculator in C language...
I did this project after completing a crash course in C language. If you are a beginner who has learned the core fundamentals of C language, C++, or any other language, you can try this simple command line project, and make your own command line calculator!

![gif](https://cdn.dribbble.com/users/1260235/screenshots/2835452/2016-07-10-calculator-dribbble-ani.gif)

### Concepts used in this project:
1. If-else statements
2. Switch case
3. Functions and recursion
4. And the concepts of basic input and output

### Header files used in this project:
In this project we will use these header files.  
```c
#include <stdio.h> // for input and output
#include <conio.h> // for using the getch(); function
#include <stdlib.h> // for using the exit(0); fucntion
``` 

### Flow of the project: 
- Homepage -> addition, subtraction, multiplication, division, exit the calculator (The homepage will have these options)
- We will create functions for these arithmetic operations and also after performing the arithmetic operations, the program will ask the users if they wants to apply more arithmetic operations on the resultant value or do some other calculation.
- If the users want to apply more arithmetic operations with the current resultant, the program will take them to the page of 'Further arithmetic operations', otherwise program will bring them back to the homepage.
- We will provide the option of exiting the calculator on 'Further arithmetic operations' page too.

### Creating the functions for homepage and arithmetic operations:
```c
void homepage();
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);float
float divide(float x, float y);
```

In the homepage we will keep the options for all the arithmetic operations and we will keep an option to exit the program too.

- Defintion of homepage(); function:
```c
void homepage(){
    int i;
    float a, s, m, d;
    float n1, n2;
    char charinput;

    printf("\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Devision\n");
    printf("5. Exit the calculator\n");

    printf("\n");
    printf("Choose your option: ");
    scanf("%d", &i);

    // then we will use a switch case...

```
- Definition of arithmetic operations:
Let's keep the return type as float, and also let's keep the parameter as float type parameters. So that even if we pass values like 2 or 3 into the function, those will be typcasted into floats (like 2.0 and 3.0).
```c
float add(float x, float y){
    return x + y;
}
float subtract(float x, float y){
    return x - y;
}
float multiply(float x, float y){
    return x * y;
}
float divide(float x, float y);
    return x / y;
}
```
- Adding switch case in the homepage:
```c
switch(i){
        case 1:
        printf("\n");
        printf("Enter your first number: ");
        scanf("%f", &n1);
        printf("Enter your second number: ");
        scanf("%f", &n2);
        a = add(n1, n2);
        printf("\n");
        printf("Resultant: %.2f\n", a);
        printf("\n");
        printf("Enter 'y' to apply futher arithmetic operations to this resultant.\n");
        printf("Otherwise enter 'n'.\n");
        printf("Enter 'y' or 'n': ");
        scanf(" %c", &charinput); 
        // leave a space before %c to take '\n' character produced by previous scanf functions

        if(charinput=='y'){
            further_operations(a);
        }
        else if(charinput=='n'){
            homepage();
        }
        else{
            printf("Invalid input!\n");
            printf("Calculator stopped automatically.\n");
            exit(0);
        }
        
        break;
```
We will do the same thing for all the cases of arithmetic operations.  
Here we are passing the resultant to the further_operations(float v); function. This function can add/subtract/divide/multiply with this resultant 'a' which is (n1+n2) here.

### Definition of further_operations function and furhter_arithmetic functions:
```c
void further_operations(float v){
    int j;
    printf("\n\n");
    printf("1. Add a number to your resultant\n");
    printf("2. Subtract a number from your resultant\n");
    printf("3. Multiply a number with your resultant\n");
    printf("4. Divide your resultant by a number\n");
    printf("5. Go back to the home page\n");
    printf("6. Exit the calculator\n");

    printf("\n");
    printf("Choose your option: ");
    scanf("%d", &j);

```
- In the switch case we will keep functions which will do further arithmetic operations.
Create the function for further operation for each arithmetic operation like this...
```c
void further_operations(float v);
void further_add(float n);
void further_subtract(float n);
void further_multipy(float n);
void further_divide(float n);
```
- Definition of these functions:
```c
void further_add(float n){
    float n1;
    // n is the resultant that we will get
    printf("Enter the number that you want to add to the resultant: ");
    scanf("%f", &n1);
    n += n1;
    printf("\n");
    printf("Resultant: %.2f", n);
    further_operations(n);
    // calling the further_operations(float v) and passing our new resultant into to it
}
```
- Definition is similar for subtraction, multiplication and division.
And now we will call these functions inside the switch case of our further_arithmetic(float v); function.
```c
// we are calling these functions inside the switch case of further_operations(float v);
 switch(j){
        case 1:
        further_add(v);
        break;

        case 2:
        further_subtract(v);
        break;

        case 3:
        further_multipy(v);
        break;

        case 4:
        further_divide(v);
        break;
```
### Some more info about the project:
- The code is pretty self explanatory. And I hope that you will be able to create your own command line calculator too.
- If you think that it is complicated for you, then I would suggest you to revise your basics a little bit, and then you can try a very simple calculator with some functions and recursion, and then you can try this one. 
- Link for the simple calculator - **[Simple Calculator][simplecalc.link]**

[comment]: <> (Links for the references are given below)
[simplecalc.link]: https://github.com/adityapradhan202/Calculator-C-language/blob/main/simple_calculator.c
