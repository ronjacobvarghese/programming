n,m=map(int,input().split())
arr=list(map(int,input().split()))
ans=0
s=[0]*n

arr.sort()
#print(arr)
for i in range(n):
    print(s)
    print(s[i%m],arr[i],ans)
    s[i%m]+=arr[i]
    ans+=s[i%m]
    print(ans,end=' ')
print()
