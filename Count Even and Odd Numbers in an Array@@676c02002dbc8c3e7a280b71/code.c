#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int coue=0,couo=0;
    for(i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            coue++;
        }
    }
    for(i=0;i<=n-1;i++){
        if(arr[i]%2!=0){
            couo++;
        }
    }
    printf("%d %d",coue,couo);
}