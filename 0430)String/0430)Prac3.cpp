//
//240430, Serok, String_Practice3
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string s = "Codingon";

int main()
{
	// �빮��->�ҹ���
	//s[0] = tolower(s[0]);
	//cout << s << endl;

	for (int i = 0; i <= s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	cout << s << endl;
	//// ding ��ȯ
	//cout << s.substr(2, 4) << endl;

	//// coooooon����
	//cout << s.replace(2, 5, "oooo") << endl;
	for (int i = 2 ; i<=5; i++ )
	{
		s[i] = s[1];
	}
	cout << s << endl;

	//// con ����
	//cout << s.erase(1, 4) << endl;



}