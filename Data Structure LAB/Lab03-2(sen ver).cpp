//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//    string input;
//    getline(cin,input);
//
//    while (N--) {
//        string numbers;
//        getline(cin,numbers);
//        stringstream inputs(numbers);
//        int target;
//        inputs>>target;
//        int temp;
//
//        vector<int> NumberArray(0);
//        while(inputs>>temp){
//            NumberArray.emplace_back(temp);
//        }
//
//        int l=0,r=NumberArray.size()-1;
//
//        vector<int> AnswerArray(0);
//        while(l<=r){
//            if(r-l==1){
//                AnswerArray.emplace_back(NumberArray[l]);
//                if(target!=NumberArray[l]) AnswerArray.emplace_back(NumberArray[r]);
//                break;
//            }
//            int lnew=l+(r-l+1)/3;
//            int rnew=l+((r-l+1)/3)*2;
//            AnswerArray.emplace_back(NumberArray[lnew]);
//            if(target==NumberArray[lnew]) break;
//            if(target<NumberArray[lnew])
//            {
//                r=lnew-1;
//                continue;
//            }
//            AnswerArray.emplace_back(NumberArray[rnew]);
//            if(target==NumberArray[rnew]) break;
//            if(target<NumberArray[rnew]){
//                l=lnew+1;
//                r=rnew-1;
//                continue;
//            }
//            l=rnew+1;
//        }
//        for(int x=0;x<AnswerArray.size()-1;++x){cout<<AnswerArray[x]<<" ";}
//        cout<<AnswerArray[AnswerArray.size()-1];
//        if (N) { cout << endl; }
//    }
//}