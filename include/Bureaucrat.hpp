#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>

using std::string;

class Bureaucrat
{
    private:
        const string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        string getName();
        string getGrade();
        void incrementGrade();
        void decrementGrade();
        

};

#endif
