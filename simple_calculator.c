#include <stdio.h>
#include <stdlib.h> // we used it for using exit(0);
#include <conio.h> // we used this headerfile to use getch();


void home_page();
void add(float n1, float n2);
void subtract(float n1, float n2);
void divide(float n1, float n2);
void multiply(float n1, float n2);


int main(){

    printf("Welcome!\n");
    printf("This calculator will add, subtract, divide, multiply two numbers for you.\n");
    printf("***Press any key to proceed***\n");
    getch();
    // as soon as the user will press a key...
    // the program will start executing the rest of the code
    home_page();

    return 0;
}


// home page of calculator
void home_page(){

    int option;
    float n1, n2;

    printf("1. Add two numbers\n");
    printf("2. Subtract two numbers\n");
    printf("3. Divide two numbers\n");
    printf("4. Multiply two numbers\n");
    printf("5. Exit\n");
    printf("\n");

    printf("Choose your option: ");
    scanf("%d", &option);

    if(option>=1 && option<=5){
        switch(option){
            case 1:
            printf("Enter your first number: ");
            scanf("%f", &n1);
            printf("Enter your second number: ");
            scanf("%f", &n2);
            add(n1, n2);
            home_page();

            case 2:
            printf("Enter your first number: ");
            scanf("%f", &n1);
            printf("Enter your second number: ");
            scanf("%f", &n2);
            subtract(n1, n2);
            home_page();

            case 3:
            printf("Enter your first number: ");
            scanf("%f", &n1);
            printf("Enter your second number: ");
            scanf("%f", &n2);
            divide(n1, n2);
            home_page();

            case 4:
            printf("Enter your first number: ");
            scanf("%f", &n1);
            printf("Enter your second number: ");
            scanf("%f", &n2);
            multiply(n1, n2);
            home_page();
            
            case 5:
            exit(0);
        }
        
    }
    else{
        printf("Invalid input!");
        exit(0);
    }

}

// all the mathematical functions here...
void add(float n1, float n2){
    float sum = n1 + n2;
    printf("Sum: %.2f\n", sum);
    printf("\n");
}


void subtract(float n1, float n2){
    float diff = n1 - n2;
    printf("Difference: %.2f\n", diff);
    printf("\n");
}

void divide(float n1, float n2){
    float quotient = n1/n2;
    printf("Quotient: %.2f\n", quotient);
    printf("\n");
}

void multiply(float n1, float n2){
    float multiple = n1*n2;
    printf("Multiple: %.2f\n", multiple);
    printf("\n");
}