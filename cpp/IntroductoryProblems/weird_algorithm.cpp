#include <iostream>
using namespace std;

typedef long long ll;


void syracus(ll n){
  while (n > 1){
    cout << n << ' ';
    if (n % 2 == 0){
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  }
  cout << n << ' ';
}


int main() {
  ll n = 0;
  cin >> n;
  syracus(n);
  return 0;
}
