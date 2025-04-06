#include <iostream>
#include <vector>
#include <random>

int main() {

    // Repeat the menu until Quit is chosen.
    while (true) {
        // Declare a vector data that is initially empty. Each option in the menu manipulates data in some way.
        std::vector<int> n;

        // Option 1: Randomize data.
        // Read an integer n from the user, then override data with the randomized data returned by randomVector(n).
        // Declare a random device and engine
        std::random_device rd{};
        unsigned int seed = rd();
        std::default_random_engine engine{seed};

        // Declare a uniform distribution to generate #s from 0 to n - 1 inclusive
        std::uniform_int_distribution<int> oneToThree{0, n - 1};

        // Option 2: Print data
        // Print data using std::cout and the operator<< you wrote.


        // Option 3: Find value
        // Read an integer x from the user. Print the index where x can be found in data, or print "{x} is not in the data",
        // where {x} is the user's input. Use findValue.


        // Option 4: Halve data
        // Call halve(data). Don't print the result (at least until the user selects option 2 in the future).


        // Option 5: Weird concatenate
        // Construct a second random vector, using the size() of data as n. Use your operator+ to build a new vector,
        // where data is lhs and the second vector is rhs. Print the resulting vector using operator<<.


        // Option 6: Quit.
        // Terminate the program.

    }
    return 0;
}