x=input().lower()
a=["a",'e','i','o','u']
b=[x[i+1] for i in range(len(x)-1) if x[i] not in a and x[i]!='n' ]
print('Yes' if set(b).difference(a)==set()and(( len(x)>1 or x[0]=="n") or x in a) and (x[len(x)-1] in a or x[len(x)-1]=='n') else "No")

