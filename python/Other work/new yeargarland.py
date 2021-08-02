for i in range(int(input())):
    a=list(map(int,input().split()))
    if sum(a)-max(a)<max(a)-1:
        print('NO')
    else:
        print('YES')
    
