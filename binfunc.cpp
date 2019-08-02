#include <iostream>
#include <string>
#include <bitset>

void convertToBinary(std::string word, char letter)
{
        for (unsigned int wordPosition = 0; wordPosition < word.size(); ++wordPosition){
                letter = word[wordPosition];
                std::bitset <8> binary(letter);
                std::cout << "\n" << binary;
        }
        return;
}
