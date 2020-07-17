
for i in range(int(input())):
    n=int(input())
    s=input()
    r=input()
    c1=s.count('1')
    c2=r.count('1')
    if(c1==c2):
        print("YES")
    else:
        print("NO")
    