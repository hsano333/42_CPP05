#ifndef FORM_H
#define FORM_H

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int gradeForSign;
        const int gradeForExecute;
        bool sign;
        void checkGrade(int grade) const;
        
    public:
        Form(std::string name, int gradeForSign, int gradeForExecute);
        Form();
        ~Form();
        Form(const Form & form);
        Form& operator=(const Form& form);

        std::string getName() const;
        int getGradeForSign() const;
        int getGradeForExecute() const;
        bool getSign() const;
        void beSigned(Bureaucrat& bure);

        static TooHighException GradeTooHighException;
        static TooLowException GradeTooLowException;
};

std::ostream& operator<<(std::ostream& os, const Form& form);
std::ostream& operator<<(std::ostream& os, Form& form);
#endif
