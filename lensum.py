#https://codeforces.com/problemset/problem/489/C

n,m=map(int,input().split())
 
def soln(n,m):
 min_sum=0
 for i in range(1,10):
  for j in range(1,10):
   sums=i+j # as first sum in ascending order is always min_sum 
   if(sums==m):
    min_sum=int(str(i)+str(j))
    maxs=int(str(min_sum)[::-1])
    return min_sum,maxs
 
 return -1 , -1
 
n,m=soln(n,m)
print(n,m)
