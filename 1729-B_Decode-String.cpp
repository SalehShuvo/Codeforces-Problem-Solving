#include <iostream>
                                                        // not completed
using namespace std;

int main()
{
    int q, n, i, j = 0;
    char *t, *s;
    t = (char *)malloc(1 * sizeof(char));
    s = (char *)malloc(1 * sizeof(char));

    cin >> q;

    while (q--)
    {
        cin >> n;
        t = (char *)realloc(t, n * sizeof(char));
        s = (char *)realloc(s, n * sizeof(char));
        cin >> t;
        for (i = 0; i < n; i++)
        {
            if (*(t + i) == '0' && *(t + i + 1) == '0')
            {
                if (*(t + i - 1) == '1')
                {
                    *(s + j++) = 'j';
                }
                if (*(t + i - 1) == '2')
                {
                    *(s + j++) = 't';
                }
            }
            if (*(t + i) == '0')
            {
                switch (*(t + i - 2))
                {
                case '1':
                    switch (*(t + i - 1))
                    {
                    case '1':
                        *(s + j++) = 'k';
                        break;
                    case '2':
                        *(s + j++) = 'l';
                        break;
                    case '3':
                        *(s + j++) = 'm';
                        break;
                    case '4':
                        *(s + j++) = 'n';
                        break;
                    case '5':
                        *(s + j++) = 'o';
                        break;
                    case '6':
                        *(s + j++) = 'p';
                        break;
                    case '7':
                        *(s + j++) = 'q';
                        break;
                    case '8':
                        *(s + j++) = 'r';
                        break;
                    case '9':
                        *(s + j++) = 's';
                        break;
                    }
                    break;
                case '2':
                    switch (*(t + i - 1))
                    {
                    case '1':
                        *(s + j++) = 'u';
                        break;
                    case '2':
                        *(s + j++) = 'v';
                        break;
                    case '3':
                        *(s + j++) = 'w';
                        break;
                    case '4':
                        *(s + j++) = 'x';
                        break;
                    case '5':
                        *(s + j++) = 'y';
                        break;
                    case '6':
                        *(s + j++) = 'z';
                        break;
                    }
                    break;
                }
            }
            else
            {
                switch (*(t + i))
                {
                case '1':
                    *(s + j++) = 'a';
                    break;
                case '2':
                    *(s + j++) = 'b';
                    break;
                case '3':
                    *(s + j++) = 'c';
                    break;
                case '4':
                    *(s + j++) = 'd';
                    break;
                case '5':
                    *(s + j++) = 'e';
                    break;
                case '6':
                    *(s + j++) = 'f';
                    break;
                case '7':
                    *(s + j++) = 'g';
                    break;
                case '8':
                    *(s + j++) = 'h';
                    break;
                case '9':
                    *(s + j++) = 'i';
                    break;
                }
            }
        }
        for (i = 0; i < j; i++)
        {
            cout << *(s + i);
        }
        cout << endl;
    }
    return 0;
}