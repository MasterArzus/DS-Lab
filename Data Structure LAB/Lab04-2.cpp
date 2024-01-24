//#include <iostream>
//#include <array>
//#include <algorithm>
//using namespace std;
//
//int reArrangeP(int arr[], int low, int high, int pivot) {
//    int PIndex = low;
//    for (int i = low; i <= high; i++) {
//        if (arr[i] <= pivot) {
//            swap(arr[PIndex], arr[i]);
//            PIndex++;
//        }
//    }
//    PIndex--;
//    return PIndex;
//}
//
//
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pivot = arr[high];
//
//        int PIndex = reArrangeP(arr, low, high, pivot);
//
//        quickSort(arr, low, PIndex - 1);
//        quickSort(arr, PIndex + 1, high);
//    }
//}
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//    while (N--)
//    {
//        int input[100] = { 0 };
//        int n = 0;
//        int target = 0;
//        cin >> n >> target;
//        for (int i = 0; i < n; i++)
//        {
//            cin >> input[i];
//        }
//        
//        quickSort(input, 0, n - 1);
//        //cout << "The sorted array is: ";
//        //for (int i = 0; i < n; i++) {
//        //    cout << input[i] << " ";
//        //}
//        cout << input[n - target] << endl;
//    }
//    return 0;
//}
