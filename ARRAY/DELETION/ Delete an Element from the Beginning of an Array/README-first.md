# Array Element Deletion from Beginning

## File: first.c

## Description
This C program demonstrates how to delete an element from the beginning of an array by shifting all elements one position to the left.

## Algorithm
1. Initialize an array with sample values: {22, 33, 44, 55, 66, 77}
2. Calculate the initial array size using `sizeof(arr)/sizeof(arr[0])`
3. Display the array before deletion
4. Shift all elements from index 1 to n-1 one position to the left (arr[i-1] = arr[i])
5. Reduce the array size by 1
6. Display the array after deletion

## Time Complexity
- **O(n)** where n is the number of elements in the array
- The shifting operation requires iterating through n-1 elements

## Space Complexity
- **O(1)** - No additional space is required beyond the original array

## Sample Output
```
array before deletion
22 33 44 55 66 77 
array after deletion
33 44 55 66 77 
```

## Compilation and Execution
```bash
gcc first.c -o first
./first
```

## Notes
- This method modifies the original array in-place
- The last element becomes inaccessible after size reduction
- Suitable for arrays where order needs to be maintained
