#!/bin/python3

import sys

try:
    S = input().strip()
    print(int(S))
except ValueError:
    print("Bad String") 

