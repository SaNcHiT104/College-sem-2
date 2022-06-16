#include <bits/stdc++.h>
using namespace std;
char remove(char str[])
{
    int l = strlen(str);
    int i;
    for (i = 0; i < l; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for (int j = i; j < l; j++)
            {
                str[j] = str[j + 1];
            }
            l--;
            i--;
            str[l] = '\0';
        }
    }
    return str[l];
}
int main()
{
    char str[100];
    cout << "Enter a string in lower case : ";
    cin >> str;
    remove(str);
    cout << str;
    return 0;
}
