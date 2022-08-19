#include<iostream>
using namespace std;

// void printArray(int arr[]) {  // or int * arr[]
//     cout << "In function " << sizeof(arr) << endl;
//     int n = sizeof(arr)/sizeof(int);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
    
    
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);

//     cout << "In main " << sizeof(arr) << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
    
//     printArray(arr);

//     return 0;
// }

void printArray(int arr[], int n) {  // or int * arr[]
    cout << "In function " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    
}
// main knows whats the correct size of array so pass n from  here
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout << "In main " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    printArray(arr, n);

    return 0;
}