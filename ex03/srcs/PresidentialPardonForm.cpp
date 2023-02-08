#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
using std::string;
using std::ios;
using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("presidentia_pardon", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidentia_pardon", 25, 5), target("")
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form.getName(), 25, 5)
{
    this->target = form.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
    this->target = form.target;
    Bureaucrat bure = Bureaucrat("tmp", 1);
    if (form.getSign())
        this->beSigned(bure);
    return (*this);
}

void PresidentialPardonForm::pardone(void) const
{
    cout << this->target << " has been pardoned by Zaphod Beeblebrox." << endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSign() == false)
    {
        throw AForm::NotSignException;
    }
    else if (executor.getGrade() >= this->AForm::getGradeForExecute())
        throw AForm::GradeTooLowException;
    this->pardone();
}

