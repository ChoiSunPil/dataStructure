#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Stack.cpp"
using namespace std;
int main() {
    srand(time(NULL));
    Stack<int> stack;
    for(int  i = 0 ; i <30 ; i++)
    {
        stack.push(rand()%10);
    }
    for(int  i = 0 ; i <31 ; i++)
    {
        cout<<stack.pop()<<endl;
    }
    cout<<" empty: ";
    cout<<stack.isEmpty()<<endl;


    return 0;
}
