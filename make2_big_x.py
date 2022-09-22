import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())

for i in range(n):
    out = n*[' ']
    if i == (n-1)/2:
        out[i]='X'
    else:
        #print(i)
        out[i]='\\'
        out[n-i-1]='/'
    while out[-1]==' ':
        out.pop(-1)
    print(''.join(out))

#for i in range(n):
#    out = n*[' ']
#    if i == (n-1)/2:
#        out[i]='X'
#    else:
#        out[i]='\\'
#        out[n-i-1]='/'
#    while out[-1]==' ': out.pop(-1)
#    print(''.join(out))
