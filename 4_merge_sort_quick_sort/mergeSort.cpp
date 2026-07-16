#include <iostream>
#include <vector>
using namespace std;

void mergeTwoSortedArrays(vector<int> &arr, int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++) L[i]=arr[l+i];
    for(int j=0; j<n2; j++) R[j]=arr[mid+1+j];

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]) arr[k++]=L[i++];
        else arr[k++]=R[j++];
    }
    while(i<n1) arr[k++]=L[i++];
    while(j<n2) arr[k++]=R[j++];
}

void mergeTwoSortedArraysInPlace(vector<int> &arr, int l, int mid, int r){
    int i=l;
    int j=mid+1;

    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]) i++;
        else{
            int val = arr[j];
            int index = j;
            while(index > j){
                arr[index] = arr[index-1];
                index--;
            }
            i++;
            mid++;
            j++;
        }
    }
}

void mergeSort(vector<int> &arr, int l, int r){
    // base case 
    if(l>=r) return;
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    mergeTwoSortedArrays(arr, l, mid, r);
}

int main(){
    vector<int> arr={12,11,13,6,5,7};
    int n=arr.size();
    
    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}