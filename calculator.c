#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void homepage();
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

void further_operations(float v);
void further_add(float n);
void further_subtract(float n);
void further_multipy(float n);
void further_divide(float n);



int main(){
    printf("PRESS ANY KEY to start the calculator...\n");
    getch();
    homepage();

    return 0;
}



float add(float x, float y){
    return x + y;
}
float subtract(float x, float y){
    return x - y;
}
float multiply(float x, float y){
    return x * y;
}
float divide(float x, float y){
    return x / y;
}

void homepage(){
    int i;
    float a, s, m, d;
    float n1, n2;
    char charinput;

    printf("\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit the calculator\n");

    printf("\n");
    printf("Choose your option: ");
    scanf("%d", &i);

    switch(i){
        case 1:
        printf("\n");
        printf("Enter your first number: ");
        scanf("%f", &n1);
        printf("Enter your second number: ");
        scanf("%f", &n2);
        a = add(n1, n2);
        printf("\n");
        printf("Resultant: %f\n", a);
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

        case 2:
        printf("\n");
        printf("Enter your first number: ");
        scanf("%f", &n1);
        printf("Enter your second number: ");
        scanf("%f", &n2);
        s = subtract(n1, n2);
        printf("\n");
        printf("Resultant: %f\n", s);
        printf("\n");
        printf("Enter 'y' to apply futher arithmetic operations to this resultant.\n");
        printf("Otherwise enter 'n'.\n");
        printf("Enter 'y' or 'n': ");
        scanf(" %c", &charinput); 
      
        if(charinput=='y'){
            further_operations(s);
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

        case 3:
        printf("\n");
        printf("Enter your first number: ");
        scanf("%f", &n1);
        printf("Enter your second number: ");
        scanf("%f", &n2);
        m = multiply(n1, n2);
        printf("\n");
        printf("Resultant: %f\n", m);
        printf("\n");
        printf("Enter 'y' to apply futher arithmetic operations to this resultant.\n");
        printf("Otherwise enter 'n'.\n");
        printf("Enter 'y' or 'n': ");
        scanf(" %c", &charinput); 
      
        if(charinput=='y'){
            further_operations(m);
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

        case 4:
        printf("\n");
        printf("Enter your first number: ");
        scanf("%f", &n1);
        printf("Enter your second number: ");
        scanf("%f", &n2);
        d = divide(n1, n2);
        printf("\n");
        printf("Resultant: %f\n", d);
        printf("\n");
        printf("Enter 'y' to apply futher arithmetic operations to this resultant.\n");
        printf("Otherwise enter 'n'.\n");
        printf("Enter 'y' or 'n': ");
        scanf(" %c", &charinput); 
      
        if(charinput=='y'){
            further_operations(d);
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

        case 5:
        printf("Thank you for using our calculator!");
        exit(0);
        break;

        default:
        printf("Invalid input!\n");
        printf("Calculator stopped automatically.\n");
        exit(0);

    }
}


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

        case 5:
        homepage();
        break;

        case 6:
        printf("Thank you for using our calculator!");
        exit(0);
        break;

        default:
        printf("Invalid input!\n");
        printf("Calculator stopped automatically.\n");
        exit(0);

    }

}

void further_add(float n){
    float n1;
    // n is the resultant that we will get
    printf("Enter the number that you want to add to the resultant: ");
    scanf("%f", &n1);
    n += n1;
    printf("\n");
    printf("Resultant: %f", n);
    further_operations(n);
}
void further_subtract(float n){
    float n1;
    printf("Enter the number that you want to add to the resultant: ");
    scanf("%f", &n1);
    n -= n1;
    printf("\n");
    printf("Resultant: %f", n);
    further_operations(n);
}
void further_multipy(float n){
    float n1;
    printf("Enter the number that you want to add to the resultant: ");
    scanf("%f", &n1);
    n *= n1;
    printf("\n");
    printf("Resultant: %f", n);
    further_operations(n);
}
void further_divide(float n){
    float n1;
    printf("Enter the number that you want to add to the resultant: ");
    scanf("%f", &n1);
    n /= n1;
    printf("\n");
    printf("Resultant: %f", n);
    further_operations(n);
}


