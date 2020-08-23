for i in range(int(input())):
    l,r,m=map(int,input().split())
    n=1
    while (m+r-l)//n>r or (m+r-l)//n<l:
        n+=1
    print((m+r-l)//n,l,n*((m+r-l)//n)+l-m)
