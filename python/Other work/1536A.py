for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    for i in a:
        if i<0:
            l=0
            break
        else:
            l=1
            
    if l:
        print("Yes")
        print(max(a)+1)
        print(i for i in range(0,max(a)+1))
    else:
        print("No")