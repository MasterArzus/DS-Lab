//#include <stack>
//#include<queue>
//#include<string>
//#include <iostream>
//using namespace std;
//int N;
//typedef vector<int> vi;
//int temp;
//
//int main()
//{
//    int N;
//    cin >> N;
//    string str;
//    while (N >= 0)
//    {
//        stack<int> s;
//        queue<int> q;
//        vi v;
//        vi res;
//        getline(cin, str);
//        for (int i = 0; i < str.length(); i++)
//        {
//            int temp_res = 0;
//
//             //读取数字
//            if ('0' <= str[i] && str[i] <= '9')
//            {
//                if (str[i + 1] < '0' || str[i + 1] > '9')
//                {
//                    temp_res = str[i] - '0';
//                }
//                else
//                {
//                    while ('0' <= str[i + 1] && str[i + 1] <= '9')
//                    {
//                        temp_res *= 10;
//                        temp = str[i] - '0';
//                        temp_res += temp;
//                        i++;
//                    }
//                    temp_res *= 10;
//                    temp = str[i] - '0';
//                    temp_res += temp;
//                }
//                v.push_back(temp_res);
//            }
//        }
//        for (int x : v)
//            q.push(x);
//         while(!q.empty())
//         {
//             cout<<q.front()<<endl;
//             q.pop();
//         }
//        int q_size = q.size();
//        int idx = 1;
//        for (int i = 0; i < q_size; i++)
//        {
//            if (q.front() == idx)
//            {
//                q.push(q.front());
//                q.pop();
//                idx++;
//            }
//            else
//            {
//                s.push(q.front());
//                q.pop();
//            }
//        }
//        while (!q.empty())
//        {
//            res.push_back(q.front());
//            q.pop();
//        }
//        while (!s.empty())
//        {
//            res.push_back(s.top());
//            s.pop();
//        }
//        int flag = 1;
//        for (int i = 1; i < res.size(); i++)
//        {
//            if (res[i - 1] > res[i])
//            {
//                cout << "No" << endl;
//                break;
//            }
//            flag++;
//        }
//        if (flag == res.size())
//        {
//            cout << "Yes" << endl;
//        }
//        N--;
//    }
//}