//write include statements
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto num = 0;
	auto option = 0;
	do
    {
        cout<<"\n\n\tMAIN MENU\n";
		cout<<"1 - Factorial\n";
		cout<<"2 - Greatest Common Divisor\n";
		cout<<"3 - Exit\n";
        cout<<"\nEnter menu option: ";
        cin>>option;
        
		if(option == 1)
		{
			cout<<"Enter a number to get the fractorial: \n";
			cin>>num;
			
			cout<<"\nThe factorial of "<<num<<" is: "<<factorial(num);
		}
		else if(option == 2)
		{
			auto num1 = 0;
			auto num2 = 0;
			cout<<"Enter two numbers to get the Greatest Common Divisor: \n";
			cin>>num1;
			cin>>num2;

			cout<<"\nThe Greatest Common Divisor between "<<num1<<" and "<<num2<<" is: "<<gcd(num1,num2);
		}
		else if(option == 3)
		{
			auto choice = 'n';
			cout<<"Are you sure you want to exit? (Y/N): ";
			cin>>choice;

			if(choice == 'y' || choice == 'Y')
			{
				cout<<"\nExiting program...\n";
			}
			else
			{
				cout<<"\nReturning to main menu...\n";
				option = 0;
			}
		}

    } while (option != 3);
	return 0;
}