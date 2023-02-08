#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& form);
        void operator=(const PresidentialPardonForm& form);
};

#endif
