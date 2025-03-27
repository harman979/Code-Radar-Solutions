#include<stdio.h>
int main(){
    int n;i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",arr[i]);
    }
    int coue=0,couo;
    for(i=0;i<=n-1;i++){
        if(arr[i]==0){
            coue++;
        }
        else{
            couo++;
        }
    }
    printf("%d %d",coue,couo);
}