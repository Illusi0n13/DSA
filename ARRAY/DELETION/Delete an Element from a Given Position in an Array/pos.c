// C program to delete an element from the given position

#include <stdio.h>

int main(){
    
    int arr[]={22, 33, 44, 55, 66, 77};
    int n= sizeof(arr)/sizeof(arr[0]);
    int pos = 2;
   

    printf("array before deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // Delete the element at the given position
    for(int i=pos; i<n; i++ ){
        arr[i-1]=arr[i];
    }
    
    if(pos<=n);
    n--;
   
     printf("\narray after deletion\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}