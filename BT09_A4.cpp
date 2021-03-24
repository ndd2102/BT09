#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *pa = &a;
    cerr << a << ' ' << pa << endl;
    delete pa;
    cerr << a << ' ' << pa;
    return 0;
}
//delete không có tác dụng pa không phải là 1 biểu thức new array
