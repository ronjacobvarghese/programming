for i in range(int(input())):
    n=int(input());s=0;i=1
    while i<=n//2:
        s+=2**i+2**(n-i)
        print(2**i,2**(n-i))
        i+=1
    j=0;d=0
    while j<n//2:
        d+=2**(n//2-j)+2**(n//2+j)
        print(2**(n//2-j),2**(n//2+j))
        j+=1
    print(abs(s-d))
        
