#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <istream>
#include <ostream>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Form.hpp"
//
class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        static TooHighException GradeTooHighException;
        static TooLowException GradeTooLowException;
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& bure);
        Bureaucrat& operator=(const Bureaucrat& bure);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
std::ostream& operator<<(std::ostream& os, Bureaucrat& f);

#endif
