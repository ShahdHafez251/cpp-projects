#include <iostream>
using namespace std;

int main() {
    int arr[5];

    
    for (int i = 0; i < 5; i++) {
        cout << "Please enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    cout << "\nBefore sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < 4; i++) { 
        bool swapped = false; 
        for (int j = 0; j < 4 - i; j++) { 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }

   
    cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
