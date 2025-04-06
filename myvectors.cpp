//
// Created by sophi on 4/5/2025.
//

#include "myvectors.h"

/*
std::vector<int> randomVector(size_t n): constructs and returns an std::vector<int> that contains n random integers
in the range from 0 to n-1 inclusive. Use a std::random_device, std::default_random_engine, and
std::uniform_int_distribution object as in Homework 2 to generate this sequence. Return the vector.
 */
std::vector<int> randomVector(size_t n) {

}


/*
print the rhs vector to the lhs stream, using commas to separate each element of the vector.
Use the range-based for loop for this function, as shown in the StandardLibrary/vector project in the
course lecture notes repository.
 */
std::ostream& operator<<(std::ostream& lhs, const std::vector<int>& rhs) {

}


/*
returns the index of the first occurrence of the integer x in the vector values. Write this loop by hand;
do not use find() or related functions on vectors. Return -1 if x cannot be found in the vector.
Use an std::vector<int>::iterator object and the .begin() and .end() functions, as shown in the StanardLibrary/vector project.
 */
int findValue(const std::vector<int>& values, int x) {

}


/*
mutate the vector by dividing every integer in the vector by 2.
Use an std::vector<int>::iterator object and the .begin() and .end() functions.
You can assign a new value to the element an iterator is pointing at by treating the iterator as a
pointer, e.g., *itr = 0; would override the value pointed to by itr with a 0.
 */
void halve(std::vector<int>& values) {

}


/*
This operator returns a constructed vector that contains the odd elements of lhs, followed by the even elements of rhs.
 */
std::vector<int> operator+(const std::vector<int>& lhs, const std::vector<int>& rhs) {

}