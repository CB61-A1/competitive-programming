#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans = 0;

    cin >>n>>k;

    int scores[n];

    for (int i=0; i<n; i++) {
        cin >> scores[i];
    }
    for (int i=0; i<n; i++) {
        if (scores[i]>0 && scores[i]>=scores[k - 1]) {
		ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
