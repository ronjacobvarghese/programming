for t in range(int(input())):
    l,r,m = map(int,input().split())
    dif=r-l
    for i in (range(r,l-1,-1)):
        mm1=m%i
        mm2=i-mm1
        if mm1<=dif and m>=i:
            print(i,r,r-mm1)
            break
        elif mm2<=dif:
            print(i,l,l+mm2)
            break
