        
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if a==[1,1]:
        print(n)
        print(1,1)
    elif (n//2)%2==0 or n==2:
        if a.count(0)>=n//2:
            print(n//2)
            print('0 '*(n//2))
        else:
            print(n//2)
            print('1 '*(n//2))
    else:
        if a.count(0)>=n//2:
            print(n//2)
            print('0 '*((n//2)))
        else:
            print(n//2+1)
            print('1 '*((n//2)-1),'0')
        
        
        
            
        