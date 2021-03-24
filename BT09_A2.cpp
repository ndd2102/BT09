#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    //vì p2 trỏ đến p,nên xóa p thì k còn vùng bộ nhớ p2 trỏ đến
    *p2 = 100;
    cout << *p2;
    delete p2;
}
