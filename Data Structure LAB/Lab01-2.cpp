
//#include <iostream>
//#include<string>
//using namespace std;
//
//int main() 
//{
//	int count[26] = { 0 }, i = 0;
//	string line;
//
//	//cout << "enter the sentence:";
//
//	getline(cin, line, '\n');
//
//	while (line[i] != '\0')
//	{
//		if (line[i] >= 'a' && line[i] <= 'z')
//			count[line[i] - 'a']++;
//		else if (line[i] >= 'A' && line[i] <= 'Z') 
//			count[line[i] - 'A']++;
//		i++;
//	}
//
//	//cout << "The result is: \n";
//
//	for (i = 0; i < 26; i++) {
//		if (count[i] != 0) {
//
//			cout << char(i + 'A') << " " << count[i] << endl;
//		}
//	}
//	return 0;
//}