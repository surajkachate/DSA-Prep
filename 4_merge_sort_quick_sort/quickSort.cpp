#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int l, int r){
    int pivot = arr[r];
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[r]);
    return i;
}

void quickSort(vector<int> &arr, int l, int r){
    if(l>=r) return;
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi-1);
    quickSort(arr, pi+1, r);
}

int main(){
    vector<int> arr={12,11,13,5,6,7};
    int n=arr.size();

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    return 0;
}