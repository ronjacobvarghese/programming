for i in range(int(input())):
    a=input()
    b=input()
    c=input();d=0;r=0
    for i in range(len(a)):
        if (a[i]!=b[i] and c[i]!=b[i]) and a[i]!=c[i]:
            d+=1
            break
        elif a[i]!=b[i] and c[i]==b[i]:
            r+=1
        elif a[i]==c[i] and b[i]!=c[i]: 
            r+=1
        elif a[i]==c[i] and b[i]==c[i]:
            r+=1
    print("YES" if d==0 and r==len(a) else "NO")
