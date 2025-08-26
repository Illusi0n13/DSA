// C program to insert given element at the end 
#include <stdio.h>

int main(){
    int n=5;
    int arr[5]={22, 44, 55, 66, 77};
    int last=88;

    printf("array before insertion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    // Inserting element at the end of the array
    arr[n]=last;

    
    printf("\narray after insertion\n");
    for (int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

  