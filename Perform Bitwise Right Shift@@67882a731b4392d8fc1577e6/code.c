#include <stdio.h>

int main() {
    int a,b;
    printf("%d %d",&a,&b);
    printf("%d",b>>a);
    return 0;
}