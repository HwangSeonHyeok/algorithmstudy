import sys
t=int(sys.stdin.readline())
for i in range(t):
    a,b= map(int,sys.stdin.readline().split())
    print("Case #%s: %s" %(i+1,a+b))