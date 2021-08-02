       
for _ in range(int(input())):
    a,b,n,S=map(int,input().split())
    if S>a*n:
        if S-a*n>b:
            print("NO")
        else:
            print("YES")
    else:
        if S%n>b:
            print("NO")
        else:
            print("YES")


            
        
                
