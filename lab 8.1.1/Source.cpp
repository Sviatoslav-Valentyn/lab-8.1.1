#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool Search(const char* str)
{
    for (size_t i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
    {
        if (('Q' == str[i] && 'S' == str[i + 1]) ||
            ('S' == str[i] && 'Q' == str[i + 1]))
            return true;
        else
            return false;
    }
}
char* Replace(char* R, const char* str, char* s)
{
    int i = 0;
    size_t len = strlen(str);
    char* tmp = new char[len * 4 / 3 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
    {
        if ((str[i] == 'S' && str[i + 1] == 'Q') ||
            (str[i] == 'Q' && str[i + 1] == 'S'))
        {
            strcat(s, "***");
            s += 3;
            i++;
        }
        else
        {
            *s++ = str[i];
            *s = '\0';
        }
    }
    *s++ = str[i++];
    *s++ = str[i++];
    *s = '\0';
    return R;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (Search(str))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    char* R1 = new char[151];
    R1[0] = '\0';
    char* R2;
    R2 = Replace(R1, str, R1);
    cout << "Modified string (result): " << R2 << endl;
    return 0;
}