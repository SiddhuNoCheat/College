#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Side 1:");
    scanf("%d", &a);
    printf("Side 2:");
    scanf("%d", &b);
    printf("Side 3:");
    scanf("%d", &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("Triangle can be formed\n");

        //Check type of triangle
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isoceles Triangle");
        }
        else {
            printf("It is an Scalene Triangle");
        }
    }
    else {
        printf("Triangle cant be formed");
    }

}
