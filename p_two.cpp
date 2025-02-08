#include <iostream>

int main() {
  short counter;
  std::cout << "Angka awal = "; std::cin >> counter;
  std::cout << "Hitung Mundur: ";
  for(int i = counter; i >= 0; --i) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}