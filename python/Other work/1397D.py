for _ in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())), reverse=True);s=0;d=0
    for i in range(n):
        if i%2==0:
            s+=a[i]
        else:
            d+=a[i]
    if s>d:
        print("T")
    else:
        print("HL")