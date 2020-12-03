for _ in range(int(input())):
    n=int(input())
    a=sorted(map(int,input().split()));s=a[0];i=0;
    if sum(a)==0:
        print('No')
    else:
        print('Yes')
        for j in a:
            if j<0:
                i+=1
            else:
                break
        if -(sum(a[:i]))<sum(a[i:]):
            print(*(list(reversed(a))))
        else:
            print(*a)