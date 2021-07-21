#include <iostream>
#include <string>

using namespace std;

int main() {
  string dna;
  getline(cin, dna);
  if (dna.size() == 0){
    return 0;
  }
  string::size_type max_rep = 1;
  string::size_type cur_rep = 1;
  for (string::size_type i=1; i < dna.size(); i++){
    if (dna[i] == dna[i - 1]){
      cur_rep++;
    } else{
      cur_rep = 1;
    }
    if (max_rep < cur_rep)
      max_rep = cur_rep;
  }
  cout << max_rep;
  return 0;
}
