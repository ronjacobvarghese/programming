for i in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())));c=0
    if sum(a)%2!=0:
        print('YES')
    else:
        for i,j in zip(a[0:n-1],a[1:n]):
            if (i+j)%2!=0:
                c+=1
                break
        if c==1:
            print('YES')
        else:
            print('NO')
    
