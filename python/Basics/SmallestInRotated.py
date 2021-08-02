def binarySearch(a,start,end):
    while start<=end:
        mid=start+(end-start)//2
        print("mid",mid,"end",end)
        if a[mid]>=a[end]:
            start=mid+1
        else:
            ans=mid
            end=mid-1
    return ans
        
            

a=list(map(int,input().split()))
print(a[binarySearch(a,0,len(a)-1)])