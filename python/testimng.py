for i in range(int(input())):
    a,b,c=map(int,input().split())
    if c<=a:
        s=-1
    else:
        s=1
    if c/b>=a:
        d=-1
    else:
        d=b
    print(s,d)
        
        
        
        
