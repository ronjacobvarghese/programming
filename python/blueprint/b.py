for _ in range(int(input())):
    n,k=map(int,input().split())
    a=input();b=[];
    for i in range(n):
        if a[i]=='W':
            b.append(i)
    if b[0]==0:
        s=1
    else:
        s=0
    print(b)
    for i in range(1,len(b)):
        if b[i]-b[i-1]==2:
            if k==0:
                continue
            print(b[i],b[i-1])
            k-=1;s+=4
        elif b[i]-b[i-1]==1:
            print(b[i],b[i-1])
            s+=2
        else:
            print(b[i])
            s+=1
    print(s+k*2)
        
        