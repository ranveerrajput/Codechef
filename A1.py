from itertools import combinations
for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[]
    for i in range(n):
        a.append(int(input()))
    #print(a)
    f=0
    for ii in range(1,n+1):
        g=list(combinations(a,ii))
        for k in g:
            if sum(k)==m:
                f=1
                break
    if(f==1):
        print("Yes")
    else:
        print("No")
    #print("_____________________________")