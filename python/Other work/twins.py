n=int(input())
a=list(map(int,input().split()))
b=0;c=sum(a);i=0
while b<=c:
    b+=max(a)
    c-=max(a)
    a.remove(max(a))
    i+=1
print(i)
