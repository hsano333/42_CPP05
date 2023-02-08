#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        void pardone(void) const;
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& form);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& form);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif
