#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        // Last i elements are already
        // in place
        for (j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[j + 1]) // se for verdade, então temos que trocar!
                swap(arr[j], arr[j + 1]);
        }
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    // int a[1000]; // 4*1000 bytes = 4000 bytes = 4kB
    // int a[10000000] // 4*1000000 bytes = 4000000 bytes = 4MB
    int arr[] = {5, 1, 12331, 12312, 4, 2, 8, 10, 9, 113, 387, 1002, 348, 11239, 1827382}; // 5 inteiros = 20 bytes
    int N = sizeof(arr) / sizeof(arr[0]); // 20 / 4 = 5 --> número de inteiros no vetor
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}