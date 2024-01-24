//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void stringSplit(const string& str, char splitword, vector<int>& result) {
//    size_t previous = 0;
//    size_t current = str.find(splitword);
//
//    while (current != string::npos) {
//        if (current > previous) {
//            result.push_back(stoi(str.substr(previous, current - previous)));
//        }
//        previous = current + 1;
//        current = str.find(splitword, previous);
//    }
//    if (previous != str.size()) {
//        result.push_back(stoi(str.substr(previous)));
//    }
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//    cin.ignore();
//	while (N--)
//	{
//		string input;
//        vector<int> output;
//        vector<int> numbers;
//        bool no = true;
//        getline(cin, input);
//        while (input.size()<1)
//        {
//            getline(cin, input);
//        }
//        stringSplit(input, ', ', numbers);
//
//        //for (int i = 0; i < numbers.size(); i++)
//        //{
//        //    cout << numbers[i] << " ";
//        //}
//        //cout << endl;
//
//        for (int i = 1; i < numbers.size()-1; i++)
//        {
//            for (int j = i+1; j < numbers.size(); j++)
//            {
//                if (numbers[i] + numbers[j] == numbers[0])
//                {
//                    //cout << "(" << numbers[i] << ',' << numbers[j] << ')' << ", ";
//                    output.push_back(numbers[i]);
//                    output.push_back(numbers[j]);
//                    no = false;
//                }
//            }
//        }
//
//        if (no){cout << "NO" << endl;}
//        else{
//            int n = output.size();
//            for (int i = 0; i < n-2; i += 2)
//            {
//                cout << "(" << output[i] << ',' << output[i+1] << ')' << ", ";
//            }
//            cout << "(" << output[output.size() - 2] << ',' << output[output.size() - 1] << ')' << endl;
//        }
//	}
//}
//
////11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10