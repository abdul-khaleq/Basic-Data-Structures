#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);

        int countMax = INT_MIN;
        string countWord = " ";

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > countMax)
            {
                countMax = mp[word];
                countWord = word;
            }
        }
        cout << countWord << " " << countMax << endl;
    }

    return 0;
}
