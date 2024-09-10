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

6. search element the array

#include <iostream>
using namespace std;

void search(int arr[], int n, int key) {
    bool found = false;
    int position;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            position=i;
            break;  // Exit the loop once the key is found
        }
    }
    if (found) {
        cout << "Yes, key is present. position- "<<position<< endl;
    } else {
        cout << "Key is not present." << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; 

    int arr[100];  // Define an array with a fixed size
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "What is the value of key you want to search? ";
    cin >> key;

    // Correct function call
    search(arr, n, key);

    return 0;
}

7.find the substring 

#include <iostream>
#include <string>
using namespace std;

bool searchSubstring(string str, string key) {
    int strLen = str.length();
    int keyLen = key.length();

    for (int i = 0; i <= strLen - keyLen; i++) {
        int j;
    
        for (j = 0; j < keyLen; j++) {
            if (str[i + j] != key[j]) {
                break;
            }
        }
       
        if (j == keyLen) {
            return true;
        } 
    }
    return false;
}

int main() {
    string str, key;
    
    cout << "Enter the main string: ";
    cin >> str;
    
    cout << "Enter the substring to search: ";
    cin >> key;

    if (searchSubstring(str, key)) {
        cout << "Yes, the substring is present." << endl;
    } else {
        cout << "No, the substring is not present." << endl;
    }

    return 0;
}

8. add the last element in the array
    
    #include <iostream>
using namespace std;

int add_at_end(int arr[], int n, int key, int capacity) {
    if (n >= capacity) {
        return n;  
    }
    else {
        arr[n] = key;  
        return (n + 1);  
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; 

    int arr[20];  
    int capacity = sizeof(arr) / sizeof(arr[0]);  

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "What is the value of key you want to add at the end? ";
    cin >> key;
    n = add_at_end(arr, n, key, capacity);
    cout << "The updated elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



