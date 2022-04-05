// TYPE* const const pointer to value
// others pointer to const value

#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    
    const int* protect_value1 = &a;
    int const* protect_value2 = &a;
    int* const protect_pointer = &a;
    
    cout << &a << endl;
    cout << protect_value1 << endl;
    cout << protect_value2 << endl;
    cout << protect_pointer << endl;
    cout << "--------" << endl;

    protect_value1 = &b;
    protect_value2 = &b;
    // protect_pointer = &b; // got compile error
    
    cout << &b << endl;
    cout << protect_value1 << endl;
    cout << protect_value2 << endl;
    cout << "*" <<protect_pointer << "*" << endl;

    return 0;
}
