#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int words, totalSize, wordSize, a;
    string str;

    while (getline(cin, str))
    {
        words = totalSize = wordSize = a = 0;

        while (a != str.size() && str[a] == ' ')
            a++;

        for (; a < str.size(); a++)
        {
            if ((int(str[a]) >= 97 && int(str[a]) <= 122) || (int(str[a]) >= 65 && int(str[a]) <= 90))
            {
                wordSize++;
            }
            else if (str[a] == ' ')
            {
                if (wordSize)
                {
                    
                    words++;
                    totalSize += wordSize;
                    wordSize = 0;
                }

                while (a != str.size() && str[a+1] == ' ')
                    a++;
            }
            else if (str[a] == '.' && (a + 1 == str.size() || str[a + 1] == ' '))
            {
                continue;
            }
            else
            {
                wordSize = 0;
                while (a != str.size() && str[a] != ' ')
                    a++;
            }
        }

        if (wordSize)
        {
            totalSize += wordSize;
            words++;
        }
        if (words == 0)
        {
            cout << 250 << endl;
            continue;
        }

        wordSize = totalSize / words;

        if (wordSize <= 3)
            cout << 250 << endl;
        else if (wordSize == 4 || wordSize == 5)
            cout << 500 << endl;
        else
            cout << 1000 << endl;
    }
}