//
// Created by 최선필 on 03/02/2019.
//

#include "Stack.h"
using namespace std;

template <typename T>
int Stack<T>::getSize() {
return top+1;

}
template <typename T>
bool Stack<T>::isEmpty() {
if(top == -1)
    return true;
else
    return false;
}
template <typename T>
T Stack<T>::pop() {
    if(!isEmpty())
    return array[top--];
    else
        return 0;
}
template <typename T>
void Stack<T>::push(T node)
{
    top++;
    array[top] =  node;
    if(getSize() == capacity)
    {

       T * tmp = new T[capacity*2];
       for(int i = 0 ; i < capacity ; i++)
       {
         tmp[i] = array[i];

       }
       delete array;
       array = tmp;
    }
}

template <typename T>
Stack<T>::Stack() {
top = -1;
capacity =20;
array = new T[capacity];
}
template <typename T>
Stack<T>::~Stack() {
    delete array;
cout<<"delete stack"<<endl;
}
