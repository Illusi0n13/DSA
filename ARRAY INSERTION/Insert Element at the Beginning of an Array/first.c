// C program to insert given element at the beginning

#include <stdio.h>

int main(){
    int n=6;
    int arr[7]={22, 33, 44, 55, 66, 77};
    int first=88;

    printf("array before insertion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

// Shifting elements to the right    

    for(int i=n-1; i>=0; i-- ){
        arr[i+1]=arr[i];
    }
    
// Insert the new element at the beginning
    arr[0]=first;
   
     printf("\narray after insertion\n");
    for (int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}