for i in range(int(input())):
    k=int(input())
    a=list(input().split());s=0
    if k<len(a):
        for j in a[k]:
            s+=ord(j)
        print(s)
    else:
        print(-1)
        
