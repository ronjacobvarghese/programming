for i in range(int(input())):
    a=input();s=0;b=[]
    if set(a)=={"L"}:
        print(a.count("L")+1)
    else:
        for i in a:
            if i=="R":
                b.append(s)
                s=0
            else:
                s+=1
        b.append(s)
        print(max(b)+1)
            
        
