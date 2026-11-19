#include <iostream>
using namespace std;
int largestDigit(int n) {
   if (n<10) return n;
   int last=n%10;
   int next=largestDigit(n/10);
   if (last>next) {
      return last;
   }
   return next;

}
int main() {
   int c;
   cin>>c;
   cout<<largestDigit(c)<<endl;
   return 0;
}