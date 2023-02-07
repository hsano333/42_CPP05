#include "Bureaucrat.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    Bureaucrat bure;
    try
    {
        cout << "test1" << endl;
        bure = Bureaucrat("grade0", 0);
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << endl << "test2" << endl;
        bure = Bureaucrat("grade151", 151);
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << endl << "test3" << endl;
        bure = Bureaucrat("grade149", 149);
        cout << bure << endl;
        cout << "down grade" << endl;
        bure.decrementGrade();
        cout << bure << endl;
        cout << "down grade" << endl;
        bure.decrementGrade();
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }
    try
    {
        cout << endl << "test4" << endl;
        bure = Bureaucrat("grade2", 2);
        cout << bure << endl;
        cout << "up grade" << endl;
        bure.incrementGrade();
        cout << bure << endl;
        cout << "up grade" << endl;
        bure.incrementGrade();
    }
    catch(std::exception & e)
    {
        cout << e.what() << endl;
    }

    return (0);
}
