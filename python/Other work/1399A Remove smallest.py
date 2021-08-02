for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    l=0
    while(len(a)!=1):
        if(abs(a[-1]-a[-2])>1):
            l=1
            break
        a.pop()
    if(l):
        print("NO")
    else:
        print("YES")
        
        
        
            
