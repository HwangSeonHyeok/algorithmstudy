import sys
t=int(sys.stdin.readline())#여기랑 같은의미
for i in range(t):
    a,b= map(int,sys.stdin.readline().split())
    print("Case #%d: %d + %d = %d" %(i+1,a,b,a+b))
