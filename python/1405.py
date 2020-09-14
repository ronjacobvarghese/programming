for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(input())
    i=0;l=1;x=0;y=0
    j=k
    if k==n:
        for i in range(0,k):
            if a[i]=='1':
                x+=1
            if a[i]=='0':
                y+=1
            if a[i]=="?":
                if x>y:
                    y+=1
                else:
                    x+=1
        print("YES" if x==y else "NO")
    elif set(a)=={"?"}:
        print("YES")
    else:
        while j!=n:
            if a[i]!=a[j] and (a[i]!='?' and a[j]!='?'):
                l=0
                break
            if a[i]=="?":
                t=a[j]
                a[i]=t
            if a[j]=="?":
                t=a[i]
                a[j]=t
            i+=1
            j+=1
        x=0;y=0;j=0
        while a[j]=="?":
            j+=1
        for i in range(j,j+k):
            if a[i]=='1':
                x+=1
            if a[i]=='0':
                y+=1
            if a[i]=="?":
                if x>y:
                    y+=1
                else:
                    x+=1
        print("YES" if x==y and l else "NO")
    
        
    
    