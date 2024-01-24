//#include <iostream>
//#include<string>
//using namespace std;
//
//int main() {
//
//	int Alist[101] = { 0 };
//	int pos = 0;
//	int maxNum = 0;
//
//	string order = " ";
//	cin >> order;
//
//	while (order == "insert"|| order == "show" || order == "delete" || order == "rshow")
//	{
//		if (order == "insert") {
//			int n = 0;
//			int x = 0;
//			int y = 0;
//			cin >> n >> x;
//
//			if (pos == 0 && maxNum == 0) {
//				for (int i = 0; i < n; i++)
//				{
//					cin >> y;
//					Alist[i] = y;
//				}
//				maxNum = n;
//			}
//			else if (x >= maxNum)
//			{
//				for (int i = maxNum-1; i < n + maxNum; i++)
//				{
//					cin >> y;
//					Alist[i] = y;
//				}
//				maxNum += n;
//			}
//			else
//			{
//				for (int i = maxNum-1; i >= x; i--)
//				{
//					Alist[n + i] = Alist[i];
//				}
//				for (int i = x; i < n + x; i++)
//				{
//					cin >> y;
//					Alist[i] = y;
//				}
//				maxNum += n;
//			}
//		}
//
//		if (order == "show") {
//			if (maxNum == 0)
//			{
//				cout << "NULL\n";
//			}
//			else
//			{
//				for (int i = 0; i < maxNum; i++)
//			    {
//				    cout << Alist[i] << " ";
//			    }
//				cout << endl;
//			}
//		}
//
//		if (order == "rshow") {
//			if (maxNum == 0)
//			{
//				cout << "NULL\n";
//			}
//			else
//			{
//				for(int i = maxNum - 1; i >= 0; i--)
//				{
//					cout << Alist[i] << " ";
//				}
//				cout << endl;
//			}
//		}
//
//		if (order == "delete")
//		{
//			int x = 0;
//			cin >> x;
//			for (int i = 0; i < maxNum; i++)
//			{
//				if (Alist[i]==x)
//				{
//					for (int j = i; j < maxNum-i+1; j++)
//					{
//						Alist[j] = Alist[j + 1];
//					}
//					i = i - 1;
//					maxNum--;
//				}
//			}
//		}
//		cin >> order;
//	}
//}
//
//
