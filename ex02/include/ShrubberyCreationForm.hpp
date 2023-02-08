#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        void writeAsciiTrees(void) const;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif
