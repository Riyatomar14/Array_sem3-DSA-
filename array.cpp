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

4.

