#include <iostream>
#include <string>
using namespace std;

void search(string &pat, string &txt)
{
    int M = pat.size();
    int N = txt.size();

    // Loop to slide pat[] one by one
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        // Check for pattern match
        for (j = 0; j < M; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }

        // If pattern matches at index i
        if (j == M)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main()
{

    string txt1 = "beautyandthebeast";
    string pat1 = "ea";

    search(pat1, txt1);

    return 0;
}