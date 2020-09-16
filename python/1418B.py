for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l=list(map(int,input().split()))
    c=[]
    for i in range(n):
        if l[i]-1:
            c.append(a[i])
    c.sort();j=0
    for i in range(n):
        if l[i]-1:
            print(c[j],end=" ")
            j+=1
        else:
            print(a[i],end=" ")
    print()
    print(*l)