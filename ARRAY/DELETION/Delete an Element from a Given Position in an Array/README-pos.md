# Array Element Deletion from Specific Position

## File: pos.c

## Description
This C program demonstrates how to delete an element from a specific position in an array by shifting elements to fill the gap.

## Algorithm
1. Initialize an array with sample values: {22, 33, 44, 55, 66, 77}
2. Calculate the initial array size using `sizeof(arr)/sizeof(arr[0])`
3. Set the deletion position (position 2 in this example)
4. Display the array before deletion
5. Shift all elements from the deletion position to the end one position to the left
6. Reduce the array size by 1
7. Display the array after deletion

## Time Complexity
- **O(n)** where n is the number of elements in the array
- The shifting operation requires iterating through n-pos elements

## Space Complexity
- **O(1)** - No additional space is required beyond the original array

## Sample Output
```
array before deletion
22 33 44 55 66 77 
array after deletion
22 44 55 66 77 
```

## Compilation and Execution
```bash
gcc pos.c -o pos
./pos
```

## Notes
- Position indexing starts from 1 (position 2 refers to the second element, value 33)
- The program includes a condition check: `if(pos<=n)` to ensure valid position
- This method modifies the original array in-place
- Suitable for removing elements from any position while maintaining order
