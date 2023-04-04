#include<iostream>
using namespace std;



/*void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}*/


void bubbleSort(int arr[], int n){
    bool check;
    for (int j=0; j<n-1; j++){
        check = 0;
        for (int i=0; i<n-j-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
                check = 1;
            }
               
        }
        if (check == 0){
                break;
        }
        
    }
}

int main(){
    int n = 5;
    int arr[] = {5,3,2,4,1};
    bubbleSort(arr,n);
    
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}