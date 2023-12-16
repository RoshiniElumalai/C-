#include<iostream>
using namespace std;

 int main() {
    int arr[100] = {0};
    int i, pos, n = 10;
 
    for (i = 0; i < n; i++)
        arr[i] = i + 1;
   
    for (i = 0; i < n; i++)
        cout << arr[i]<<endl;

    pos = 5;
    if (pos >= 1 && pos <= n) {
        for (i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;

         for (i = 0; i < n; i++)
            cout << arr[i]<<" ";
    } else {
        cout << "Invalid position for deletion.";
    }

    return 0;
 }
