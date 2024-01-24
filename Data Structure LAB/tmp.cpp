//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//void TernarySearch(int* arr, int L, int R, int num) {
//	int pivot_L = 0;
//	int pivot_R = 0;
//	if (L==R){
//		pivot_L = L;
//		pivot_R = L;
//	}
//	else if (R = L + 1){
//		pivot_L = L;
//		pivot_R = R;
//	}
//	else{
//		pivot_L = floor((R - L + 1) / 3 )+ L;
//		pivot_R = floor((R - L + 1) / 3) * 2 + L;
//	}
//
//	if (num == arr[pivot_L]) { 
//		cout << arr[pivot_L]; 
//	}
//	else if (num < arr[pivot_L]) {
//		cout << arr[pivot_L] << " "; 
//		TernarySearch(arr, L, pivot_L -1, num);
//	}
//	else if (num > arr[pivot_L] && num < arr[pivot_R]) {
//		cout << arr[pivot_L] << " ";
//		TernarySearch(arr, pivot_L + 1, pivot_R - 1, num);
//	}
//	else if (num > arr[pivot_R]) {
//		cout << arr[pivot_R] << " ";
//		TernarySearch(arr, pivot_R + 1, R, num);
//	}
//	else{
//		cout << arr[pivot_R] << " ";
//	}
//}
//
//
//int main()
//{
//	int N = 0;
//	cin >> N;
//	while (N--)
//	{
//		int target;
//		int numbers[100] = { 0 };
//		cin >> target;
//		int temp;
//		int size = 0;
//		while (cin >> temp) {
//			numbers[size] = temp;
//			size++;
//			if (cin.get() == '\n') break;
//		}
//		TernarySearch(numbers, 0, size-1, target);
//		cout << endl;
//	}
//	return 0;
//}
