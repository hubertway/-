
#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
    string s;
    map<char, int> mp; 
    cin >> s;
    for (int i = 0; i < s.length(); i++) {mp[s[i]]++; }
 
    int max = -1;
    char c;
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if (it->second > max) {
            max = it->second;
            c = it->first;
        }
    }
    cout << c << '\n' << max;
    return 0;
}
