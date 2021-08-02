for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=sorted(a,reverse=True);
    
    print("YES" if len(set(b))<len(b) or a!=b  else 'NO')
        
    