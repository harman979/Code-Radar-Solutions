#include<stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c == '+') {
        printf("%d", a + b);
    }
    else if(c == '-') {
        printf("%d", a - b);
    }
    else if(c == '/') {
        if (b != 0) {
            printf("%d", a / b); // Integer division
        } else {
            printf("Error! Division by zero.\n");
        }
    }
    else if(c == '*') {
        printf("%d", a * b);
    } 
    else {
        printf("Invalid operator");
    }

    return 0;
}
