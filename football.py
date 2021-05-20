#https://codeforces.com/problemset/problem/96/A

s=input()

n=len(s)
def sol(s,n):
 if(n<7):
  return "NO"
 else: 
  val=[]
  sums=0
  for i in range(n-6):
   if(s[i]==s[i+6]):
    val=s[i:i+7]
    val=list(set(val))
    if(len(val)==1):
     return "YES"
 return "NO"    

print(sol(s,n))
    

 

