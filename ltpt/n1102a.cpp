#include <iostream>

#define getbit(i, j) ((i) >> (j) & 1)

int main(){
  int n;
  std::cin >> n;

  for(int i = 0; i < (1 << n); i++){
    for(int j = n - 1; j >= 0; j--) putchar(char(getbit(i, j) + '0'));
    putchar('\n');
  }

}
