#include "AForm.hpp"

using std::string;
using std::endl;

TooLowException AForm::GradeTooLowException = TooLowException();
TooHighException AForm::GradeTooHighException = TooHighException();

AForm::AForm(std::string name, int gradeForSign, int gradeForExecute) : name(name)
                                                                      , gradeForSign(gradeForSign)
                                                                      , gradeForExecute(gradeForExecute)
                                                                      , sign(false)
{
    checkGrade(gradeForSign);
    checkGrade(gradeForExecute);
}

AForm::AForm() : name("") \
              , gradeForSign(150) \
              , gradeForExecute(150)
              , sign(false)
{
}
AForm::~AForm()
{
}
AForm::AForm(const AForm & form) : name(form.name)
                                , gradeForSign(form.gradeForSign)
                                , gradeForExecute(form.gradeForExecute)
                                , sign(form.sign)
{
}

void AForm::operator=(const AForm &form)
{
    const_cast<string&>(this->name) = form.name;
    const_cast<int&>(this->gradeForSign) = form.gradeForSign;
    const_cast<int&>(this->gradeForExecute) = form.gradeForExecute;
    this->sign = form.sign;
}

std::string AForm::getName(void) const
{
    return (this->name);
}

int AForm::getGradeForSign(void) const
{
    return (this->gradeForSign);
}

int AForm::getGradeForExecute(void) const
{
    return (this->gradeForExecute);
}

bool AForm::getSign(void) const
{
    return (this->sign);
}

void AForm::beSigned(Bureaucrat& bure)
{
    if (bure.getGrade() > this->gradeForSign)
        throw Bureaucrat::GradeTooLowException;
    this->sign = true;
}

std::ostream& operator<<(std::ostream& os, AForm& form)
{
    os << "AForm name:" << form.getName() 
       << ", grade required to sign:" << form.getGradeForSign()
       << ", grade required to execute:" << form.getGradeForExecute()
       << ", Signed:" << form.getSign()
       ;
    return (os);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "AForm name:" << form.getName() 
       << ", grade required to sign:" << form.getGradeForSign()
       << ", grade required to execute:" << form.getGradeForExecute()
       << ", Signed:" << form.getSign()
       ;
    return (os);
}

void AForm::checkGrade(int grade) const
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
}
