#include <iostream>
using namespace std;
bool search(int arr[],int key,int n){
    for(int i=0; i<n ;i++){
        arr[i]=key;
        break;
    }
    return false;
}

int main() {
    int n;
    cout << "write the size of the array you want:";
    cin >> n;
    int arr[n];
    cout<< " the array is ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    //reverse the array
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        cout << arr[i];
    }
    
    // search the element
    int key;
    cout << endl;
    cout << "enter the number you want to search:";
    cin >> key;
    search(arr,key,n);
    if (search) {
        cout << "key is present";
    }
    else {
        cout << "key is not present";
    }
    
    
    
    return 0;
}
