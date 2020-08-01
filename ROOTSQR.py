import math
m,n=map(int,input().split())
for _ in range(m):
    num=int(input())
    if(num<0):
        print("no")
    else:
        a=int((num)**0.5)
    #print(num-(a*a))
    #print(0.01*n*num)
        if((num-(a*a))<=(0.01*n*num)):
            print("yes")
        else:
            print("no")