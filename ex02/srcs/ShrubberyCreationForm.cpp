#include "ShrubberyCreationForm.hpp"
using std::string;

ShrubberyCreationForm::ShrubberyCreationForm(string name) : AForm(name, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form.getName(), 145, 137)
{
    //this->AForm::name = form.AForm::name;
}
void ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
    Bureaucrat bure = Bureaucrat("tmp", 1);
    if (form.getSign())
        this->beSigned(&bure);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this-> && executor.getGrade() < this->AForm::getGradeForExecute())
    {

    }


}
