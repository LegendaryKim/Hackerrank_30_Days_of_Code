#!/bin/python3

import sys

n = int(input().strip())

result = 0
maximum = 0

while n > 0:
    if n%2 == 1:
        result += 1
        if maximum < result:
            maximum = result
    else:
        result =0
        
    n //= 2

print(maximum)