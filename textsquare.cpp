#include <iostream>
#include <cstring>

int main() { 
    char input[46];
    std::cout << "Type anything of up to 45 characters w/ no space character: ";
    std::cin >> input;
    std::cout << "\n\n";

    std::cout << input << "\n";
    if(strlen(input) <= 45)  {
        for(int i=1; i < strlen(input); i++) {
            if(i == strlen(input) - 1) { 
                std::cout << input[i];
                for(int j=2; j < strlen(input)+1; j++) {
                    std::cout << input[strlen(input) - j];
                }
            }
            else {
                std::cout << input[i] << std::string(strlen(input) - 2, ' ') << input[strlen(input) - (i+1)] << "\n";
            }    
        }
    }
    return 0;
}
