#include <ios#include <iostream>
#include <string>

std::string перетворитиНаІніціали(const std::string& прізвище, const std::string& ім'я, const std::string& по_батькові) {
    char ініціал_імя = ім'я.at(0);                
    char ініціал_по_батькові = по_батькові.at(0); 
    
    return прізвище + " " + ініціал_імя + ". " + ініціал_по_батькові + ".";
}

int main() {
    std::string прізвище, ім'я, по_батькові;
    
    // Введення прізвища, імені та по батькові
    std::cout << "Введіть прізвище: ";
    std::getline(std::cin, прізвище);
    
    std::cout << "Введіть ім'я: ";
    std::getline(std::cin, ім'я);
    
    std::cout << "Введіть по батькові: ";
    std::getline(std::cin, по_батькові);

    // Виведення результату
    std::string результат = перетворитиНаІніціали(прізвище, ім'я, по_батькові);
    std::cout << результат << std::endl;

    return 0;
}
