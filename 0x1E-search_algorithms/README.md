# Search Algorithms in C

## Table of Contents

1. [What is a Search Algorithm?](#what-is-a-search-algorithm)
2. [What is Linear Search?](#what-is-linear-search)
3. [What is Binary Search?](#what-is-binary-search)
4. [Which Search Algorithm Should I Use?](#which-search-algorithm-should-i-use)


## What is a Search Algorithm?

At its core, a search algorithm is a method used to locate a specific item contained within a dataset. The efficiency of a search algorithm is usually measured in terms of its time complexity - the number of operations it makes relative to the size of the dataset.

## What is Linear Search?

Linear search, also known as sequential search, is the most basic search algorithm. It works by sequentially checking each element in a dataset until the desired element is found or until all elements have been checked.

- **Time Complexity**: O(n), where n is the number of elements in the dataset.
- **Space Complexity**: O(1), since no additional space is required that grows with the input.

## What is Binary Search?

Binary search is a much faster algorithm than linear search but requires that the dataset be sorted. It works by repeatedly dividing the portion of the list that could contain the item until you've narrowed down the possible locations to just one.

- **Time Complexity**: O(log n), making it significantly faster for large datasets compared to linear search.
- **Space Complexity**: O(1) when implemented iteratively and O(log n) when implemented recursively.

## Which Search Algorithm Should I Use?

The best search algorithm largely depends on the circumstances:

1. **Is the dataset sorted?**
   - If yes, binary search will generally be faster.
   - If no, linear search can be used, or the dataset can be sorted first and then binary search can be applied (but keep in mind that sorting can be expensive).

2. **Dataset Size**:
   - For very small datasets, the overhead of the binary search might not be justified, and a simple linear search can be just as fast or even faster.
   - For large datasets, especially if multiple searches are to be performed, binary search (or even more advanced structures like search trees or hash tables) would be advisable.

3. **Frequency of Search Operations**:
   - If you're going to be searching the dataset frequently, it might be worth the overhead to keep the dataset sorted or even look into more advanced data structures.

4. **Insertion Frequency**:
   - If new items are being added frequently, keeping a dataset sorted can be costly. In such cases, other data structures like balanced search trees or hash tables might be more appropriate.
---