// url : https://tlx.toki.id/contests/toc-beta-testing/problems/A

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif

    string a, b;
    cin >> a >> b;
    if (a.find(b) != string::npos) cout << "Tentu saja bisa!\n";
    else cout << "Wah, tidak bisa :(\n"; 
}
