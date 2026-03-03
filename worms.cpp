#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n;i++) {
        cin >> arr[i];
        if (i>0) 
            arr[i] = arr[i] + arr[i-1];
    }
    int worm;
    cin >> worm;
    int warr[worm];
    for (int i = 0; i < worm; i++)
    {
        cin >> warr[i];
    }
    
    for (int i = 0; i < worm; i++) {
        for (int j = 0; j < n; j++) {
            if(warr[i] <= arr[j]) {
                cout << j+1 << endl;
                break;
            }
        }
    }

    return 0;
}

