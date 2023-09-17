#include<bits/stdc++.h>
using namespace std;
int partition (int arr[], int s, int e){
    int pivot=arr[s];
    int count =0;
    for(int i=s+1; i<=e; i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    int pivotIndex=s+count ;
    swap(arr[s],arr[pivotIndex]);

    int i=s, j=e;
    while (i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
    
    
}
void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }
    // for partitioning the array 
    int p=partition(arr,s,e);

    // recursive call
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}
int main() {
    int array[]={3,5,3,8,5,2};
    quickSort(array,0,5);

    for(int i=0; i<6; i++){
        cout<< array[i]<<" ";
    }
return 0;
}