#include<iostream>
#include<cstring>
using namespace std;
char* concat(const char* s1, const char* s2)
{
    int n = strlen(s1) + strlen(s2);
    char *s = new char[n];
    for(int i = 0 ; i < strlen(s1) ; i++ )
        s[i] = s1[i];
    for(int j = strlen(s1); j < n; j++)
        s[j] = s2[j-strlen(s1)];
        return s;
}
int main()
{
    char s1[] = "Hello";
    char s2[]= "World";
    char* s = concat(s1,s2);
     for (int i = 0; i < strlen(s1)+ strlen(s2); i++)
        cout << s[i];
}
