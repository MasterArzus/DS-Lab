//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main()
//{
//    int N = 0;
//
//    cin >> N;
//    while (N)
//    {
//        queue<int> q;
//        string number = " ";
//        int Y, X, nowNum = 0;
//        cin >> number >> X >> Y;
//        for (int i = X-1 ; i < number.length(); i++) {
//            q.push(number[i] - '0');
//        }
//        for (int i = 0; i < X-1; i++) {
//            q.push(number[i] - '0');
//        }
//        
//        while (q.size() > 1) {
//            if (nowNum == Y) {
//                q.pop();
//                nowNum = 0;
//            }
//            else{
//                nowNum++;
//                q.push(q.front());
//                q.pop();
//            }
//        }
//        cout << q.front() << endl;
//        N -= 1;
//    }
//    return 0;
//}