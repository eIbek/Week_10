#include <iostream>
using namespace std;
bool play(int n, int take, bool aliceTurn) {
    if (take == 0 || n < take) {
        return !aliceTurn;
    }
    return play(n - take, take - 1, !aliceTurn);
}

bool canAliceWin(int n) {
    return play(n, 10, true);
}

int main() {
    int n;
    cin >> n;
    if (canAliceWin(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}