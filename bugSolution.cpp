#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic use of std::vector<bool>
  std::vector<bool> boolVector(10);
  boolVector[0] = true;
  // Accessing elements might involve bitwise operations and is less efficient
  std::cout << "boolVector[0]: " << boolVector[0] << std::endl;

  // Improved alternative using std::vector<int> 
  std::vector<int> intVector(10);
  intVector[0] = 1; // Represent boolean with 0 or 1
  std::cout << "intVector[0]: " << intVector[0] << std::endl;

  // Another efficient alternative using std::bitset
  std::bitset<10> bitsetVector;
  bitsetVector[0] = 1; 
  std::cout << "bitsetVector[0]: " << bitsetVector[0] << std::endl;

  return 0;
}
