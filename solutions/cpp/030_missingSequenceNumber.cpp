#include <bits/stdc++.h>

int main() {
    std::vector<int> seq = {1,2,4,5};
    int lastElement = seq[seq.size() - 1];
    for (int i = 1; i <= lastElement; i++) {
        bool found = false;
        for (int num : seq) {
            if (num == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << i << " ";
        }
    }
    return 0;
}