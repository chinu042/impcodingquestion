#include <iostream>
#include <string>

int count_occurrence_of_char_in_string(const std::string& str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    char ch;
    
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);
    
    std::cout << "Enter the character to search: ";
    std::cin >> ch;

    int char_count = count_occurrence_of_char_in_string(str, ch);
    std::cout << "The count of '" << ch << "' character in the string is: " << char_count << std::endl;

    return 0;
}
