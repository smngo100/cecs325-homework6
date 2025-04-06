#include <iostream>
#include <vector>
#include "myvectors.h"

int main() {

    // Repeat the menu until Quit is chosen.
    while (true) {
        // Declare a vector data that is initially empty. Each option in the menu manipulates data in some way.
        std::vector<int> v{};

        // Option 1: Randomize data.
        // Read an integer n from the user, then override data with the randomized data returned by randomVector(n).
        std::cout << "Enter an integer: ";
        int n{};
        std::cin >> n;
        std::vector<int> randomized_data = randomVector(n);

        // Option 2: Print data
        // Print data using std::cout and the operator<< you wrote.
        std::cout << randomized_data << "\n\n";

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