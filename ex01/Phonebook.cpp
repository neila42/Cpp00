#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int PhoneBook::currentContactCount = 0;
int PhoneBook::currentContactIndex = 0;

PhoneBook::PhoneBook(void) 
{
    std::cout << "Constructor phone called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructor phone called" << std::endl;
}

void PhoneBook::searchContacts() const 
{
    std::cout << "Contact list:" << std::endl;
    std::cout << std::left << std::setw(10) << "Index" << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < currentContactCount; i++) 
    {
        const Contact &contact = _contacts[i];
        std::cout << std::left << std::setw(10) << i + 1;
    
        if (contact.getAttribute("firstName").size() > 10)
            std::cout << std::setw(10) << contact.getAttribute("firstName").substr(0, 9) + '.' << " | ";
        else
            std::cout << std::setw(10) << contact.getAttribute("firstName") << " | ";
    
        if (contact.getAttribute("lastName").size() > 10)
            std::cout << std::setw(10) << contact.getAttribute("lastName").substr(0, 9) + '.' << " | ";
        else
            std::cout << std::setw(10) << contact.getAttribute("lastName") << " | ";
    
        if (contact.getAttribute("nickName").size() > 10)
            std::cout << std::setw(10) << contact.getAttribute("nickName").substr(0, 9) + '.' << " | ";
        else
            std::cout << std::setw(10) << contact.getAttribute("nickName") << " | ";
        std::cout << std::endl;
    }

    int indexToDisplay;
    while (true) 
    {
        std::cout << "Index of contact (0 to go back):";
        std::cin >> indexToDisplay;
        if (indexToDisplay == 0) 
            break;
        if (indexToDisplay < 0 || indexToDisplay > currentContactCount)
            std::cout << "Invalide index" << std::endl;
        else 
        {
            const Contact &selectedContact = _contacts[indexToDisplay - 1];
            std::cout << "Contact information:" << std::endl;
            std::cout << "Fisrtname:" << selectedContact.getAttribute("firstName") << std::endl;
            std::cout << "Lastname:" << selectedContact.getAttribute("lastName") << std::endl;
            std::cout << "Nickname:" << selectedContact.getAttribute("nickName") << std::endl;
            std::cout << "Phone number:" << selectedContact.getAttribute("phoneNum") << std::endl;
            std::cout << "Darkest secret:" << selectedContact.getAttribute("secret") << std::endl;
        }
    }
}

void PhoneBook::addContact() 
{
    std::string firstName;
    std::cout << "firstname:";
    std::getline(std::cin, firstName);
    _contacts[currentContactIndex].setAttribute("firstName", firstName);

    std::string lastName;
    std::cout << "lastname:";
    std::getline(std::cin, lastName);
    _contacts[currentContactIndex].setAttribute("lastName", lastName);

    std::string nickName;
    std::cout << "nickname:";
    std::getline(std::cin, nickName);
    _contacts[currentContactIndex].setAttribute("nickName", nickName);

    std::string phoneNum;
    std::cout << "phone number:";
    std::getline(std::cin, phoneNum);
    _contacts[currentContactIndex].setAttribute("phoneNum", phoneNum);

    std::string secret;
    std::cout << "darkest secret:";
    std::getline(std::cin, secret);
    _contacts[currentContactIndex].setAttribute("secret", secret);

    currentContactIndex = (currentContactIndex + 1) % 8;
    currentContactCount += (currentContactCount < 8);
    // if (currentContactCount < 8) 
    // {
    // } 
    // else
    // {
    //     int i = 0;
    //     while (i < currentContactCount - 1)
    //     {
    //         _contacts[i] = _contacts[i + 1];
    //         i++;
    //     }
    //     _contacts[0] = contact;
    // }
}
