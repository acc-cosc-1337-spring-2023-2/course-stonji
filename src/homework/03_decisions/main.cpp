//write include statements
#include "decisions.h"

using std::cout; using std::cin;

int main() 
{
	auto grade = 0;
	auto selection = 0;

	display_menu();

	cout<<"Enter your selection: ";
	cin>>selection;

	switch(selection)
	{
		case 1:
			cout<<"Enter grade ";
			cin>>grade;
			if(grade < 0 || grade > 100)
			{
				cout<<"Number is out of range!";
			}
			else
			{
				cout<<"Letter grade is: "<<get_letter_grade_using_if(grade);
			}
			break;
		case 2: 
			cout<<"Enter grade ";
			cin>>grade;
			if(grade < 0 || grade > 100)
			{
				cout<<"Number is out of range!";
			}
			else
			{
				cout<<"Letter grade is: "<<get_letter_grade_using_switch(grade);
			}
			break;
			
		case 3:
			break;
		default:
			cout<<"Invalid selection";
	}

	return 0;
}