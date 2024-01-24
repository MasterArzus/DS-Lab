//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	while (N--)
//	{
//		int citynumber = 0;
//		int provincenumber = 0;
//		cin >> citynumber;
//		int city[50][50] = { 0 };
//		int province[50] = { 0 };
//		for (int i = 0; i < citynumber; i++)
//		{
//			for (int j = 0; j < citynumber; j++)
//			{
//				cin >> city[i][j];
//			}
//		}
//		//cout << "The cities are: \n";
//		for (int i = 0; i < citynumber; i++)
//		{
//			province[i] += 1;
//			for (int j = 0; j < citynumber; j++)
//			{
//				if (city[i][j]==1 && province[j]>0)
//				{
//					province[i] = 0;
//					province[j] += 1;
//				}
//				//cout << city[i][j] << " ";
//			}
//			//cout << endl;
//		}
//		for (auto e:province)
//		{
//			if (e > 0)
//			{
//				provincenumber++;
//			}
//		}
//		cout << provincenumber << endl;
//	}
//}