//
// Created by yangchanhk98 on 2023-02-07.
//

#include <bits/stdc++.h>

using namespace std;

//5397
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        list<char> l;
        auto cursor = l.end();
        for (auto c: s) {
            if (c == '-') {
                if (cursor != l.begin()) cursor = l.erase(--cursor);
            } else if (c == '<') {
                if (cursor != l.begin()) cursor--;
            } else if (c == '>') {
                if (cursor != l.end()) cursor++;
            } else {
                l.insert(cursor, c);
            }
        }
        for (auto c : l) {
            cout << c;
        }
        cout << '\n';
    }
}

//1158
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, K;
//    cin >> N >> K;
//    int nxt[N + 1];
//    for (int i = 0; i <= N; ++i) {
//        nxt[i] = i + 1;
//    }
//    nxt[N] = 1;
//
//    int cur = K;
//    int prev = K == 1 ? N : K - 1;
//    cout << '<';
//    while (N-- > 1) {
//        cout << cur << ", ";
//        nxt[prev] = nxt[cur];
//        for (int i = 0; i < K - 1; ++i) {
//            prev = nxt[prev];
//        }
//        cur = nxt[prev];
//    }
//    cout << cur << '>';
//}

//1406
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    string init;
//    cin >> init;
//    list<char> l;
//    for (auto c: init) l.push_back(c);
//    list<char>::iterator cursor = l.end();
//
//    int n;
//    cin >> n;
//    while (n--) {
//        char op;
//        cin >> op;
//        if (op == 'L') {
//            if (cursor != l.begin()) cursor--;
//        } else if (op == 'D') {
//            if (cursor != l.end()) cursor++;
//        } else if (op == 'B') {
//            if (cursor != l.begin()) cursor = l.erase(--cursor);
//        } else {
//            char add;
//            cin >> add;
//            l.insert(cursor, add);
//        }
//    }
//    for (auto i : l) cout << i;
//}