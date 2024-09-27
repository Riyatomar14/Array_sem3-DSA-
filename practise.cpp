cy#include <iostream>
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

// how to find thr sub-string from the given string
#include <iostream>
#include <string>
using namespace std;

bool find(string str, string key) {
    int m = str.length();
    int n = key.length();
    for (int i = 0; i <= m - n; i++) { 
        int j;
        for (j = 0; j < n; j++) {
            if (str[i + j] != key[j]) {
                break;
            }
        }
        if (j == n) {
            return true; 
        }
    }
    return false;  
}

int main() {
    string str, key;
    cout << "Enter the string and the sub-string you want to find: ";
    cin >> str >> key; 

    if (find(str, key)) {  
        cout << "Yes, the sub-string is present." << endl;
    } else {
        cout << "No, the sub-string is not present." << endl;
    }

    return 0;
}

//How to replace the spaces of a string with a specific character in C++
#include <iostream>
using namespace std;

int main() {
   string str;
   char ch;
   cout << "enter the string:";
   getline(cin,str);
   cout << "enter the char you want to put in place of space: ";
   cin >> ch;
   for(int i=0;i<str.length();i++){
       if(str[i] == ' '){
           str[i] = ch;
       }
   }
   cout << str;
    return 0;
}

//How to replace the spaces of a string with a specific character in C++
#include <iostream>
using namespace std;

int main() {
   string str;
  
   cout << "enter the string:";
   getline(cin,str);
  
   int word=0;
   for(int i=0;i<str.length();i++){
       if(str[i] == ' '){
           word++;
       }
   }
   word =word +1;
  
   cout << word;
    return 0;
}
//how is the 2D array work
#include <iostream>
using namespace std;

int main() {
    char a[] = "hi, everyone";
    cout << a << endl;

    // Define the 2D array with proper sizes
    char b[][10] = {"riya", "khushi", "sister"};  // 10 is an arbitrary size large enough to hold each string

    cout << b[1] << endl;  // Output: khushi
    cout << b[2][5] << endl;  // Output: r (5th index of "sister", 0-based indexing)

    return 0;
}
//find sum 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum= sum+i;
    }
    cout << sum;
    return 0;
}
// insert element in array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1]; // Increase array size by 1 to account for the new element
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cin >> pos;
    int num;
    cin >> num;

    // Shift elements to the right from the position where we want to insert
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos] = num;

    // Output the updated array (size is now n+1)
    for(int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//delete element on specific position in array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position to delete: ";
    cin >> pos;
  

   
    for (int i = pos-1; i < n; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
    


