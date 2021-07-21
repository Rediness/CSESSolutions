#include <iostream>


using namespace std;
typedef long long ll;


int main(){
  ll n = 0;
  cin >> n;
  if(n < 4 && n != 1){
    cout << "NO SOLUTION";
    return 0;
  }
  for (ll i=2; i <= n; i=i+2)
    cout << i << " ";
  for (ll i=1; i <= n; i=i+2)
    cout << i << " ";
  return 0;
}
