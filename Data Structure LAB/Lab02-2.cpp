//#include<iostream>
//#include<string>
//#include<queue>
//#include<stack>
//using namespace std;
//
//void stringSplit(const string& str, char splitword, queue<int>& q) {
//    size_t previous = 0;
//    size_t current = str.find(splitword);
//
//    while (current != string::npos) {
//        if (current > previous) {
//            q.push(stoi(str.substr(previous, current - previous)));
//        }
//        previous = current + 1;
//        current = str.find(splitword, previous);
//    }
//    if (previous != str.size()) {
//        q.push(stoi(str.substr(previous)));
//    }
//}
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//    cin.ignore();
//    while (N--)
//    {
//        queue<int> req;
//        queue<int> q;
//        stack<int> s;
//        string input = "";
//        int temp = 0;
//        bool flag = true;
//
//        getline(cin, input, '\n');
//        stringSplit(input, ' ', q);
//
//        while (q.size() > 1) {
//            temp = q.front();
//            q.pop();
//            if (temp > q.front()) { s.push(temp); }
//            else { req.push(temp); }
//        }
//
//        req.push(q.front());
//
//        while (!s.empty()) {
//            req.push(s.top());
//            s.pop();
//        }
//
//        while (req.size() > 1)
//        {
//            cout << req.front() << " ";
//            temp = req.front();
//            req.pop();
//            if (temp > req.front()) { flag = false; }
//        }
//        //cout << req.front() << " ";
//
//        if (flag) { cout << "Yes"; }
//        else { cout << "No"; }
//        cout << endl;
//    }
//}