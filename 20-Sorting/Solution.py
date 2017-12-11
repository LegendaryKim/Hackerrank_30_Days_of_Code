#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your code here

# Bubble sort
totalNumberOfSwamps = 0
for i in range(n):
    # Track number of elements swapped during a single array traversal
    numberOfSwaps = 0

    for j in range(n - 1):
        # Swap adjaction elements if they are in decreasing order
        if a[j] > a[j + 1]:
            tmp = a[j+1]
            a[j+1] = a[j]
            a[j] = tmp
            numberOfSwaps += 1

    totalNumberOfSwamps += numberOfSwaps

    if numberOfSwaps == 0:
        break

print("Array is sorted in " + str(totalNumberOfSwamps) + " swaps.")
print("First Element: " + str(a[0]))
print("Last Element: " + str(a[-1]))