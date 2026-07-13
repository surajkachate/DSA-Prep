#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        bool swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        // swap(arr[i], arr[minIndex]);
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    // vector<int> arr={5, 2, 4, 6, 1};
    vector<int> arr={64, 25, 12, 22, 11};
    // vector<int> arr={10, 20, 30, 40, 50};
    // vector<int> arr={5, 3, 8, 4, 2};

    insertionSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}