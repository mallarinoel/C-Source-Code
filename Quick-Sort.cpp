/////////////////////////////////////////////
///////| Date Created : Feb 5 2021  |////////
///////| Coded By : Noel Mallari    |////////
/////////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;
int Partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pIndex = start;

    for(int i = start; i<end; i++) {
        if(arr[i] <= pivot ) {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;

        }

    }

    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;
    
    return pIndex;
}
//QuickSort = QS
void QuickSort(int arr[], int start, int end) {
    if(start < end) {

        int p = Partition(arr, start, end);
        QuickSort(arr, start, (p-1));// Recursive QS calling left partition
        QuickSort(arr, (p+1), end);//Recursive QS calling right Partition
    }

}


int main(void) {

     int x = 0;
     int size = 0;
     int arr[size];
     
    
     cout << "Enter size of array : ";
     cin >> size;
     
    
     cout << "Enter (" << size << ") List of array"<<endl;
     for(int i = 0; i<size; i++){
     cin>> arr[i];
    }
    int pivot = arr[0];
     cout << "Pivot Value : " << pivot << endl;
     cout << "Before Sorting : ";
     for(int i = 0; i < size; i++){

     cout << arr[i] << " ";

     }
     cout << endl;

     QuickSort(arr, x, (size-1));//Calling QuickSort function
    
     cout << "After sorting : ";
    
     for(int i = 0; i < size; i++){
    
     cout << arr[i] << " ";
    
     }

    return 0;
}
