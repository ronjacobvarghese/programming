for _ in range(int(input())):
    a,b=map(int,input().split())
    c=list(list(input().replace('',' ').split()) for i in range(a));s=0
    for i in range(a-1):
        if c[i][b-1]!="D":
            s+=1
    for i in range(b-1):
        if c[a-1][i]!="R":
                s+=1
    print(s)

