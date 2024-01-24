//#include <iostream>
//#include <vector>
//
//using namespace std;
////vec is the sorted link
//void insertpos(vector<int>& vec, int target) {
//	if (target <= vec[0]) {
//		vec.insert(vec.begin(), target);
//		return;
//	}
//	else if (target >= vec[vec.size() - 1]) {
//		vec.insert(vec.end(), target);
//	}
//
//	int low = 0;
//	int high = vec.size();
//	int mid = (low + high) / 2;
//
//	while (low < high) {
//		if (target <= vec[mid] && target >= vec[mid - 1]) {
//			break;
//		}
//		mid = (low + high) / 2;
//		if (vec[mid] < target) low = mid;
//		if (vec[mid] > target) high = mid;
//
//	}
//	cout << "mid:" << mid << endl;
//	vec.insert(vec.begin() + mid, target);
//
//}
//
//int main(int argc, char const* argv[])
//{
//	vector<int> vec = { 1,3,5,5,7,9,11 };
//	vector<int> vec1 = { 1,1,4,6,7,8 };
//	vector<int> vec2 = { 2,2,3,5,7,8 };
//	insertpos(vec, 4);
//
//	for (auto& x : vec) {
//		cout << " " << x;
//	}cout << endl;
//
//	vector<vector<int> > vec_vec;
//	vec_vec.push_back(vec);
//	vec_vec.push_back(vec1);
//	vec_vec.push_back(vec2);
//	vector<int> vec0 = vec_vec[0];
//
//	for (int i = 1; i < vec_vec.size(); i++) {
//		vector<int> vec_ = vec_vec[i];
//		for (int j = 0; j < vec_.size(); j++) {
//			insertpos(vec0, vec_[j]);
//		}
//	}
//	for (auto& x : vec0) {
//		cout << " " << x;
//	}cout << endl;
//	return 0;
//}