# Array Insertion at Given Position Program

## File: pos.c

## Description
This C program demonstrates how to insert an element at a specified position in an array. It shows the array before and after insertion, demonstrating the shifting process required to make space for the new element.

## How It Works

### Algorithm
1. **Initialize** an array with some initial values
2. **Print** the array before insertion
3. **Shift** elements to the right to make space for the new element
4. **Insert** the new element at the specified position
5. **Print** the array after insertion

### Code Explanation
- `n=5` - Current number of elements in the array
- `arr[6]={10, 20, 30, 40, 50}` - Array with 5 elements, allocated space for 6
- `ele=70` - The element to be inserted at the specified position
- `pos=2` - The position where the new element will be inserted

### Shifting Logic
```c
for(int i=n; i>=pos; i--){
    arr[i]=arr[i-1];
}
```
This loop shifts elements from the specified position to the end to avoid overwriting data.

## Example Output
```
array before insertion
10 20 30 40 50 
array after insertion
10 70 20 30 40 50 
```

## Compilation and Execution
```bash
gcc pos.c -o pos.exe
pos.exe
```

## Key Points
- The array must have enough allocated space for the new element
- Elements are shifted from the specified position to avoid overwriting data
- Time complexity: O(n) where n is the number of elements
- Space complexity: O(1) additional space

## Related Files
- `first.c` - Insertion at the beginning of an array
- `end.c` - Insertion at the end of an array
- `any place.c` - Insertion at any position in the array
