#include<iostream>

using namespace std;

int main() {
    int size,k;
    cin >> size >> k;

    int arr[50];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= arr[k-1] && arr[i] > 0)
            count++;
    }
    cout << count;

    return 0;
} 