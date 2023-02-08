#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& form);
        void operator=(const RobotomyRequestForm& form);
};

#endif
