for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    s=a[0]*a[1]*a[2]*a[3]*a[-1]
    m= a[0]*a[1]*a[-3]*a[-2]*a[-1]
    l=a[-5]*a[-4]*a[-3]*a[-2]*a[-1]
    if s>m and s>l:
        print(s)
    elif m>l:
        print(m)
    else:
        print(l)
        
    