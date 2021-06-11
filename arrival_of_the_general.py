#https://codeforces.com/contest/144/problem/A
num=int(input())
l=[int(i) for i in input().split(" ") ]
def sol(li,n):
 a=li[0]
 c=li[n-1]
 b=0;d=0
 for i in range(n):
  if li[i]> a:
   a=li[i]
   b=i
  if li[i]<= c:
   c=li[i]
   d=i
 if(a==li[0] and c==li[n-1]):
     return 0
 n-=1
 count=b+n-d
 if b>d:
     count-=1
 return count
 
print(sol(l,num))
