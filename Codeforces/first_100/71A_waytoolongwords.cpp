#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; i++)
    {

        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        string w = words[i];
        int length = w.length();
        if (length > 10)
        {
            cout << w[0] << (length - 2) << w[length - 1] << "\n";
        }
        else
        {
            cout << w << "\n";
        }
    }
    return 0;
}