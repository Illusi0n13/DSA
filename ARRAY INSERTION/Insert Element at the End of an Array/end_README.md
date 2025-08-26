# Array Insertion at End Program

## File: end.c

## Description
This C program demonstrates how to insert an element at the end of an array. It shows the array before and after insertion, demonstrating the simplest form of array insertion.

## How It Works

### Algorithm
1. **Initialize** an array with some initial values
2. **Print** the array before insertion
3. **Insert** the new element at the end position (index n)
4. **Print** the array after insertion

### Code Explanation
- `n=5` - Current number of elements in the array
- `arr[5]={22, 44, 55, 66, 77}` - Array with 5 elements
- `last=88` - The element to be inserted at the end

**Note:** There's a potential issue with this code - the array `arr[5]` only has space for 5 elements, but the program tries to insert a 6th element at `arr[n]` (which would be `arr[5]`). This could cause undefined behavior or memory corruption.

### Insertion Logic
```c
arr[n]=last;
```
This line directly assigns the new element to the position after the last element.

## Example Output
```
array before insertion
22 44 55 66 77 
array after insertion
22 44 55 66 77 88 
```

## Compilation and Execution
```bash
gcc end.c -o end.exe
end.exe
```

## Key Points
- **Important:** The array should have enough allocated space for the new element
- Insertion at the end is the simplest array insertion operation
- Time complexity: O(1) for the insertion itself
- Space complexity: O(1) additional space

## Potential Issue
The array `arr[5]` has only 5 elements (indices 0-4), but the code tries to access `arr[5]` which is out of bounds. This should be fixed by declaring `arr[6]` to have enough space.

## Related Files
- `first.c` - Insertion at the beginning of an array
- `pos.c` - Insertion at a specific position in the array
- `any place.c` - Insertion at any position in the array
