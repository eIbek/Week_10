#include <iostream>
using namespace std;
int gcd(int a,int b) {
    if (b==0) {
        return a;
    }
    return gcd(b, a%b);
}
int commonFactors(int a, int b) {
    int f=gcd(a, b);
    int c=0;
    for (int e=1; e<=f; e++) {
        if (f%e==0) {
            c++;
        }
    }
    return c;
}
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<commonFactors(a,b);
    return 0;
}
