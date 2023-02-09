//
// Created by yangchanhk98 on 2023-02-02.
//
#include <bits/stdc++.h>

using namespace std;

//13300
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, ans = 0;
    cin >> N >> K;

    int S, Y, a[2][6];
    for (int i = 0; i < 2; ++i) {
        fill(a[i], a[i] + 6, 0);
    }
    for (int i = 0; i < N; ++i) {
        cin >> S >> Y;
        a[S][Y - 1]++;
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            int n = a[i][j];
            ans += n / K + (n % K != 0);
        }
    }
    cout << ans;
}

//11328
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    string s1, s2;
//    int N;
//    cin >> N;
//    while (N--) {
//        cin >> s1 >> s2;
//        int a[26] = {};
//        for (auto c: s1) {
//            a[c - 'a']++;
//        }
//        for (auto c: s2) {
//            a[c - 'a']--;
//        }
//        bool possible = true;
//        for (int i: a) {
//            if (i != 0) {
//                possible = false;
//                break;
//            }
//        }
//        if (possible)
//            cout << "Possible" << '\n';
//        else
//            cout << "Impossible" << '\n';
//    }
//}

//10807
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, ans = 0;
//    short v;
//    cin >> n;
//    short a[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    cin >> v;
//    for (int i = 0; i < n; ++i) {
//        ans += v == a[i];
//    }
//    cout << ans;
//}

//3273
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, t;
//    cin >> n;
//    bool a[1000001];
//    for (int i = 0; i < n; ++i) {
//        cin >> t;
//        a[t] = true;
//    }
//    int x, ans = 0;
//    cin >> x;
//    for (int i = max(0, x - 1000000); i <= (x - 1) / 2; ++i) {
//        ans += a[i] && a[x - i];
//    }
//    cout << ans;
//}

//1919
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int a[26] = {}, b[26] = {};
//    string s1, s2;
//    cin >> s1 >> s2;
//    for (auto c: s1) {
//        a[c - 'a']++;
//    }
//    for (auto c: s2) {
//        b[c - 'a']++;
//    }
//    int ans = 0;
//    for (int i = 0; i < 26; ++i) {
//        ans += abs(a[i] - b[i]);
//    }
//    cout << ans;
//}

//1475
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int freq[10];
//    fill(freq, freq + 10, 0);
//    string s;
//    cin >> s;
//    for (auto c: s)
//        freq[c - '0']++;
//    int a = freq[6] + freq[9];
//    a = a / 2 + a % 2;
//    freq[6] = a;
//    int result = 0;
//    for (int i = 0; i < 9; ++i) {
//        if (freq[i] > result)
//            result = freq[i];
//    }
//    cout << result;
//}

//10808
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int freq[26];
//    fill(freq, freq+26, 0);
//    string s;
//    cin >> s;
//    for (auto c: s)
//        freq[c-'a']++;
//    for (int i = 0; i < 26; ++i) {
//        cout << freq[i] << ' ';
//    }
//}

//2577
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int a = 1;
//    int cnt;
//    for (int i = 0; i < 3; i++) {
//        cin >> cnt;
//        a *= cnt;
//    }
//    string s = to_string(a);
//    int freq[10];
//    fill(freq, freq + 10, 0);
//    for (char c: s) {
//        freq[c - '0']++;
//    }
//    for (int i = 0; i < 10; ++i) {
//        cout << freq[i] << '\n';
//    }
//}
