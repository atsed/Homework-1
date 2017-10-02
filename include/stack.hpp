#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <cassert>

using namespace std;

template <typename T>
class stack{
private:
    T * array_;
    size_t array_size_;
    size_t count_;
	
public:
    stack(){
        array_size_ = 10;
        array_ = new T[array_size_];
        count_ = 0;
    }
    
    size_t count() const{             //находим количество элементов в стеке
        return count_;
    }
    
    void push(T const &value){             //перераспределение памяти
        if (count_ == array_size_){
            T *array_2 = new T[2 * array_size_];
            
            for (size_t i = 0; i != array_size_; i++)
                array_2[i] = array_[i];
            
            delete[] array_;
            array_ = array_2;
        }
        
        array_[count_++] = value;
    }
    
    T pop(){                             //удалить элемент 
        assert(count_ != 0);
        return array_[--count_];
    }
    
    void print(){                         //печатаем элементы стека
        for (size_t i=count_-1; i>=0; i--)
            cout << array_[i] << endl;
    }
};

#endif
