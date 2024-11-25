#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long int max_value = a[0];

    for (int i = 0; i < n-1; i++) {
        max_value = max(max_value, a[i+1]);
    }


    cout << max_value;

    return 0;
}
