//#include<iostream>
//#include<stack>
//using namespace std;
//int main() {
//    int n = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int forward = 0;
//        stack<int> st;
//        int next = 0;
//        while (cin >> next)
//        {
//            if (next == forward + 1)
//            {
//                forward++;
//            }
//            else
//            {
//                st.push(next);
//            }
//            if (!st.empty()) {
//                while (st.top() == forward + 1)
//                {
//                    forward++;
//                    st.pop();
//                    if (st.empty())
//                        break;
//                }
//            }
//
//            cin.ignore();
//            if (cin.peek() == '\n')
//            {
//                break;
//            }
//
//        }
//        if (st.empty())
//        {
//            cout << "Yes" << endl;
//        }
//        else
//            cout << "No" << endl;
//    }
//}