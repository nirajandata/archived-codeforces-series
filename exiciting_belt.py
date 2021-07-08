#https://codeforces.com/contest/1543/problem/A
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if (a==b):
        print(0,0)
    else:
        o=abs(a-b)
        p=min(a%o,o-a%o)
        print(o,p)
