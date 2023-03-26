//write include statement for decisions header
#include "decisions.h"

using std::cout; using std::cin;

//Write code for function(s) code here

void display_menu()
{
    cout<<"\n\tMAIN MENU\n";
	cout<<"1 - Letter grade using if\n";
	cout<<"2 - letter grade using switch\n";
	cout<<"3 - Exit\n";
}

char get_letter_grade_using_if(int grade)
{
    auto result = 'A';

    if(grade >= 90 && grade <= 100)
    {
        result = 'A';
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = 'B';
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = 'C';
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = 'D';
    }
    else
    {
        result = 'F';
    }

    return result;
}

char get_letter_grade_using_switch(int grade)
{
    auto result = 'A';

    switch(grade)
    {
        case 90 ... 100:
            result = 'A';
            break;
        case 80 ... 89:
            result = 'B';
            break;
        case 70 ... 79:
            result = 'C';
            break;
        case 60 ... 69:
            result = 'D';
            break;
        default:
            result = 'F';
            break;
    }
    return result;
}