#include <iostream>

using std::cout;

int main() 
{
	//pointer points to an address on the stack
	int num = 5; //stack variable --- local variables to functions
	int* num_ptr = &num;

	//creating dynamic memory(lives on the heap) with pointers
	//create memory
	int* num_ptr2 = new int(10);
	//use memory / data at that memory location
	cout<<*num_ptr2<<"\n";
	//delete memory
	delete num_ptr2;
	return 0;
}