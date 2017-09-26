#include <iostream>
#include "stack.h"
using namespace std;

int main() 
{
	cout << "ЭЛЕМЕНТЫ СТЕКА: " << endl;
		
	stack<int> intStack;
	intStack.push(0);
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.push(4);

	for (int i = 0; i < 4; i++) 
	{
		cout << intStack.pop() << endl;
	}
		 
	cout << "Номер элемента стека: " << intStack.count() << endl;
	return 0;	
}
