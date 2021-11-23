#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    int num;
    num = 7;
    ptr = &num;

    cout << "The pointer for the variable num is: ";
    cout << *ptr << endl;
}