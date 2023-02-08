#include "NoFormException.hpp"


NoFormException::NoFormException()
{
}
NoFormException::~NoFormException() throw()
{
}
const char* NoFormException::what() const throw()
{
    return ("No Form Exception");
}
