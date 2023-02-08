#ifndef AFORM_H
#define AFORM_H

class AForm
{
    private:
    public:
        AForm();
        ~AForm();
        AForm(const AForm& form);
        void operator=(const AForm& form);
};

#endif
