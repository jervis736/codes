import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
for i in range(n//2):
    print(' '*i+'\\'+' '*(n-2*i-2)+'/')
if n%2:print(' '*(n//2)+'X')
for i in range(n//2-1,-1,-1):
    print(' '*i+'/'+' '*(-2+n-2*i)+'\\')
