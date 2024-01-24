//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int N;
//    cin >> N;
//    while (N--)
//    {
//        vector<vector<int>> tree(110);
//        int temp;
//        cin>>temp;
//        int brankets_number = 0;
//        string input;
//
//        cin>>input;
//        for (int i = 0; input[i]; i++){
//            if (input[i] == '('){
//                brankets_number++;
//                continue;
//            }
//            if (input[i] == ')'){
//                brankets_number--;
//                continue;
//            }
//            if (input[i] == ','){ continue; }
//            else{
//                int number = 0;
//                while (isdigit(input[i])){
//                    number = number * 10 + input[i] - '0';
//                    i++;
//                }
//                tree[brankets_number].push_back(number);
//                i--;
//            }
//        }
//        for (auto y : tree){for (auto x : y){ cout << x << " "; }}
//        cout<<endl;
//    }
//
//    return 0;
//}