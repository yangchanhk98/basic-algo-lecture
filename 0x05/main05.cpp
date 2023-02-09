#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

//17298
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    int ans[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    stack<int> s;
    while(n--) {
        while(!s.empty() && s.top() <= a[n]) {
            s.pop();
        }
        ans[n] = s.empty() ? -1 : s.top();
        s.push(a[n]);
    }
    for (int a : ans) cout << a << " ";
}

//10773
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int k;
//    cin >> k;
//    stack<int> s;
//    while(k--) {
//        int n;
//        cin >> n;
//        if (n == 0) {
//            s.pop();
//        } else {
//            s.push(n);
//        }
//    }
//    int ans = 0;
//    while(!s.empty()) {
//        ans += s.top();
//        s.pop();
//    }
//    cout << ans;
//}

//6549
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while (true) {
//        int n;
//        cin >> n;
//        if (n == 0) break;
//        long long ans = 0;
//        stack<pair<int, int>> s;
//        for (int i = 0; i < n; i++) {
//            int h;
//            cin >> h;
//            int idx = i;
//            while (!s.empty() && s.top().X >= h) {
//                ans = max(ans, 1LL * (i - s.top().Y) * s.top().X);
//                idx = s.top().Y;
//                s.pop();
//            }
//            s.push({h, idx});
//        }
//        while (!s.empty()) {
//            ans = max(ans, 1LL * (n - s.top().Y) * s.top().X);
//            s.pop();
//        }
//        cout << ans << '\n';
//    }
//}

//6198
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    int h[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> h[i];
//    }
//    long long ans = 0;
//    stack<pair<int, int>> s;
//    while (n--) {
//        int cnt = 1;
//        while (!s.empty() && s.top().X <= h[n]) {
//            cnt += s.top().Y;
//            if (s.top().X != h[n])
//                ans += s.top().Y;
//            s.pop();
//        }
//        s.push({h[n], cnt});
//    }
//    cout << ans;
//}

//3015
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    stack<pair<int, int>> S;
//    long long ans = 0;
//
//    while (n--) {
//        int h;
//        cin >> h;
//        int same = 1;
//        while (!S.empty() && S.top().X <= h) {
//            ans += S.top().Y;
//            if (S.top().X == h) same += S.top().Y;
//            S.pop();
//        }
//        if (!S.empty()) ans++;
//        S.push({h, same});
//    }
//    cout << ans;
//}

//2493
//#define X first
//#define Y second
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N;
//    cin >> N;
//    stack<pair<int, int>> tower;
//    tower.push({100000001, 0});
//    for (int i = 1; i <= N; ++i) {
//        int height;
//        cin >> height;
//        while (tower.top().X < height)
//            tower.pop();
//        cout << tower.top().Y << " ";
//        tower.push({height, i});
//    }
//}

//1874
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    int i = 1;
//    stack<int> s;
//    queue<char> ans;
//    while (n--) {
//        int cur;
//        cin >> cur;
//
//        if (cur >= i) {
//            while (cur >= i) {
//                s.push(i++);
//                ans.push('+');
//            }
//            s.pop();
//            ans.push('-');
//        } else {
//            if (s.top() != cur) {
//                cout << "NO";
//                return 0;
//            }
//            s.pop();
//            ans.push('-');
//        }
//    }
//    while(!ans.empty()) {
//        cout << ans.front() << '\n';
//        ans.pop();
//    }
//}

//10828
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    int stack[10000];
//    int pos = 0;
//    while(n--) {
//        string op;
//        cin >> op;
//        if (op == "pop") {
//            if (pos == 0)
//                cout << -1 << '\n';
//            else
//                cout << stack[--pos] << '\n';
//        } else if (op == "size") {
//            cout << pos << '\n';
//        } else if (op == "empty") {
//            cout << ((pos == 0) ? 1 : 0) << '\n';
//        } else if (op == "top") {
//            if (pos == 0)
//                cout << -1 << '\n';
//            else
//                cout << stack[pos - 1] << '\n';
//        } else {
//            int x;
//            cin >> x;
//            stack[pos++] = x;
//        }
//    }
//}