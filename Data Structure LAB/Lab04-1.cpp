//#include<iostream>
//#include<algorithm>
//#include<array>
//using namespace std;
//
//int main() 
//{
//	int N;
//	cin >> N;
//	while (N--)
//	{
//		int S = 0; // Number of Stars
//		int Q = 0; // Ask time
//		cin >> S >> Q;
//		int input[100] = { 0 };
//
//		// input
//		for (int i = 0; i < S; i++)
//		{
//			cin >> input[i];
//		}
//
//		// Ask
//		while (Q--)
//		{
//			int sortedlist[100];
//
//			copy(begin(input), end(input), begin(sortedlist));
//
//			sort(sortedlist,sortedlist+S);
//
//			//for (int i = 0; i < S; i++)
//			//{
//			//	cout << sortedlist[i] << " ";
//			//}
//			//cout << endl;
//
//			int targetindex = 0;
//			cin >> targetindex;
//
//			int target = input[targetindex - 1];
//			//cout << "target is " << target << endl;
//			auto itr = find(sortedlist, sortedlist + S,target);
//
//			if (itr != end(sortedlist))
//			{
//				cout << S - (distance(sortedlist, itr));
//			}
//			cout << endl;
//		}
//	}
//}