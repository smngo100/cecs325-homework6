#include <iostream>
#include <vector>
#include "myvectors.h"

int main() {
    // Declare a vector data that is initially empty. Each option in the menu manipulates data in some way.
    std::vector<int> data{};

    // Repeat the menu until Quit is chosen.
    while (true) {
        std::cout << "===== MENU =====" << std::endl;
        std::cout << "Select an option:" << std::endl;
        std::cout << "1. Randomize data" <<std::endl;
        std::cout << "2. Print data" << std::endl;
        std::cout << "3. Find value" << std::endl;
        std::cout << "4. Halve data" << std::endl;
        std::cout << "5. Weird concatenate" << std::endl;
        std::cout << "6. Quit" << std::endl;

        int option{};
        std::cin >> option;

        // Option 1: Randomize data.
        // Read an integer n from the user, then override data with the randomized data returned by randomVector(n).
        if (option ==  1) {
           std::cout << "Enter an integer: ";
            int n{};
            std::cin >> n;
            data = randomVector(n);
        }

        // Option 2: Print data
        // Print data using std::cout and the operator<< you wrote.
        else if (option == 2) {
            std::cout << "Data: " << data << "\n\n";
        }

        // Option 3: Find value
        // Read an integer x from the user. Print the index where x can be found in data, or print "{x} is not in the data",
        // // where {x} is the user's input. Use findValue.
        else if (option == 3) {
            std::cout << "Enter value to find: " << std::endl;
            int x{};
            std::cin >> x;
            int index = findValue(data, x);
            if (index != -1) {
                std::cout << x << " found at index " << index << "\n\n";
            }
            else {
                std::cout << x << " is not in the data" << "\n\n";
            }
        }

        // Option 4: Halve data
        // Call halve(data). Don't print the result (at least until the user selects option 2 in the future).
        else if (option == 4) {
            halve(data);
            std::cout << "Data halved" << "\n\n";
        }

        // Option 5: Weird concatenate
        // Construct a second random vector, using the size() of data as n. Use your operator+ to build a new vector,
        // where data is lhs and the second vector is rhs. Print the resulting vector using operator<<.
        else if (option == 5) {
            int n = sizeof(data);
            std::vector<int> v2{randomVector(n)};
            std::vector<int> result{data + v2};
            std::cout << "Concatenation results: " << result << "\n\n";
        }

        // Option 6: Quit.
        // Terminate the program.
        else if (option == 6) {
            std::cout << "Quitting" << std::endl;
            break;
        }
    }
    return 0;
}


// Account for multiple indices? (option 3)