//
// Created by sophi on 4/5/2025.
//

#include "myvectors.h"
#include <random>

/*
constructs and returns an std::vector<int> that contains n random integers
in the range from 0 to n-1 inclusive. Use a std::random_device, std::default_random_engine, and
std::uniform_int_distribution object as in Homework 2 to generate this sequence. Return the vector.
*/
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

/*
print the rhs vector to the lhs stream, using commas to separate each element of the vector.
Use the range-based for loop for this function, as shown in the StandardLibrary/vector project in the
course lecture notes repository.
 */
std::ostream& operator<<(std::ostream& lhs, const std::vector<int>& rhs) {
 int size = rhs.size();
 int count = 0;
 for (const int& i : rhs) {
  lhs << i;
  if (count < size - 1) {
   lhs << ",";
  }
  ++count;
 }
 return lhs;
}

/*
returns the index of the first occurrence of the integer x in the vector values. Write this loop by hand;
do not use find() or related functions on vectors. Return -1 if x cannot be found in the vector.
Use an std::vector<int>::iterator object and the .begin() and .end() functions, as shown in the StanardLibrary/vector project.
 */
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

/*
mutate the vector by dividing every integer in the vector by 2.
Use an std::vector<int>::iterator object and the .begin() and .end() functions.
You can assign a new value to the element an iterator is pointing at by treating the iterator as a
pointer, e.g., *itr = 0; would override the value pointed to by itr with a 0.
 */
void halve(std::vector<int>& values) {
 for (std::vector<int>::iterator itr {values.begin()}; itr != values.end(); ++itr) {
  *itr /= 2;
  }
}

/*
This operator returns a constructed vector that contains the odd elements of lhs, followed by the even elements of rhs.
 */
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