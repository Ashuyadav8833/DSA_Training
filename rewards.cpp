#include<iostream>
using namespace std;

int main() {
    int a,b,n;

    for (int i=0; i<3; i++) {
        int temp;
        cin >> temp;
        a += temp;
    }
    for (int i=0; i<3; i++) {
        int temp;
        cin >> temp;
        b += temp;
    }
    cin >> n; 

    int a_units = a/5;
    if (a%5 != 0)
        a_units++;

    int b_units = b/10;
    if (b%10 != 0)
        b_units++;

    n = n - a_units - b_units;

    if (n>=0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}