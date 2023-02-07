#include "Bureaucrat.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    Bureaucrat bure;
    try
    {
        bure = Bureaucrat("test0", 0);
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }
    try
    {
        bure = Bureaucrat("test151", 151);
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }
    try
    {
        bure = Bureaucrat("test149", 149);
        cout << "name:" << bure.getName() << " grade:" << bure.getGrade() << endl;
        cout << "down grade" << endl;
        bure.decrementGrade();
        cout << "name:" << bure.getName() << " grade:" << bure.getGrade() << endl;
        cout << "down grade" << endl;
        bure.decrementGrade();
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }
    try
    {
        bure = Bureaucrat("test2", 2);
        cout << "name:" << bure.getName() << " grade:" << bure.getGrade() << endl;
        cout << "up grade" << endl;
        bure.incrementGrade();
        cout << "name:" << bure.getName() << " grade:" << bure.getGrade() << endl;
        cout << "up grade" << endl;
        bure.incrementGrade();
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }

    return (0);
}
