#include<stdio.h>
int main(){
    int a,b,i;
    b=0;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            b=1;
        }
    }
    if(b==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }



    return 0;
}