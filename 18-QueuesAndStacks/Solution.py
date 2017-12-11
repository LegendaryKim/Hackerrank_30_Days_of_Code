import sys

class Solution:
    def __init__(self):
        self.stack = [];
        self.queue = [];

    def pushCharacter(self, char):
        self.stack.append(char)

    def enqueueCharacter(self,char):
        self.queue.append(char)


    def popCharacter(self):
        return self.stack.pop()

    def dequeueCharacter(self):
        character = self.queue[0]
        self.queue = self.queue[1:]
        return character

# read the string s
s = input()
# create the solution class object
obj = Solution()

l = len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])

isPalindrome = True
'''
pop the top character from stack
dequeue the fist charcter from queue
compare both the characters
'''
for i in range(l//2):
    if obj.popChracter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
# finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, " +s+ ", is a palindrome.")
else:
    print("The word, " +s+ ", is not a palindrome.")