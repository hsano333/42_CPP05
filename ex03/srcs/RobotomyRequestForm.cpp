/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsano <hsano@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:53:41 by hsano             #+#    #+#             */
/*   Updated: 2023/02/09 04:11:53 by sano             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using std::string;
using std::ios;
using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm(string target) : AForm("robotomy_request", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy_request", 72, 45), target("")
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form.getName(), 72, 45)
{
    this->target = form.target;
}
void RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
    this->target = form.target;
    Bureaucrat bure = Bureaucrat("tmp", 1);
    if (form.getSign())
        this->beSigned(bure);
}

void RobotomyRequestForm::robotomize(void) const
{
    std::fstream outstream;
    static unsigned int random_int = 1;

    random_int++;
    srandom((unsigned int)(time(NULL)) * random_int);
    if (random() % 2 == 0)
        cout << this->target << "'s robotomization is Success" << endl;
    else
        cout << this->target << "'s robotomization is Failure" << endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->AForm::getSign() == false)
        throw AForm::NotSignException;
    else if (executor.getGrade() >= this->AForm::getGradeForExecute())
        throw AForm::GradeTooLowException;
    this->robotomize();
}

