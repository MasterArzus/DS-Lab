//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//string s;
//int t, h, su, n, m, a[30][30], f[30], q[30], r[90];
//void tp(int x)
//{
//    for (int i = 1; i <= n; i++)
//    {
//        if (a[x][i] == 1 && r[i] > 0)
//        {
//            r[i]--;
//            f[i] = max(f[i], f[x] + 1);
//            su = max(su, f[i]);
//            if (r[i] == 0)
//                q[++t] = i;
//        }
//    }
//}
//
//int main()
//{
//    while (true)
//    {
//        cin >> n >> m;
//        if (n == 0 && m == 0)
//            break;
//
//        memset(a, 0, sizeof(a));
//        memset(f, 0, sizeof(f));
//        memset(q, 0, sizeof(q));
//        memset(r, 0, sizeof(r));
//        bool judge = true;
//        int ans = 0, cate = 0;
//
//        for (int i = 1; i <= m; i++)
//        {
//            int p = 1;
//            cin >> s;
//            int x = s[0] - 'A' + 1;
//            int y = s[2] - 'A' + 1;
//            a[x][y] = 1;
//            if (x == y && judge)
//            {
//                judge = false;
//                ans = i; cate = 1;
//            }
//            memset(r, 0, sizeof(r));
//            for (int j = 1; j <= n; j++)
//            {
//                f[j] = 1;
//                for (int k = 1; k <= n; k++)
//                    r[k] += a[j][k];
//            }
//            su = 0, t = 0;
//            for (int j = 1; j <= n; j++)
//                if (!r[j])
//                    q[++t] = j;
//            h = 0;
//            while (h < t)
//            {
//                h++;
//                tp(q[h]);
//            }
//            if (su == n && judge)
//            {
//                judge = false;
//                ans = i; cate = 2;
//            }
//            for (int j = 1; j <= n; j++)
//                if (r[j]) p = 0;
//            if (!p && judge)
//            {
//                judge = false;
//                ans = i; cate = 3;
//            }
//        }
//        if (judge)
//            cout << "Sorted sequence cannot be determined." << endl;
//        else if (cate == 1)
//            cout << "Inconsistency found after " << ans << " relations." << endl;
//        else if (cate == 2)
//        {
//            cout << "Sorted sequence determined after " << ans << " relations: ";
//            for (int j = 1; j <= n; j++)
//                printf("%c", q[j] + 64);
//            cout << "." << endl;
//        }
//        else if (cate == 3)
//            cout << "Inconsistency found after " << ans << " relations." << endl;
//    }
//    return 0;
//}