for _ in range(int(input())):
    n=int(input())
    a=[input() for i in range(n)];s=0;x=set(a[0]);l=1
    for i in x:
        s=0
        for j in a:
            s+=j.count(i)
        if s%n!=0:
            l=0
            break
    if l:
        print("YES")
    else:
        print("NO")