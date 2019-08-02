#include <iostream>
#include <string>
#include <bitset>
#include "binfunc.h"
#include <stdlib.h>

int main() {
        std::string again;
        char letter = ' ';
        std::string word;

        aga:
        std::cout << "\t**Text to Binary Converter 1.0.5**\n\n" << std::endl;
        std::cout << "\t**Created by Chanakan Mungtin**\n\n" << std::endl;
        std::cout << "Please enter a character, word, or phrase: ";
        getline (std::cin, word);
        convertToBinary(word, letter);
        conmore:
        std::cout << "\n\nWould you like to convert more? (y/n) ";
        getline(std::cin, again);
        if (again == "y") {
				#ifdef _WIN32
        			system("CLS");
				#endif
				#ifdef linux
        			system("clear");
				#endif
				#ifdef _linux
        			system("clear");
				#endif
				#ifdef _linux_
        			system("clear");
				#endif
				#ifdef _APPLE_
        			system("clear");
				#endif
                goto aga;
        } else if (again == "n") {
                std::cout << "\n\nThank you for using my software, Goodbye!" << std::endl;
                return 0;
        } else {
                std::cout << "\n\nPlease type y or n";
                goto conmore;
        }
}
