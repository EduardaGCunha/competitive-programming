/*
ID: komarov1
TASK: cownomics
LANG: C++11
*/


#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ofstream cout ("cownomics.out");
    ifstream cin ("cownomics.in");


    int n, m;
    cin >> n >> m;
    vector<string> spotty(n);
    vector<string> plain(n);

    for (int i = 0; i < n; ++i) cin >> spotty[i];
    for (int i = 0; i < n; ++i) cin >> plain[i];


    set<string> forspotty;

    int res=0;
    string s(3, '0');
    bool good;

    for (int i = 0; i < m; ++i) {
        for (int j = i+1; j < m; ++j) {
            for (int k = j+1; k < m; ++k) {
                good = true;
                forspotty.clear();
                for (int cow = 0; cow < n; ++cow) {
                    s[0] = spotty[cow][i]; s[1] = spotty[cow][j]; s[2] = spotty[cow][k];
                    forspotty.insert(s);
                }

                for (int cow = 0; cow < n; ++cow) {
                    s[0] = plain[cow][i]; s[1] = plain[cow][j]; s[2] = plain[cow][k];
                    if (forspotty.count(s)) {
                        good = false;
                        break;
                    }
                }

                if (good) ++res;
            }
        }
    }

    cout << res << '\n';

    return 0;
}