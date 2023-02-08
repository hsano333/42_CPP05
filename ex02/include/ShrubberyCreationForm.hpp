#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
    public:
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        void operator=(const ShrubberyCreationForm& form);
        virtual void execute(Bureaucrat const & executor);
};

#endif
