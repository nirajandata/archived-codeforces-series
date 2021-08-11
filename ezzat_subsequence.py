#https://codeforces.com/contest/1557/problem/A
t=int(input())
def sol(n,a):
    topper=max(a)
    a.remove(topper)
    average=sum(a)/len(a)
    return average+topper

for i in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    print("{0:.10f}".format(sol(n,a)))
