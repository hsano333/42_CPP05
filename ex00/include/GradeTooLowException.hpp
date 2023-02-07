#ifndef GRADETOOLOWEXCEPTION_H
#define GRADETOOLOWEXCEPTION_H
#include <exception>

class TooLowException : public std::exception
{
    public:
        TooLowException();
        ~TooLowException() throw();
        const char* what() const throw();
};
#endif
