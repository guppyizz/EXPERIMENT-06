// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 06

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


