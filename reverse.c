#include <stdio.h>

void main(){
    int arr[10], i;
    for ( i = 0; i < 10; i++){
        printf("\nEnter the number %d:", i+1);
        scanf("%d", &arr[i]);
    }for(i=9; i>=0;){
        printf("%d\t", arr[i]);
        i--;
    }
    return 0;
}