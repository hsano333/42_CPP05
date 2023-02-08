#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

using std::cout;
using std::endl;

int main(void)
{
    Intern someRandomIntern;
    AForm* rrf;
    Bureaucrat bure1 = Bureaucrat("bure1", 1);

    try
    {
        cout << "test1" << endl;
        rrf = someRandomIntern.makeForm("robotomy_request", "Bender");
        bure1.signForm(*rrf);
        bure1.executeForm(*rrf);
        cout << *rrf << endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        cout << endl <<  "test2" << endl;
        rrf = someRandomIntern.makeForm("shrubbery_creation", "Shrub");
        bure1.signForm(*rrf);
        bure1.executeForm(*rrf);
        cout << *rrf << endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        cout << endl <<  "test3" << endl;
        rrf = someRandomIntern.makeForm("presidentia_pardon", "President");
        bure1.signForm(*rrf);
        bure1.executeForm(*rrf);
        cout << *rrf << endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        cout << endl <<  "test4" << endl;
        rrf = someRandomIntern.makeForm("test", "NG");
        cout << *rrf << endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }

    return (0);
}
