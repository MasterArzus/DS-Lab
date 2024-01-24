//#include<iostream>
//#include<list>
//using namespace std;
//
//int main()
//{
//	string order = " ";
//	list<int> l;
//	list<int>::iterator pos;
//	cin >> order;
//	while (order == "insert"|| order == "show" || order == "delete" || order == "rshow")
//	{
//		if (order == "insert") {
//			int n, x, y = 0;
//			cin >> n >> x;
//			if (l.empty() || x > l.size()){
//				for (int i = 0; i < n; i++) {
//					cin >> y;
//					l.push_back(y);
//				}
//			}
//			else{
//				int counter = 0;
//				for (pos = l.begin(); pos != l.end(); pos++)
//				{
//					counter++;
//					if (counter == x+1){
//						break;
//					}
//				}
//				for (int i = 0; i < n; i++) {
//					cin >> y;
//					l.insert(pos, y);
//				}
//			}
//		}
//		if (order == "rshow") {
//			list<int> ltemp(l);
//			ltemp.reverse();
//			if (ltemp.empty()) {
//				cout << "NULL" << endl;
//			}
//			else {
//				for (auto e : ltemp){
//					cout << e << " ";
//				}
//				cout << endl;
//			}
//		}
//		if (order == "show") {
//			if (l.empty()){
//				cout << "NULL" << endl;
//			}
//			else{
//				for (auto e : l){
//					cout << e << " ";
//				}
//				cout << endl;
//			}
//		}
//		if (order == "delete"){
//			int x;
//			cin >> x;
//			l.remove(x);
//		}
//		cin >> order;
//	}
//}
