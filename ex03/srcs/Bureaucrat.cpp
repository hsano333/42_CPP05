#include "Bureaucrat.hpp"
#include <iostream>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

TooLowException Bureaucrat::GradeTooLowException = TooLowException();
TooHighException Bureaucrat::GradeTooHighException = TooHighException();

Bureaucrat::Bureaucrat() : name(""), grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    this->grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& bure) : name(bure.name)
{
    if (bure.grade < 1)
        throw Bureaucrat::GradeTooHighException;
    else if (bure.grade > 150)
        throw Bureaucrat::GradeTooLowException;
    this->grade = bure.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bure)
{
    const_cast<string&>(this->name) = bure.name;
    this->grade = bure.grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
    if (this->grade > 1)
        this->grade--;
    else
        throw Bureaucrat::GradeTooHighException;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->grade < 150)
        this->grade++;
    else
        throw Bureaucrat::GradeTooLowException;
}


std::ostream& operator<<(std::ostream& os, Bureaucrat& bure)
{
    os << bure.getName() << ", bureaucrat grade " << bure.getGrade() << ".";
    return (os);
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bure)
{
    os << bure.getName() << ", bureaucrat grade " << bure.getGrade() << ".";
    return (os);
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        cout << this->getName() << " signed " << form.getName() << endl;
    }
    catch(std::exception &e)
    {
        cout << this->getName() << " couldn’t sign " << form.getName() << " because "
             << "Form's grade for sign is " << form.getGradeForSign()
             << " but your grade is " << this->getGrade() 
             << "." << endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        cout << this->getName() << " executed "<< form.getName() << endl;
    }
    catch(std::exception &e)
    {
        cout << this->getName() << " couldn't execute " << form.getName() << " because "
             << e.what()
             << "." << endl;
    }
    //catch(TooLowException &e)
    //{
        //cout << this->getName() << " couldn't execute " << form.getName() << " because "
             //<< "Form's grade for sign is " << form.getGradeForSign()
             //<< " but your grade is " << this->getGrade() 
             //<< "." << endl;
    //}
}
