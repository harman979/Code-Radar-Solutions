#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=2*a-1;k++){
            printf("* ");
        }
    }
}