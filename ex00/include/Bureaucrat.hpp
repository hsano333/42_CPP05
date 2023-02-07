#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <istream>
#include <ostream>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat
{
    private:
        const static int test = 0;
        static const HighException GradeTooHighException;
        static const LowException GradeTooLowException;
        //static const int GradeTooHighException = 0;
        //static const int GradeTooLowException = 1;
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& bure);
        void operator=(const Bureaucrat& bure);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void operator<<(const Bureaucrat& bure);
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
std::ostream& operator<<(std::ostream& os, Bureaucrat& f);

#endif
