#ifndef GRADEEXCEPTION_H
#define GRADEEXCEPTION_H
#include <string>

class GradeException
{
    private:
        std::string content;
    public:
        GradeException(std::string content);

};
#endif
