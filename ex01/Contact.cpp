#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    std::cout << "Constructor contact called" << std::endl;
}

// Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNum, const std::string &secret)
//     : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNum(phoneNum), _secret(secret) 
// {
//     std::cout << "Constructor called" << std::endl; 
// }

Contact::~Contact(void)
{
    std::cout << "Destructor contact called" << std::endl;
}

std::string Contact::getAttribute(const std::string &attribute) const 
{
    if (attribute == "firstName")
        return _firstName;
    else if (attribute == "lastName")
        return _lastName;
    else if (attribute == "nickName")
        return _nickName;
    else if (attribute == "phoneNum")
        return _phoneNum;
    else if (attribute == "secret")
        return _secret;
    else
        return "Attribut inconnu";
}

int Contact::setAttribute(const std::string &attribute, const std::string &value) 
{
    if (attribute == "firstName")
        this->_firstName = value;
    else if (attribute == "lastName")
        this->_lastName = value;
    else if (attribute == "nickName")
        this->_nickName = value;
    else if (attribute == "phoneNum")
        this->_phoneNum = value;
    else if (attribute == "secret")
        this->_secret = value;
    else
        return 1;
    return 0;
}

