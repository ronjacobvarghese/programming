for i in range(int(input())):
    r=list(map(int,input().split()))
    p=0
    while i!=-20:
        if r[2]>=2 and r[1]>=1:
            r[1]=r[1]-1
            r[2]=r[2]-2
            p=p+3
        elif r[1]>=2 and r[0]>=1:
            r[0]=r[0]-1
            r[1]=r[1]-2
            p=p+3
        else:
            break
    print(p)

