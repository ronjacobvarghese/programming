#include<iostream>
#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void sort(int arr[], int l, int r) //parameters-array ,starting, ending
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
        sort(arr, l, m); 
        sort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
} 
int main(){
    int n,l,r,x;
    std::cin >>n >>l >>r >>x;
    int a[n];
    for(int i=0;i<n;++i){
        int x;
        std::cin>>x;
        a[i]=x;
    }
    sort(a,0,n);
    int y=n-1;
    for(int x=0;x<n-1;x++){
        int z=x+1;
        while(z<y){
            if (a[x]+a[y]>r){
                y-=1;
                continue;
            }
            if(a[x]+a[y])

        }

    
    }





}