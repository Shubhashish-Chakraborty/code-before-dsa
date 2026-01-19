#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numberOfElements;
    cout << "Enter the number of elements of your vector/array: ";
    cin >> numberOfElements;
    vector<int> theArr(numberOfElements);
    for (int i = 0; i < numberOfElements; i++) {
        cin >> theArr[i];
    }
    sort(theArr.begin(), theArr.end());
    for (int x: theArr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}