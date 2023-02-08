#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
using std::string;
using std::ios;
using std::cout;
using std::endl;

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("shrubbery_creation", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery_creation", 145, 137), target("")
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form.getName(), 145, 137)
{
    this->target = form.target;
}
void ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
    this->target = form.target;
    Bureaucrat bure = Bureaucrat("tmp", 1);
    if (form.getSign())
        this->beSigned(bure);
}

void ShrubberyCreationForm::writeAsciiTrees(void) const
{
    std::fstream out;
    const std::string filename = this->target + "_shrubbery";
    try
    {
        out.open(filename.c_str(), ios::out | ios::trunc);
        if (!out.is_open())
        {
            cout << "Error: can't open " << filename << std::endl;
        }
        out << "      _-_ " << endl;
        out << "   /~~   ~~\\ " << endl;
        out << " /~~         ~~\\" << endl;
        out << "{               }" << endl;
        out << " \\  _-     -_  /" << endl;
        out << "   ~  \\\\ //  ~" << endl;
        out << "_- -   | | _- _" << endl;
        out << "  _ -  | |   -_" << endl;
        out << "      // \\" << endl;
        out.close();
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSign() == false)
        throw AForm::NotSignException;
    else if (executor.getGrade() >= this->AForm::getGradeForExecute())
        throw AForm::GradeTooLowException;
    this->writeAsciiTrees();
}
