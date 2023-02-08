#ifndef AFORM_H
#define AFORM_H

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int gradeForSign;
        const int gradeForExecute;
        bool sign;
        virtual void checkGrade(int grade) const;
    public:
        AForm(std::string name, int gradeForSign, int gradeForExecute);
        AForm();
        virtual ~AForm();
        AForm(const AForm & form);
        void operator=(const AForm& form);

        virtual std::string getName() const;
        virtual int getGradeForSign() const;
        virtual int getGradeForExecute() const;
        virtual bool getSign() const;
        virtual void beSigned(Bureaucrat& bure);
        virtual void execute(Bureaucrat const & executor) = 0;

        static TooHighException GradeTooHighException;
        static TooLowException GradeTooLowException;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);
std::ostream& operator<<(std::ostream& os, AForm& form);
#endif
