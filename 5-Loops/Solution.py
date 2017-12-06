#!/bin/python3

import sys

n = int(input().strip())
for i in range(10):
	print(str(n) + " x " + str(i+1) " = " + str(n*(i+1)))