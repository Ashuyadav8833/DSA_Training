#include<iostream>
using namespace std;

int main() {
    int n,h,temp, count = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if(temp > h)
            count += 2;
        else
            count++;
    }

    cout << count;

    return 0;
}