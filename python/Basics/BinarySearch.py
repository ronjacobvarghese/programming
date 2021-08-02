def binarySearch(arr,start,end,key):
    while(start<=end):
        mid=start+(end-start)//2
        if key==mid:
            return "found"
        if mid<key:
            start=mid+1
        else:
            end=mid-1
    return "not found"
    

a=list(map(int,input().split()))
k=int(input("Enter the value to be searched"))
binarySearch(a,0,n-1,k)