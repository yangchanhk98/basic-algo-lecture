#include <bits/stdc++.h>

using namespace std;

//15552
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        cout << a + b << ' ';
    }
}

//10871
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, X;
//    cin >> N >> X;
//    for (int i = 0; i < N; ++i) {
//        int tmp;
//        cin >> tmp;
//        if (tmp < X) cout << tmp << ' ';
//    }
//}

//10869
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a, b;
//    cin >> a >> b;
//    cout << a + b << '\n';
//    cout << a - b << '\n';
//    cout << a * b << '\n';
//    cout << a / b << '\n';
//    cout << a % b << '\n';
//}

//10804
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int c[21];
//    for (int i = 0; i < 21; ++i) {
//        c[i] = i;
//    }
//    int a, b;
//    for (int i = 0; i < 10; ++i) {
//        cin >> a >> b;
//        for (int j = a; j <= (a + b) / 2; ++j) {
//            swap(c[j], c[a + b - j]);
//        }
//    }
//    for (int i = 1; i <= 20; i++) {
//        cout << c[i] << ' ';
//    }
//}

//10171
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cout << "\\    /\\\n"
//            " )  ( ')\n"
//            "(  /  )\n"
//            " \\(__)|";
//}

//10093
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    long long a, b;
//    cin >> a >> b;
//    if (a > b) {
//        long long t = a;
//        a = b;
//        b = t;
//    }
//    cout << max(0LL, b - a - 1) << '\n';
//    for (long long i = a + 1; i < b; ++i) {
//        cout << i << ' ';
//    }
//}

//9498
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int score;
//    cin >> score;
//    if (score >= 90) cout << 'A';
//    else if (score >= 80) cout << 'B';
//    else if (score >= 70) cout << 'C';
//    else if (score >= 60) cout << 'D';
//    else cout << 'F';
//}

//2753
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int year;
//    cin >> year;
//    cout << (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//}

//2752
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a[3];
//    for (int i = 0; i < 3; ++i) {
//        cin >> a[i];
//    }
//    sort(a, a + 3);
//    for (auto s: a)
//        cout << s << ' ';
//}

//2587
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int sum = 0;
//    int a[5];
//    for (int i = 0; i < 5; ++i) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    sort(a, a + 5);
//    cout << sum / 5 << '\n' << a[2];
//}

//2577
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a, b, c, n;
//    cin >> a >> b >> c;
//    n = a * b * c;
//    int k[10];
//    fill(k, k+10, 0);
//    while(n) {
//        k[n%10]++;
//        n /= 10;
//    }
//    for (auto s : k)
//        cout << s << '\n';
//}

//2576
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int sum = 0, mini = 100;
//    for (int i = 0; i < 7; ++i) {
//        int n;
//        cin >> n;
//        if (n % 2 == 1) {
//            sum += n;
//            mini = min(mini, n);
//        }
//    }
//    if (sum == 0)
//        cout << -1;
//    else
//        cout << sum << '\n' << mini;
//}

//2562
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int idx, num = 0;
//    for (int i = 1; i <= 9; ++i) {
//        int cnt;
//        cin >> cnt;
//        if (num < cnt) {
//            num = cnt;
//            idx = i;
//        }
//    }
//    cout << num << '\n' << idx;
//}

//2557
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cout << "Hello World!";
//}

//2490
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    for (int i = 0; i < 3; ++i) {
//        int a = 0;
//        int n;
//        for (int j = 0; j < 4; ++j) {
//            cin >> n;
//            if (n == 0) a++;
//        }
//        if (a == 0) a = 5;
//        cout << (char) ('A' + a - 1) << '\n';
//    }
//}

//2480
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a, b, c;
//    cin >> a >> b >> c;
//    if (a == b && b == c)
//        cout << 10000 + a * 1000;
//    else if (a == b || a == c)
//        cout << 1000 + a * 100;
//    else if (b==c)
//        cout << 1000 + b * 100;
//    else
//        cout << 100 * max(max(a, b), c);
//}

//2446
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = n ; i > 1; --i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//}

//2445
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            cout << '*';
//        }
//        for (int j = 0; j < 2 * (n - i); ++j) {
//            cout << ' ';
//        }
//        for (int j = 0; j < i; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//    for (int i = n - 1; i >= 1; --i) {
//        for (int j = 0; j < i; ++j) {
//            cout << '*';
//        }
//        for (int j = 0; j < 2 * (n - i); ++j) {
//            cout << ' ';
//        }
//        for (int j = 0; j < i; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//}

//2444
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//    for (int i = n - 1; i >= 1; --i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//}

//2443
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = n; i >= 1; --i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//}

//2442
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i - 1; ++j) {
//            cout << '*';
//        }
//        cout << '\n';
//    }
//}

//2441
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = n; i > 0; --i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < i; ++j) {
//            cout << "*";
//        }
//        cout << '\n';
//    }
//}

//2440
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = n; i > 0; --i) {
//        for (int j = 0; j < i; ++j) {
//            cout << "*";
//        }
//        cout << '\n';
//    }
//}

//2439
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < n - i; ++j) {
//            cout << " ";
//        }
//        for (int j = 0; j < i; ++j) {
//            cout << "*";
//        }
//        cout << '\n';
//    }
//}

//2438
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            cout << "*";
//        }
//        cout << '\n';
//    }
//}

//2309
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a[9];
//    int sum = -100;
//    for (int i = 0; i < 9; ++i) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    sort(a, a + 9);
//    for (int i = 0; i < 8; ++i) {
//        for (int j = i + 1; j < 9; ++j) {
//            if (a[i] + a[j] == sum) {
//                for (int k = 0; k < 9; ++k) {
//                    if (k == i || k == j) continue;
//                    cout << a[k] << '\n';
//                }
//                return 0;
//            }
//        }
//    }
//}

//1267
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    int y = 0, m = 0;
//    while (n--) {
//        int a;
//        cin >> a;
//        y += (a / 30 + 1) * 10;
//        m += (a / 60 + 1) * 15;
//    }
//    if (y > m) {
//        cout << "M " << m;
//    } else if (y < m) {
//        cout << "Y " << y;
//    } else {
//        cout << "Y M " << y;
//    }
//}

//1000
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int A, B;
//    cin >> A >> B;
//    cout << A + B;
//}
