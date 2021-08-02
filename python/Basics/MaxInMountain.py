#you receive an aarray that is increasing then decreasing find the maximum in that array

def binarySearch(arr,start,end):
    ans=0
    while start<=end:
        mid=start+(end-start)//2
        if arr[mid]>=arr[ans]:
            start=mid+1
            ans=mid
        else:
            end=mid-1
    return ans

a=list(map(int,input().split()))
print(a[binarySearch(a,0,len(a)-1)])