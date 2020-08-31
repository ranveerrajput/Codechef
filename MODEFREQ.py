for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    aa=list(set(a))
    v=[]
    for i in aa:
        c=a.count(i)
        v.append(c)
    v=sorted(v)
    ans=v[0]
    c=1
    pre=0
    #print(v)
    v.append(-1)
    for i in range(1,len(v)):
        if v[i]==v[i-1]:
            c=c+1
        else:
            if c>pre:
                pre=c
                ans=v[i-1]
            elif c==pre:
                pre=c 
                if v[i-1]<ans:
                    ans=v[i-1]
            c=1
                    
    print(ans)
            
        
    
           
            
        