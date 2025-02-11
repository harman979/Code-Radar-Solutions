#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    while(a<=12){
        if(a%2!=0){
            printf("%d",31);
        }
        else if(a==2){
            printf("%d",28);
        }
        else{
            printf("%d",30);
        }
    }
    return 0;
}