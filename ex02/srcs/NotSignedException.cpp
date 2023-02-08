#include "NotSignedException.hpp"


NotSignedException::NotSignedException()
{
}
NotSignedException::~NotSignedException() throw()
{
}

const char* NotSignedException::what() const throw()
{
    return ("Not signed Exception");
}
