for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s=a[0]%2;c=0
    for i in a:
        if s!=i%2:
            c=1
            break
    if c==1:
        print('NO')
    else:
        print('YES')
