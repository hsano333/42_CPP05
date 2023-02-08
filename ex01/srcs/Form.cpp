#include "Form.hpp"

using std::string;
using std::endl;

TooLowException Form::GradeTooLowException = TooLowException();
TooHighException Form::GradeTooHighException = TooHighException();

Form::Form(std::string name, int gradeForSign, int gradeForExecute) : name(name)
                                                                      , gradeForSign(gradeForSign)
                                                                      , gradeForExecute(gradeForExecute)
                                                                      , sign(false)
{
    checkGrade(gradeForSign);
    checkGrade(gradeForExecute);
}

Form::Form() : name("") \
              , gradeForSign(150) \
              , gradeForExecute(150)
              , sign(false)
{
}
Form::~Form()
{
}
Form::Form(const Form & form) : name(form.name)
                                , gradeForSign(form.gradeForSign)
                                , gradeForExecute(form.gradeForExecute)
                                , sign(form.sign)
{
}

void Form::operator=(const Form &form)
{
    const_cast<string&>(this->name) = form.name;
    const_cast<int&>(this->gradeForSign) = form.gradeForSign;
    const_cast<int&>(this->gradeForExecute) = form.gradeForExecute;
    this->sign = form.sign;
}

std::string Form::getName(void) const
{
    return (this->name);
}

int Form::getGradeForSign(void) const
{
    return (this->gradeForSign);
}

int Form::getGradeForExecute(void) const
{
    return (this->gradeForExecute);
}

bool Form::getSign(void) const
{
    return (this->sign);
}

void Form::beSigned(Bureaucrat* bure)
{
    if (bure->getGrade() > this->gradeForSign)
        throw Bureaucrat::GradeTooLowException;
    this->sign = true;
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
    os << "Form name:" << form.getName() 
       << ", grade required to sign:" << form.getGradeForSign()
       << ", grade required to execute:" << form.getGradeForExecute()
       << ", Signed:" << form.getSign()
       ;
    return (os);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form name:" << form.getName() 
       << ", grade required to sign:" << form.getGradeForSign()
       << ", grade required to execute:" << form.getGradeForExecute()
       << ", Signed:" << form.getSign()
       ;
    return (os);
}

void Form::checkGrade(int grade) const
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
}
