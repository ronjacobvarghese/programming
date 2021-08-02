for i in range(int(input())):
    n=int(input())
    m=sorted(list(map(int,input().split())))
    p=[];s=[];d=0
    for i in range(int(input())):
        a,b=map(int,input().split())
        p.append(a)
        s.append(b)
    if m[-1]>max(p):
        print(-1)
    else:
        j=0
        while True:
            h=max(s);f=[];
            if s.count(h)>1:
                for i in range(len(s)):
                    if s[i]==h:
                        f.append(p[i]) 
            if f==[]:
                a=p[s.index(max(s))]
            else:
                a=max(f)
            while h!=0:
                if a>=m[j]:
                    h-=1
                    j+=1
                else:
                    break
                if j==n:
                    break
            d+=1
            if j==n:
                break
            if a<m[j]:
                s.remove(max(s))
                p.remove(a)
        print(d)
        
                
                
                
            
            
        
        
        
            
            
        
