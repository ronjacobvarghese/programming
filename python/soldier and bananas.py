k,n,w=map(int,input().split())
print(k*(w*(w+1)//2)-n if (k*(w*(w+1)//2))>n else 0)
