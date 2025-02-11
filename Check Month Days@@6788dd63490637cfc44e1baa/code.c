#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<1|| a>12){
        printf("Invalid month");
    }
    while(a<=12){
        if(a==8|| a==10 || a==12){
            printf("%d",31);
        }
        else if(a==9|| a==11){
            printf("%d",30);
        }
        else if(a%2!=0){
            printf("%d",31);
        }
        else if(a==2){
            printf("%d",28);
        }
        else (a%2==0){
            printf("%d",30);
        }
        break;
    }
    return 0;
}