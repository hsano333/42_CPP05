#include "GradeTooLowException.hpp"

TooLowException::TooLowException()
{
}
TooLowException::~TooLowException() throw()
{
}

const char *TooLowException::what() const throw()
{
    return ("Grade too low Exception");
}
