#include <bits/stdc++.h>

using namespace std;

//18258
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    queue<int> q;
    while (n--) {
        string op;
        cin >> op;
        if (op == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if (op == "size") {
            cout << q.size() << '\n';
        } else if (op == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        } else if (op == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
            }
        } else if (op == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.back() << '\n';
            }
        } else {
            int x;
            cin >> x;
            q.push(x);
        }
    }
}

//2164
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    queue<int> q;
//    for (int i = 1; i <= n; ++i) {
//        q.push(i);
//    }
//    n--;
//    while(n--) {
//        q.pop();
//        q.push(q.front());
//        q.pop();
//    }
//    cout << q.front();
//}

//10845
//const int MX = 10005;
//int dat[MX];
//int head = 0, tail = 0;
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    while (n--) {
//        string op;
//        cin >> op;
//        if (op == "pop") {
//            if (head == tail)
//                cout << -1 << '\n';
//            else
//                cout << dat[head++] << '\n';
//        } else if (op == "size") {
//            cout << tail - head << '\n';
//        } else if (op == "empty") {
//            cout << (head == tail ? 1 : 0 ) << '\n';
//        } else if (op == "front") {
//            if (head == tail)
//                cout << -1 << '\n';
//            else
//                cout << dat[head] << '\n';
//        } else if (op == "back") {
//            if (head == tail)
//                cout << -1 << '\n';
//            else
//                cout << dat[tail - 1] << '\n';
//        } else {
//            cin >> dat[tail++];
//        }
//    }
//}