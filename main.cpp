#include <iostream>
#include <sstream>

int main() {
    std::cout << "Hello, User!\nPlease, enter mathematical operation you want to perform: " << std::endl;
    std::string userText;
    std::cin >> userText;
    std::stringstream textToPars;
    for (int i = 0; i < userText.length(); i++) {
        if (userText[i] != '+' && userText[i] != '-' && userText[i] != '*' && userText[i] != '/')
            textToPars << userText[i];
        else textToPars << " " << userText[i] << " ";
    }
    std::string numberOne, numberTwo, dummy;
    textToPars >> numberOne >> dummy >> numberTwo;
    if (dummy == "+") std::cout << std::stod(numberOne) + std::stod(numberTwo) << std::endl;
    if (dummy == "-") std::cout << std::stod(numberOne) - std::stod(numberTwo) << std::endl;
    if (dummy == "*") std::cout << std::stod(numberOne) * std::stod(numberTwo) << std::endl;
    if (dummy == "/") std::cout << std::stod(numberOne) / std::stod(numberTwo) << std::endl;
    return 0;
}
