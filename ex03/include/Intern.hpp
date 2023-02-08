#ifndef INTERN_H
#define INTERN_H
#include <string>
#include <AForm.hpp>

enum EForm
{
    SHRUBBERYCREATION,
    ROBOTOMYREQUEST,
    PRESIDENTIALPARDON,
    NONE,
};

typedef struct dict
{
    std::string key;
    EForm value;
}   s_dict;

class Intern
{
    private:
        EForm searchForm(std::string name);
    public:
        Intern();
        ~Intern();
        Intern(const Intern& intern);
        Intern& operator=(const Intern& intern);
        AForm * makeForm(std::string name, std::string target);
};

#endif
