#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

int main(void)
{
    ShrubberyCreationForm form1 = ShrubberyCreationForm("form1");
    RobotomyRequestForm form2 = RobotomyRequestForm("form2");
    PresidentialPardonForm form3 = PresidentialPardonForm("form3");

    Bureaucrat bure1 = Bureaucrat("bure1", 1);
    Bureaucrat bure10 = Bureaucrat("bure10", 10);
    Bureaucrat bure30 = Bureaucrat("bure30", 30);
    Bureaucrat bure50 = Bureaucrat("bure50", 50);
    Bureaucrat bure75 = Bureaucrat("bure75", 75);
    Bureaucrat bure140 = Bureaucrat("bure140", 140);
    Bureaucrat bure150 = Bureaucrat("bure150", 150);
    cout << bure1 << endl;
    cout << bure10 << endl;
    cout << bure150 << endl;

    try {
        cout << endl <<  "test1" << endl;
        bure150.signForm(form1);
        bure150.executeForm(form1);
        bure150.signForm(form2);
        bure150.executeForm(form2);
        bure150.signForm(form3);
        bure150.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl <<  "test2" << endl;
        bure140.signForm(form1);
        bure140.executeForm(form1);
        bure140.signForm(form2);
        bure140.executeForm(form2);
        bure140.signForm(form3);
        bure140.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl <<  "test3" << endl;
        bure75.signForm(form1);
        bure75.executeForm(form1);
        bure75.signForm(form2);
        bure75.executeForm(form2);
        bure75.signForm(form3);
        bure75.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl <<  "test4" << endl;
        bure50.signForm(form1);
        bure50.executeForm(form1);
        bure50.signForm(form2);
        bure50.executeForm(form2);
        bure50.signForm(form3);
        bure50.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl <<  "test4" << endl;
        bure30.signForm(form1);
        bure30.executeForm(form1);
        bure30.signForm(form2);
        bure30.executeForm(form2);
        bure30.signForm(form3);
        bure30.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl <<  "test5" << endl;
        bure10.signForm(form1);
        bure10.executeForm(form1);
        bure10.signForm(form2);
        bure10.executeForm(form2);
        bure10.signForm(form3);
        bure10.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }

    try {
        cout << endl << "test6" << endl;
        bure1.signForm(form1);
        bure1.executeForm(form1);
        bure1.signForm(form2);
        bure1.executeForm(form2);
        bure1.signForm(form3);
        bure1.executeForm(form3);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }



    return (0);
}
