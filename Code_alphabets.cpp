// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 06

#include <iostream>
using namespace std;

int main() {
    char n = 7;
    char ch='A';
    for(char i = 1; i <= n; i++) {
        for(char j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
