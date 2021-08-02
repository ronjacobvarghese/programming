n=int(input())
a=list(map(int,input().split()))
x=0;i=1;r=0;d=a[0]
if a[x]<0:
    f=0
else:
    f=1
while i<n:
    print(5)
    s=0
    if f:
        if a[i]>0:
            d+=a[i]
            i+=1
            j=i
            while j<n:
                print(1)
                if a[j]>0:
                    break
                s+=a[j]
                j+=1
                if s==-d:
                    r+=1
            continue
        i-=1
        while i<n:
            print(2)
            if a[i]>0:
                break
            s+=a[i]
            if a[x]==-s:
                r+=1
            i+=1
        x=i-1;f-=1;d=a[x]
    else:
        if a[i]<0:
            d+=a[i]
            i+=1
            j=i
            while j<n:
                print(3)
                if a[j]<0:
                    break
                s+=a[j]
                j+=1
                if s==-d:
                    r+=1
            continue
        print("This i before -1:",i)
        i-=1
        print("This i after:")
        while i<n:
            print(4)
            if a[i]<0:
                break
            s+=a[i]
            if a[x]==-s:
                r+=1
            i+=1
        x=i-1;f+=1;d=a[x]
print(r)
    
    