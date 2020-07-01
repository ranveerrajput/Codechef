for _ in range(int(input())):
    s,n=map(int,input().split())
    if(s==1):
        print(1)
    else:
        ac=s//n
        rem=s%n
        if(rem>0):
            if(rem%2==0):
                ac=ac+1 
            elif(rem==1):
                ac=ac+1 
            else:
                ac=ac+2
            print(ac)
        else:
            print(ac)
   