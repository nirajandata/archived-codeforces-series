#https://codeforces.com/contest/1541/problem/A
n=int(input())
answers=[]
def perms(nm):
    perm=[]
    for i in range(1,nm+1):
        perm.append(i)
    return perm
def sw(j):
    arr=perms(j)
    arl=len(arr)
    if(arl%2==0):
        for i in range(0,arl,2):
            arr[i],arr[i+1]=arr[i+1],arr[i]
    else:
        arr=arr[3:]
        arl-=3
        for i in range(0,arl,2):
            arr[i],arr[i+1]=arr[i+1],arr[i]
        arr=[3,1,2]+arr[:]
 
 
    return arr
def answ(j):  
    arr=perms(j)
    arr=arr[-1:]+arr[:-1]
    return arr
for i in range(n):
    j=int(input())
    if(j>3):
        answers.append(sw(j))
    else:
        answers.append(answ(j))
 
for i in range(n):
    j=answers[i]
    for m in range(len(j)):
        print(j[m],end=" ")
    print()
