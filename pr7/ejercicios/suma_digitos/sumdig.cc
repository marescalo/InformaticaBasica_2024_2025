#include <iostream>
#include <math.h>

int main(){

  int num{0};
  int sum{0}; // aqui se guardara la suma de los digitos
  std::cin >> num;

  while(num != 0){
    sum += (num%10);
    num = num/10;
  }

  std::cout << sum << std::endl;
  return 0;
}