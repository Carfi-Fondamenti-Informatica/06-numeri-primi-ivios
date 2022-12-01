#include <iostream>
#include "funzione.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    if (verifica (n)){
        cout << "numero primo";
    } else {
        cout << "numero non primo";
    }
    return 0;
}
