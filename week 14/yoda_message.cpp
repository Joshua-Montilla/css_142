#include <iostream>
#include <cctype>

int decode_char(char letter){
    return toupper(letter) - 'A' +1;
}

int decode_char(char letter, int bonus){
    return decode_char(letter) +bonus;
}

int decode_message(const std::string& message, int index = 0){
    if (index >= message.size())
    {
        return 0;
    }
    return decode_char(message[index]) + decode_message(message, index +1);
}

std::string yoda_shift(const std::string& message, int shift = 2) {
    std::string result;
    for (char c : message)
    {
        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c -base + shift) % 26 + base);
        }
        else
        {
            result += c;
        }
        
        
    }
    return result;
    
}

int main(){
    std::cout << "Yoda decoding 'C': " << decode_char('C') << std::endl;
    std::cout << "With Force bonus +5: " << decode_char('C', 5) << std::endl;
    std::cout << "Yoda message sum of 'ABC': " << decode_message("ABC") << std::endl;
    std::cout << "Yoda shifted message: " << yoda_shift("Hello my name is Joshua, I am a little goblin. Howdy Howdy Howdy") << std::endl;

    return 0;
}