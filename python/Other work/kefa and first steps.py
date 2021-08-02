n=int(input())
a=list(map(int,input().split()));i=0;j=0;s=0
while i<n-1:
    j+=1
    if a[i]>a[i+1]:
        if s<j:
            s=j
            j=0
    i+=1
if s<j+1:
    s=j+1
print(s)
    
    
