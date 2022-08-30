#include <bits/stdc++.h>
using namespace std;
int b[7]; int cnt=1;

void merge(int a[], int left, int mid, int right){
    int i=left; int j=mid+1;
    int k=left;
    // traverse both subarrays and store sorted order in b
    while(i<=mid and j<=right){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    // check if a subarray was exhausted
    if(i>mid){
        while(j<=right)
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }else{
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
    }
    // copy b in a
    for(int k=left;k<=right;k++)
    a[k]=b[k];
}

void mergesort(int a[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main() {
    int n=7;
    int arr[n]={4,8,6,2,3,7,9};
    mergesort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int n:arr)cout<<n<<" ";
    cout<<"\nMerge sort's best, average and worst case time complexity is O(nlogn).";
    return 0;
}