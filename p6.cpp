#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x<2) {
        return false;
    }
    for (int d=2; d*d<=x;d++) {
        if (x%d==0) {
            return false;
        }
    }
    return true;
}
//I give up
