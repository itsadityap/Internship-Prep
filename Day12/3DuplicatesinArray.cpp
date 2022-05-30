/*
    Date:              30/05/2022
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long int
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
int main()
{

    string s;
    cin >> s;
    map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    for (auto ele : mp)
    {
        if (ele.second > 1)
        {
            cout << ele.first << br;
        }
    }
}