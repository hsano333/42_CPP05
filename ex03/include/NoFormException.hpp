#ifndef NOFORMEXCEPTION_H
#define NOFORMEXCEPTION_H
#include <exception>
#include <string>

class NoFormException : public std::exception
{
    public:
        NoFormException();
        ~NoFormException() throw();
        const char* what() const throw();
};
#endif
