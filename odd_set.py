#https://codeforces.com/contest/1542/problem/A
t=int(input())
for i in range(t):
    n=int(input())
    r=[int(x) for x in input().split()]
    on=[sum(r[j:j+2]) for j in range(0,len(r),2)]
    count=0
    for j in range(len(r)):
        if(r[j]%2!=0):
            count+=1
    if(count==n):
        print("Yes")
    else:
        print("No")
