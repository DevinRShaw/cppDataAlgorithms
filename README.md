# cppDataAlgorithms
This repo contains my personal solutions to various data structure and algorithm problems implemented in C++, with explanations for each solution. 

## reverseBinarySearch

### Problem Statement

Given a sorted array of integers, write a function to find the index of a target value using reverse binary search. In a reverse binary search, the pivot element is chosen as the last element in the array, rather than the first.

### Solution

My solution to this problem uses a modified version of the binary search algorithm, where the pivot element is chosen as the last element in the array, rather than the first. The algorithm repeatedly divides the search interval in half until the target value is found, or it is clear that the target is not in the array.

## stringBinarySearch

### Problem Statement
Given a sorted list of strings and a target string, find the index of the target string in the list. If the target string is not found in the list, return -1.

### Solution
To solve this problem, we can use the binary search algorithm. The steps involved are as follows:
1. Read the list of strings from the input and store them in a vector.
2. Sort the list of strings in ascending order.
3. Perform binary search on the list to find the target string.
4. If the target string is found in the list, return its index. If it's not found, return -1.
