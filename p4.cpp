#include <iostream>
using namespace std;
int countDivisors(int a, int b){
    if (b>a){
        return 0;
    }
    if (a%b==0) {
        return 1+countDivisors(a,b+1);
    }
    return countDivisors(a,b+1);
}

bool isThree(int n) {
    return countDivisors(n,1)==3;
}
int main(){
    int n;
    cin >> n;
    if (isThree(n)) {
        cout <<"true" <<endl;
    } else {
        cout <<"false" <<endl;
    }
    return 0;
}