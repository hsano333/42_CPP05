#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    Form form1 = Form("form1", 1, 1);
    Form form10 = Form("form10", 10, 10);
    Form form150 = Form("form150", 150, 150);
    cout << form1 << endl;
    cout << form10 << endl;
    cout << form150 << endl;
    Bureaucrat bure1 = Bureaucrat("bure1", 1);
    Bureaucrat bure10 = Bureaucrat("bure10", 10);
    Bureaucrat bure150 = Bureaucrat("bure150", 150);
    cout << bure1 << endl;
    cout << bure10 << endl;
    cout << bure150 << endl;

    try {
        cout << "test1" << endl;
        Form form010 = Form("form1", 0, 10);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test2" << endl;
        Form form15110 = Form("form1", 151, 10);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test3" << endl;
        Form form100 = Form("form1", 10, 0);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test4" << endl;
        Form form10151 = Form("form1", 10, 151);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test5" << endl;
        bure1.signForm(form1);
        bure1.signForm(form10);
        bure1.signForm(form150);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test6" << endl;
        bure10.signForm(form1);
        bure10.signForm(form10);
        bure10.signForm(form150);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    try {
        cout << endl << "test7" << endl;
        bure150.signForm(form1);
        bure150.signForm(form10);
        bure150.signForm(form150);
    }
    catch(std::exception & e) {
        cout << e.what() << endl;
    }
    return (0);
}
