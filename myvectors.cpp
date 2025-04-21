//
// Created by sophi on 4/5/2025.
//

#include "myvectors.h"
#include <random>

// Constructs and returns a vector that contains n random integers
std::vector<int> randomVector(size_t n) {
  std::vector<int> v(n);

  // Declare a random device and engine
  std::random_device rd{};
  unsigned int seed = rd();
  std::default_random_engine engine{seed};

  // Declare a uniform distribution to generate #s from 0 to n - 1 inclusive
  std::uniform_int_distribution<int> randomValue{0, static_cast<int>(n - 1)};

  for (size_t i = 0; i < n; ++i) {
   v[i] = randomValue(engine);
  }

 return v;
}

// Prin the rhs vector to the lhs stream
std::ostream& operator<<(std::ostream& lhs, const std::vector<int>& rhs) {
 int size = rhs.size();
 int count = 0;
 for (const int& i : rhs) {
  lhs << i;
  if (count < size - 1) {
   lhs << ", ";
  }
  ++count;
 }
 return lhs;
}

// Returns the index of the first occurrence of the integer x in the vector values
int findValue(const std::vector<int>& values, int x) {
 int index = 0;
 for (std::vector<int>::const_iterator itr {values.begin()}; itr != values.end(); ++itr) {
  if (*itr == x) {
   return index;
  }
  ++index;
 }
 return -1;
}

// Mutate the vector by dividing every integer in the vector by 2
void halve(std::vector<int>& values) {
 for (std::vector<int>::iterator itr {values.begin()}; itr != values.end(); ++itr) {
  *itr /= 2;
  }
}

// Returns a constructed vector that contains the odd elements of lhs, followed by the even elements of rhs
std::vector<int> operator+(const std::vector<int>& lhs, const std::vector<int>& rhs) {
 std::vector<int> v;
 for (int i : lhs) {
  if (i % 2 != 0) {
   v.push_back(i);
  }
 }

 for (int i : rhs) {
  if (i % 2 == 0) {
   v.push_back(i);
  }
 }
 return v;
}