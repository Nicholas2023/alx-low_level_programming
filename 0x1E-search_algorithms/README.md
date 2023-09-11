# Search Algorithms :wink:

This repository contains C programs that demonstrate various search algorithms and their time and space complexities.

## Task 0: Linear Search
In this task, we implement the Linear Search algorithm to search for a value in an array of integers. The program returns the first index where the value is located. If the value is not present in the array or if the array is NULL, the program returns -1.

### Prototype:
```c
int linear_search(int *array, size_t size, int value);
```

## Task 1: Binary Search
Task 1 focuses on the Binary Search algorithm, which is used to search for a value in a sorted array of integers. The program returns the index where the value is located. It assumes that the array is sorted in ascending order and that the value won't appear more than once in the array. If the value is not present in the array or if the array is NULL, the program returns -1.

### Prototype:
```c
int binary_search(int *array, size_t size, int value);
```

## Task 2: Big O #0
This task discusses the time complexity (worst case) of a linear search in an array of size `n`. The time complexity is O(n) since, in the worst case, we may have to iterate through all `n` elements of the array to find the desired value.

## Task 3: Big O #1
Task 3 addresses the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`. The space complexity is O(1) because the algorithm uses a constant amount of additional memory for variables, regardless of the size of the input array.

## Task 4: Big O #2
In Task 4, we discuss the time complexity (worst case) of a binary search in an array of size `n`. The time complexity is O(log(n)) because, with each comparison, the search space is effectively halved, resulting in a logarithmic growth in the number of comparisons required.

## Task 5: Big O #3
Task 5 focuses on the space complexity (worst case) of a binary search in an array of size `n`. The space complexity is O(1) because the algorithm uses a constant amount of additional memory for variables, irrespective of the size of the input array.

## Task 6: Big O #4
In Task 6, we analyze the space complexity of the `allocate_map` function/algorithm. The space complexity is O(n * m) because it allocates memory for a 2D array of size `n` x `m`. The space complexity is proportional to the size of the map being created.
