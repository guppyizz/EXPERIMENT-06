// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 06

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++) {
            cout << "  ";
        }
        for(int star = 1; star <= i; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
