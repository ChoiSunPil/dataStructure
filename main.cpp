#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Stack.cpp"
#include <vector>
#include "coffee.cpp"

using namespace std;

int main() {

    int array[] =  {4,2,2,5,3};
    Coffee coffee;
    coffee.solution(array,sizeof(array)/sizeof(int),3);
    return 0;

}
