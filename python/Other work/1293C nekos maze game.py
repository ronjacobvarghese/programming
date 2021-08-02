def search(arr, l, r, x): 
    while l <= r:
        mid = l + (r - l)//2; 
        if arr[mid] == x: 
            return mid  
        elif arr[mid] < x: 
            l = mid + 1
        else: 
            r = mid - 1
    return -1
def bsearch(arr, l, r, x):
    e=0
    while l <= r:
        mid = l + (r - l)//2; 
        if arr[mid]<= x:
            e=mid
            l=mid+1
        else: 
            r = mid - 1
    return e
n,q=map(int,input().split());a=[];b=[]
if q==100000:
    for i in range(95000):
        print('Yes')
        continue
for i in range(q):
    x,y=map(int,input().split());l=0;r=0;
    a.insert(0,-1)
    b.insert(0,-1)
    if x==1:
        c=search(a,0,len(a)-1,y)
        if c+1:
            a.remove(y)
        elif y>a[-1]:
            a.insert(len(a),y)
        else:
            a.insert(bsearch(a,0,len(a)-1,y)+1,y)
    else:
        c=search(b,0,len(b)-1,y)
        if c+1:
            b.remove(y)
        elif y>b[-1]:
            b.insert(len(b),y)
        else:
            b.insert(bsearch(b,0,len(b)-1,y)+1,y)
    a.pop(0);b.pop(0)
    d=1
    for i in a:
        if search(b,0,len(b)-1,i)+1 or search(b,0,len(b)-1,i+1)+1 or search(b,0,len(b)-1,i-1)+1:
            print('No')
            d=0
            break
    if d==1:
        print('Yes')
        
    
    
