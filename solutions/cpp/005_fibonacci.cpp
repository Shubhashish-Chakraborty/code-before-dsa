#include <bits/stdc++.h>
using namespace std;

int main() {

    long long limit;
    cout << "Enter the Limit: ";
    cin >> limit;

    int first = 0, second = 1;

    cout << first << " " << second << " ";

    while (true) {
        int next = first + second;
        if (next > limit) {
            break;
        }

        cout << next << " ";
        first = second;
        second = next;
    }

    return 0;
}