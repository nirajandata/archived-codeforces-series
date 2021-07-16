#https://codeforces.com/problemset/problem/1537/A
t=int(input())
def sol(n,arr):
    add=sum(arr)
    arr=add/n
    if(arr==1):
        return 0
    elif(arr>1):
        return add-n
    return 1
for i in range(t):
    n=int(input())
    arr=[int(x) for x in input().split()]
    print(sol(n,arr))
