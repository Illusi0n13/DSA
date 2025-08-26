# Array Insertion at Beginning Program

## File: first.c

## Description
This C program demonstrates how to insert an element at the beginning of an array. It shows the array before and after insertion, demonstrating the shifting process required to make space for the new element.

## How It Works

### Algorithm
1. **Initialize** an array with some initial values
2. **Print** the array before insertion
3. **Shift** all elements one position to the right (from the end to the beginning)
4. **Insert** the new element at the first position (index 0)
5. **Print** the array after insertion

### Code Explanation
- `n=6` - Current number of elements in the array
- `arr[7]={22, 33, 44, 55, 66, 77}` - Array with 6 elements, allocated space for 7
- `first=88` - The element to be inserted at the beginning

### Shifting Logic
```c
for(int i=n-1; i>=0; i-- ){
    arr[i+1]=arr[i];
}
```
This loop shifts elements from the end to the beginning to make space at index 0.

## Example Output
```
array before insertion
22 33 44 55 66 77 
array after insertion
88 22 33 44 55 66 77 
```

## Compilation and Execution
```bash
gcc first.c -o first.exe
first.exe
```

## Key Points
- The array must have enough allocated space for the new element
- Elements are shifted from the end to avoid overwriting data
- Time complexity: O(n) where n is the number of elements
- Space complexity: O(1) additional space

## Related Files
- `end.c` - Insertion at the end of an array
- `any place.c` - Insertion at any position in the array
