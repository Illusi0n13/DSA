# Array Element Deletion from End

## File: end.c

## Description
This C program demonstrates how to delete an element from the end of an array by simply reducing the array size.

## Algorithm
1. Initialize an array with sample values: {22, 33, 44, 55, 66, 77}
2. Calculate the initial array size using `sizeof(arr)/sizeof(arr[0])`
3. Display the array before deletion
4. Reduce the array size by 1
5. Display the array after deletion

## Time Complexity
- **O(1)** - The operation of reducing the size does not require shifting elements

## Space Complexity
- **O(1)** - No additional space is required beyond the original array

## Sample Output
```
array before deletion
22 33 44 55 66 77 
array after deletion
22 33 44 55 66 
```

## Compilation and Execution
```bash
gcc end.c -o end
./end
```

## Notes
- This method modifies the original array in-place
- The last element becomes inaccessible after size reduction
- Suitable for scenarios where the last element needs to be removed quickly
