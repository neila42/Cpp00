#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main() 
{
    PhoneBook phoneBook;
    std::string command;

    while (1)
    {
        std::cout << "Menu:" << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "command:";

        if (std::getline(std::cin, command)) 
        {
            if (command == "ADD")
                phoneBook.addContact();
            else if (command == "SEARCH")
                phoneBook.searchContacts();
            else if (command == "EXIT") 
            {
                std::cout << "Exit" << std::endl;
                break;
            } 
            else
                std::cout << "Invalid input" << std::endl;
        } 
        else 
        {
            if (std::cin.eof())
                break;  
        }
    }
    return 0;
}
