//
//240430, Serok, String
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool is_digit(string str)
{
	return atoi(str.c_str()) != 0 || str.compare("0") == 0;

}

int main()
{
    string str1, str2;

    // 두 문자열이 모두 숫자일 때까지 반복
    while(1)


    cout << "올바른 입력: " << str1 << " " << str2 << endl;
}