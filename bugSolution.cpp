#include <iostream>

int main() {
  int *ptr = new int(10); // Dynamically allocate memory
  std::cout << *ptr << std::endl; // Output: 10
  delete ptr; // Correctly deallocate memory
  ptr = nullptr; // Good practice to set the pointer to null after deletion
  return 0;
} 