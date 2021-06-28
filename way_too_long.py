https://codeforces.com/contest/71/problem/A
a=int(input())
answers=[]
for i in range(a):
    st=input()
    st_l=len(st[1:-1])
    val=st
    if(st_l+2>10):
     val=st[0]+str(st_l)+st[-1]
    answers.append(val)
for i in range(a):
    print(answers[i])
