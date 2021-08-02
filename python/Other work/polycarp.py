for i in range(int(input())):
    c=9
    i=1
    n=int(input())
    if n<10:
        print(n)
    else:
        a=11
        d=10
        s=1
        while n>s:
            for i in range(1,10):
                s=i*a
                if s>n:
                    break
                c+=1
            d=d*10
            a+=d
        print(c)
            
            
            
            
        
        
        
    
    
        
        
        
