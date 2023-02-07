#ifndef GRADETOOHIGHEXCEPTION_H
#define GRADETOOHIGHEXCEPTION_H
#include <exception>

class TooHighException : public std::exception
{
    public:
        TooHighException();
        ~TooHighException() throw();
        const char* what() const throw();
};
#endif
