#include <iostream>
using namespace std;

int main() {
    int n; // number of elements of that array!!
    cout << "Enter the number of elements of your array: ";
    cin >> n;
    int theArr[n];
    for (int i = 0; i < n; i++) {
        cin >> theArr[i];
    }
    int largest = theArr[0];
    int smallest = theArr[0];
    for (int x: theArr) {
        if (x > largest) {
            largest = x;
        }
        if (x < smallest) {
            smallest = x;
        }
    }
    cout << "Largest: " << largest << " Smallest: " << smallest << endl;
    return 0;
}