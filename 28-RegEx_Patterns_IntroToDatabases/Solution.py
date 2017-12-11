#!/bin/python3
import re
import sys

Names = []
N = int(input().strip())
for a0 in range(N):
    firstName,emailID = input().strip().split(' ')
    firstName,emailID = [str(firstName),str(emailID)]
    if re.search(".+@gmail\\.com$", emailID):
        Names.append(firstName)

Names.sort()

for name in Names:
    print(name)


