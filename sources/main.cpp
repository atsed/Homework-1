#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
    
    stack<int> intStack;	   //создание переменной класса stack
    
    intStack.push(0);		   //добавление элемента в стек 	
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.push(5);
    intStack.push(6);
    intStack.push(7);
    intStack.push(8);
    intStack.push(9);
    
    cout << "ВЫВОД СТЕКА В КОНСОЛЬ: " << endl;
    intStack.print();
    
    for (int i = 0; i < 10; i++) {		//удаление элемента
        cout << intStack.pop() << endl;			
    }    
    return 0;
}
