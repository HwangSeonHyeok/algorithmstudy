import sys
n,x = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
arr2 = ""
           
for i in range(n):
    if(arr[i]<x):
           arr2+= "%d " %arr[i]
print(arr2.rstrip())