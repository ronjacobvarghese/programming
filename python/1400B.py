def solve(a,b,c):
    print(a,b,c)
    s=0
    while b[0]!=0 and b[1]!=0:
        if a%c[0]<a%c[1]:
            a-=c[0]
            if a<0:
                break
            s+=1
            b[0]-=1
        else:
            a-=c[1]
            if a<0:
                break
            s+=1
            b[1]-=1
    print(a,b,c)
    return s
def solve1(a,b,c):
    s=0
    if b>=a//c:
        s+=a//c
        b-=a//c
    else:
        s+=b
        b=0
    return s
    
for _ in range(int(input())):
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=list(map(int,input().split()))
    s=solve(a[0],b,c)
    s+=solve(a[1],b,c)
    if a[0]>0 and b!=[0,0]:
        if b[1]:
            s+=solve1(a[0],b[1],c[1])
        else:
            s+=solve1(a[0],b[0],c[0])
    if a[1]>0 and b!=[0,0]:
        if b[1]:
            s+=solve1(a[1],b[1],c[1])
        else:
            s+=solve1(a[1],b[0],c[0])
    print(s)
    
    
                
        
        
        
    