//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void TernarySearch(int* arr, int L, int R, int num) {
//    int pivot_L = 0;
//    int pivot_R = 0;
//    if (L == R) {
//        pivot_L = L;
//        pivot_R = L;
//    }
//    else if (R = L + 1) {
//        pivot_L = L;
//        pivot_R = R;
//    }
//    else {
//        pivot_L = (R - L + 1) / 3 + L;
//        pivot_R = (R - L + 1) / 3 * 2 + L;
//    }
//
//    if (num == arr[pivot_L]) {
//        cout << arr[pivot_L];
//    }
//    else if (num < arr[pivot_L]) {
//        cout << arr[pivot_L] << " ";
//        TernarySearch(arr, L, pivot_L - 1, num);
//    }
//    else if (num > arr[pivot_L] && num < arr[pivot_R]) {
//        cout << arr[pivot_L] << " ";
//        TernarySearch(arr, pivot_L + 1, pivot_R - 1, num);
//    }
//    else if (num > arr[pivot_R]) {
//        cout << arr[pivot_R] << " ";
//        TernarySearch(arr, pivot_R + 1, R, num);
//    }
//    else {
//        cout << arr[pivot_R] << " ";
//    }
//}
//
//int main() {
//    int N;
//    cin >> N;
//    string input;
//    getline(cin, input);
//
//    while (N--) {
//        string numbers;
//        getline(cin, numbers);
//        stringstream inputs(numbers);
//        int target;
//        inputs >> target;
//        int temp;
//
//        vector<int> NumberArray(0);
//        while (inputs >> temp) {
//            NumberArray.emplace_back(temp);
//        }
//
//        int l = 0, r = NumberArray.size() - 1;
//
//        vector<int> AnswerArray(0);
//        while (l <= r) {
//            if (r - l == 1) {
//                AnswerArray.emplace_back(NumberArray[l]);
//                if (target != NumberArray[l]) AnswerArray.emplace_back(NumberArray[r]);
//                break;
//            }
//            int lnew = l + (r - l + 1) / 3;
//            int rnew = l + ((r - l + 1) / 3) * 2;
//            AnswerArray.emplace_back(NumberArray[lnew]);
//            if (target == NumberArray[lnew]) break;
//            if (target < NumberArray[lnew])
//            {
//                r = lnew - 1;
//                continue;
//            }
//            AnswerArray.emplace_back(NumberArray[rnew]);
//            if (target == NumberArray[rnew]) break;
//            if (target < NumberArray[rnew]) {
//                l = lnew + 1;
//                r = rnew - 1;
//                continue;
//            }
//            l = rnew + 1;
//        }
//        for (int x = 0; x < AnswerArray.size() - 1; ++x) { cout << AnswerArray[x] << " "; }
//        cout << AnswerArray[AnswerArray.size() - 1];
//        if (N) { cout << endl; }
//    }
//}