#include <stdio.h>
int main(){
    int n,max,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    min=arr[0];
    for(int i=1;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }

    }
    printf("%d %d",max,min);

    
}