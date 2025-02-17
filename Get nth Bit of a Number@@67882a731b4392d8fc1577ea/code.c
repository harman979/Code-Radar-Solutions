#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a>>b;
    d=c&1;
    if(d==1){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}