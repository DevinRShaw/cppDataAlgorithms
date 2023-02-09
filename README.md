# cppDataAlgorithms
This repo contains my personal solutions to various data structure and algorithm problems implemented in C++, with explanations for each solution. 

# Reverse Binary Search

## Problem Statement

Given a sorted array of integers, write a function to find the index of a target value using reverse binary search. In a reverse binary search, the pivot element is chosen as the last element in the array, rather than the first.

## Solution

My solution to this problem uses a modified version of the binary search algorithm, where the pivot element is chosen as the last element in the array, rather than the first. The algorithm repeatedly divides the search interval in half until the target value is found, or it is clear that the target is not in the array.
