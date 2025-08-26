// C program to insert given element at a given position

#include <stdio.h>

int main(){
    int n=5;
    int arr[6]={10, 20, 30, 40, 50};
    int ele=70;
    int pos = 2;
    
    printf("array before insertion\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

// Shifting elements to the right

    for(int i=n; i<=pos; i--){
        arr[i]=arr[i-1];
    }
    
// Insert the new element at index pos - 1    

    arr[pos-1]=ele;

    printf("\narray after insertion\n");
    for(int i=0; i<=n; i++){
        printf("%d ",arr[i]);
    
    }   
        return 0;
}