a=list(input())
a[0],a[-1]=a[-1],a[0]
c=''
print(*a,sep='')
