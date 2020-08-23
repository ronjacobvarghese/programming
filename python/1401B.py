for _ in range(int(input())):
    a=list(map(int,input().split()))
    b=list(map(int,input().split()));s=0
    if a[2]>=b[1]:
        s+=b[1]*2
        a[2]-=b[1]
    else:
        s+=a[2]*2
        b[1]-=a[2]
        a[2]=0
    b[2]-=a[2]
    if b[2]>a[0]:
        s-=2*(b[2]-a[0])
    print(s)
    
    
    
        
        
    
        