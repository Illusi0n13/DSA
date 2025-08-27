// C program to delete an element from the beginning 

#include <stdio.h>

int main(){
    
    int arr[]={22, 33, 44, 55, 66, 77};
    int n= sizeof(arr)/sizeof(arr[0]);
   

    printf("array before deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
// Shift all the elements 1 position to the left
    // starting from second element  

    for(int i=1; i<n; i++ ){
        arr[i-1]=arr[i];
    }
     // Reduce the array size by 1
    n--;
   
     printf("\narray after deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}