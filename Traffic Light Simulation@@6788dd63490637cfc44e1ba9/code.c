#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c); // Input a character

    // Checking the traffic light signal
    if(c == 'R') {  // Corrected to equality check (==)
        printf("Stop");
    }
    else if(c == 'G') {  // Corrected to equality check (==)
        printf("Go");
    }
    else if(c == 'Y') {  // Corrected to equality check (==)
        printf("Slow Down");
    }
    else {
        printf("Invalid");  // Invalid input case
    }

    return 0;
}
