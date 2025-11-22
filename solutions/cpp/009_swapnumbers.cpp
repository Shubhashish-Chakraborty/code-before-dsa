#include <bits/stdc++.h>
using namespace std;

int main() {

    int first, second;
    cout << "Enter the First Number:";
    cin >> first;

    cout << "Enter the Second Number: ";
    cin >> second;

    first = first + second;
    second = first - second;
    first = first - second;

    cout << "After Swapping: " << endl;
    cout << "A = " << first << " B = " << second;


    return 0;
}