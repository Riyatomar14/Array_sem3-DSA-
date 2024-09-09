1. update array element

#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,5,6};
    cout<< arr[2]<<endl;
    arr[0]=1;
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}

2.The C++ Program to Illustrate How to reverse an Array

#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,5,6};
    
    int n=5;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<",";
    }
    return 0;
}

3.How to Find the Size of an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;
    cout << "Size of arr: " << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of an array: " << n << endl;
    return 0;
}

4.// c++ program to illustrate the two dimensional array
#include <iostream>
using namespace std;

int main()
{
    // Declaring 2D array
    int arr[4][4];

    // Initialize 2D array using loop
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i + j;
        }
    }

    // Printing the element of 2D array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

5.// C++ program to illustrate the 3d array
#include <iostream>
using namespace std;

int main()
{

    // declaring 3d array
    int arr[3][3][3];
    // initializing the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                arr[i][j][k] = i + j + k;
            }
        }
    }

    // printing the array
    for (int i = 0; i < 3; i++) {
        cout << i << "st layer:" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


