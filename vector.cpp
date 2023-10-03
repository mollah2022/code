#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector of strings
    std::vector<std::string> stringVector;

    // Input strings into the vector
    std::cout << "Enter strings (type 'exit' to stop):" << std::endl;
    std::string input;
    
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);
        
        if (input == "exit") {
            break; // Exit the loop if the user types "exit"
        }
        
        stringVector.push_back(input);
    }

    // Output the strings from the vector
    std::cout << "Strings in the vector:" << std::endl;
    for (const std::string& str : stringVector) {
        std::cout << str << std::endl;
    }

    return 0;
}


