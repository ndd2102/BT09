#include<iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    //vì c không phải là 1 biểu thức new array nên lệnh delete c không xác định
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
