#include <iostream>


using namespace std;
typedef long long ll;


ll count_min_num_moves(){
  ll min_num_moves = 0;
  ll prev = 0;
  ll curr = 0;
  ll n = 0;
  cin >> n;
  cin >> prev;
  for(ll i=1; i < n; i++){
    cin >> curr;
    ll num_moves = prev > curr ? prev - curr : 0;
    min_num_moves += num_moves;
    prev = curr + num_moves;
  }
  return min_num_moves;
}


int main(){
  ll min_num_moves = count_min_num_moves();
  cout << min_num_moves;
  return 0;
}
