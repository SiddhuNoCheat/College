#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Hello enter your marks in English : ");
    scanf("%d", &a);

    printf("Enter your marks in Maths : ");
    scanf("%d", &b);
    if (a >= 40 && b >= 40) {
        printf("Congrats you passed with %d and %d Marks!", a, b);
    }
    else {
        printf("Student has failed unfortunately🤡🤡");
    }
}
