#include <stdio.h>


int main(){
  int N = 0;
  scanf("%d", &N);
  int ans = 0;
  for (int i = 1; i < N; i++){
    int n = 0;
    scanf("%d", &n);
    ans = ans ^ n ^ i;
  }
  ans = ans ^ N;
  printf("%d\n", ans);
}
