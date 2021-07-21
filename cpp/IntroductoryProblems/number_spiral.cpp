#include <iostream>
#include <cmath>


typedef unsigned long long ull;
using namespace std;


ull spiral(ull x, ull y){
  if (x >= y){
    return x % 2 ? (x-1)*(x-1) + y : x*x - (y - 1);
  }else{
    return y % 2 ? y*y - (x - 1) : (y-1)*(y-1) + x;
  }
}

int main(){
  int t = 0;
  ull x = 0, y = 0;
  cin >> t;
  for (int i = 0; i < t; i++){
    cin >> x;
    cin >> y;
    cout << spiral(x, y) << endl;
  }
  return 0;
}
