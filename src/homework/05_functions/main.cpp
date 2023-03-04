#include "func.h"

int main() 
{
	string dna;
	char choice = 'y';

	while (choice == 'y' || choice == 'Y')
    {
		cout << "\nMenu\n";
		cout <<"------------------------\n";
        cout << "1 - Get GC Content \n";
		cout << "2 - Get DNA Complement \n";
		cout << "3 - Exit \n";
        int option;
        cin >> option;

        if (option == 1)
        {
			cout << "Enter a DNA string: ";
        	cin >> dna;
            double gcContent = get_gc_content(dna);
            cout << "GC content: " << gcContent << "\n";
        }
        else if (option == 2)
        {
			cout << "Enter a DNA string: ";
        	cin >> dna;
            string complement = get_dna_complement(dna);
            cout << "DNA complement: " << complement << "\n";
        }
        else if (option == 3)
        {
            cout << "Exiting..." << "\n";
			break;
        }
		else
		{
			cout << "Invalid option" << "\n";
		}

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    }

	return 0;
}