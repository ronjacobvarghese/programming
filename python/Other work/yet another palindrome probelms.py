for i in range(int(input())):
    n=int(input());l=0
    a=list(map(int,input().split()));c=1
    for i in range(n-2):
        if a[i]in a[i+2:]:
            l=1
            break
    print("YES" if l==1 else "NO")
     
                    
            
            
            
