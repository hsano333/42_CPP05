#include "GradeTooHighException.hpp"

TooHighException::TooHighException()
{
}
TooHighException::~TooHighException() throw()
{
}

const char *TooHighException::what() const throw()
{
    return ("Grade too high Exception");
}
