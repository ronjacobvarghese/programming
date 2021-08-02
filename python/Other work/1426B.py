for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[];b=[];l=0
    for i in range(2*n):
        if i%2==0:
            a.append(list(map(int,input().split())))
        else:
            b.append(list(map(int,input().split())))
    if m%2!=0:
        print("NO")
    else:
        for i in range(n):
            if a[i][1]==b[i][0]:
                l=1
        if l:
            print("YES")
        else:
            print("NO")
        
        