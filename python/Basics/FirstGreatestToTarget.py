def binarySearch(arr,start,end,key):
    ans=-1
    while start<=end:
        mid=start+(end-start)//2
        print("mid=",mid,arr[mid],start,end)
        if a[mid]<key:
            start=mid+1
        else:
            ans=mid
            end=mid-1
    return ans
            

a=list(map(int,input().split()))
x=int(input())
print(a[binarySearch(a,0,len(a)-1,x)])