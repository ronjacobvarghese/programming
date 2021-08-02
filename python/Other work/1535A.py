for _ in range(int(input())):
    a=list(map(int,input().split()))
    a[a.index(max(a))]=0
    if a.index(max(a))>1 and a.index(0)<2 or a.index(0)>1 and a.index(max(a))<2:
        print("YES")
    else:
        print("NO")