#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%.0f .0f %c",&a,&b,&c);
    if(c='+'){
        printf("%.0f",a+b);
    }
    else if(c='-'){
        printf("%.0f",a-b);
    }
    else if(c='/'){
        printf("%.0f",a/b);
    }
    else{
        printf("%.0f",a*b);
    }
    return 0;
}