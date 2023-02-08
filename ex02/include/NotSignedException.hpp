#ifndef NOTSIGNEDEXCEPTION_H
#define NOTSIGNEDEXCEPTION_H
#include <exception>

class NotSignedException : public std::exception
{
    public:
        NotSignedException();
        ~NotSignedException() throw();
        const char* what() const throw();
};
#endif
