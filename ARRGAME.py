for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    c=0
    pre=0 
    m=[]
    for i in range(1,len(arr)):
        if(arr[i]==0):
            c=c+1
        else:
            m.append(c)
            if(c>pre):
                pre=c
            elif(c==pre):
                pre=-1
            c=0
    m=sorted(m,reverse=True)
    
    for i in range(1,len(m)):
        if(pre%2!=0):
            if(m[i]>=(pre+1)//2):
                pre=-1
                break
            else:
                break
        else:
            if(m[i]>=(pre)//2):
                pre=-1
                break
            else:
                break
            
            
            
    if(pre==-1):
        print("No")
    elif(pre%2==0):
        print("No")
    else:
        print("Yes")