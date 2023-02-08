#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        void robotomize(void) const;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& form);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif
