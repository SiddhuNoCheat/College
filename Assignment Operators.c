#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Assignment Operators\n");

    int result = a;//Assignment Operator
    printf("result = %d\n", result);

    result += b;// result = result + b
    printf("result = %d\n", result);//10 +5 = 15

    result -= b;//result = result = result - b
    printf("result = %d\n", result);//15-5=10
}
