#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "NoFormException.hpp"
#include <iostream>

using std::cout;
using std::endl;

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& intern)
{
    *this = intern;
}

Intern& Intern::operator=(const Intern& intern)
{
    if (this != &intern)
        return *this;
    return *this;
}

EForm Intern::searchForm(std::string name)
{
    EForm form = NONE;
    const s_dict table[] =
    {
        {"shrubbery_creation", SHRUBBERYCREATION},
        {"robotomy_request", ROBOTOMYREQUEST},
        {"presidentia_pardon", PRESIDENTIALPARDON},
    };
    for (int i = 0; i < (int)NONE; i++)
    {
        while(name == std::string(table[i].key))
        {
            form = table[i].value;
            break;
        }
    }
    return (form);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm* form;
    switch(this->searchForm(name))
    {
        case SHRUBBERYCREATION:
            form = new ShrubberyCreationForm(target);
            cout << "Intern creates [" << *form << "]" <<  endl;
            return (form);
            break;
        case ROBOTOMYREQUEST:
            form = new RobotomyRequestForm(target);
            cout << "Intern creates [" << *form << "]" <<  endl;
            return (form);
            break;
        case PRESIDENTIALPARDON:
            form = new PresidentialPardonForm(target);
            cout << "Intern creates [" << *form << "]" <<  endl;
            return (form);
            break;
        default:
            cout << "Error:" << name << " is not exist in Form list." << endl;
            throw NoFormException();
    }
}
