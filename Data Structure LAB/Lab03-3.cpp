//#include <iostream>
//
//using namespace std;
//
//int roman_to_integer(string inputString) {
//    int n = int(inputString.length());
//    if (0 == n) {
//        return 0;
//    }
//
//    int result = 0;
//    bool flag = true;
//    for (int i = 0; i < n; i++) {
//        switch (inputString[i]) {
//        case 'I':
//            result += 1;
//            break;
//        case 'V':
//            result += 5;
//            break;
//        case 'X':
//            result += 10;
//            break;
//        case 'L':
//            result += 50;
//            break;
//        case 'C':
//            result += 100;
//            break;
//        case 'D':
//            result += 500;
//            break;
//        case 'M':
//            result += 1000;
//            break;
//        }
//    }
//
//    for (int i = 1; i < n; i++) {
//        if (inputString[i-1] == 'I' && inputString[i] == 'I' && inputString[i + 1] == 'I' && inputString[i + 2] == 'I')
//        {
//            flag = false;
//            break;
//        }
//        if (inputString[i - 1] == 'X' && inputString[i] == 'X' && inputString[i + 1] == 'X' && inputString[i + 2] == 'X')
//        {
//            flag = false;
//            break;
//        }
//        if (inputString[i - 1] == 'V' && (inputString[i] == 'X'|| inputString[i] == 'L' || inputString[i] == 'C' || inputString[i] == 'D' || inputString[i] == 'M'))
//        {
//            flag = false;
//            break;
//        }
//        if (inputString[i - 1] == 'L' && (inputString[i] == 'C' || inputString[i] == 'D' || inputString[i] == 'M'))
//        {
//            flag = false;
//            break;
//        }
//        if (inputString[i - 1] == 'D' && (inputString[i] == 'M'))
//        {
//            flag = false;
//            break;
//        }
//        if ((inputString[i - 1] == 'V' && inputString[i] == 'V')||(inputString[i - 1] == 'L' && inputString[i] == 'L')||(inputString[i - 1] == 'D' && inputString[i] == 'D'))
//        {
//            flag = false;
//            break;
//        }
//        if (inputString[i - 1] == 'V' && inputString[i] == 'X')
//        {
//            flag = false;
//            break;
//        }
//        if ((inputString[i] == 'V' || inputString[i] == 'X') && inputString[i - 1] == 'I') {
//            result -= 1 + 1;
//        }
//
//        if ((inputString[i] == 'L' || inputString[i] == 'C') && inputString[i - 1] == 'X') {
//            result -= 10 + 10;
//        }
//
//        if ((inputString[i] == 'D' || inputString[i] == 'M') && inputString[i - 1] == 'C') {
//            result -= 100 + 100;
//        }
//    }
//    if (flag)
//    {
//        return result;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//    while (N--)
//    {
//        string romanNum;
//        cin >> romanNum;
//        if (roman_to_integer(romanNum))
//        {
//            cout << roman_to_integer(romanNum) << endl;
//        }
//        else
//        {
//            cout << "WRONG" << endl;
//        }
//    }
//    return 0;
//}
