#https://codeforces.com/contest/1328/problem/A
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a%b==0):
        print(0)
        continue
    rem=a//b+1
    val=b*rem-a
    print(val)
