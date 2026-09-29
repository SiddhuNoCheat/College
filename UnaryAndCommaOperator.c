#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;

    //Unary Operators
    printf("Unary Operators\n");
    printf("++a = %d\n", ++a);
    printf("--b = %d\n", --b);
    //Comma Operator
    printf("\nComma Operators\n");
    result = (a , b);
    printf("result = %d\n", result);
}
