for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    mul=1
    f=0
    for i in range(len(a)):
        if(a[i]%2==0):
            print("NO")
            f=0
            break
        else:
            f=1
            mul=mul*a[i]
    if(f==1):
        if(mul%2!=0):
            print("YES")
        else:
            print("NO")