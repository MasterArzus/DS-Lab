//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main() {
//	int N = 0;
//	
//    cin >> N;
//	while (N)
//	{
//		int Lcounter = 0;
//		int Rcounter = 0;
//		int tempmax = 0;
//		int maxnumber = 0;
//	    queue<int> q;
//	    string example = " ";
//	     
//	    cin >> example;
//		
//	    for (int i = 0 ; i < example.length(); i++) {
//			q.push(example[i]);
//	    }
//	        
//	    while (q.size() > 0) {
//	        if (q.front() == 40) {
//	             q.pop();
//				 Lcounter++;
//				 Rcounter++;
//	        }
//			else if (q.front() == 41 && Rcounter > 0) {
//				q.pop();
//				tempmax += 2;
//				Rcounter--;
//			}
//			else if (q.front() == 41 && Rcounter <= 0) {
//				q.pop();
//				Lcounter = 0;
//				Rcounter = 0;
//			}
//
//			if (Rcounter == 0) { 
//				maxnumber = 0;
//				maxnumber += Lcounter * 2; 
//				Lcounter = 0; 
//				tempmax = 0; 
//			}
//
//			if (Rcounter > 0 && maxnumber < tempmax){
//				maxnumber = tempmax;
//			}
//
//		}
//	    cout << maxnumber << endl;
//		N--;
//    }
//    return 0;
//}