import math

T = int(input())

def isPrime(n):
    if n == 2:
        return True
    elif n == 1 or n % 2 == 0:
        return False

    for i in range (2, int(math.sqrt(n)+1)):
        if n % i is 0:
            return False

    return True


for _ in range(T):
    n = int(input())

    if n >= 2 and isPrime(n):
        print("Prime")
    else:
        print("Not prime")