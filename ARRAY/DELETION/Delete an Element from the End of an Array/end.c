// C program to delete an element from the end
#include <stdio.h>

int main(){
    
    int arr[]={22, 33, 44, 55, 66, 77};
    int n= sizeof(arr)/sizeof(arr[0]);
   

    printf("array before deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

//Reduce the array size by 1
    n--;
   
    printf("\narray after deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}