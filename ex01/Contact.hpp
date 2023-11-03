#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
public:
    Contact(void);
    // Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNum, const std::string &secret);
    ~Contact(void);

    std::string getAttribute(const std::string &attribute) const;
    int setAttribute (const std::string &attribute, const std::string &value);

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNum;
    std::string _secret;
};

#endif