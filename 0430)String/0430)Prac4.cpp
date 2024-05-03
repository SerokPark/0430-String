//
//240430, Serok, String_Practice4
//
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

bool isNumber(string str)
{
    // str = "123ab321"; str[0], str[4]
    for (char c : str) // for-each
    {
        // c�� ���ڰ� �ƴ� ������ ��� == 0
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

bool isAlpha(string str)
{
    // str = "123ab321"; str[0], str[4]
    for (char c : str) // for-each
    {
        // c�� ���ڰ� �ƴ� ������ ��� == 0
        if (isalpha(c) == 0)
            return false;
    }
    return true;
}


struct student_info 
{
    string name;
    string age;
    string birthday; // "MM-DD" ����
};



int main()
{
    // 1. �л� �� �Է�
    int studentNum;
    cout << "�л� ���� �Է��ϼ��� : " << endl;
    cin >> studentNum;

    // 2. �̸� ���� ���� ������ �Է� �ޱ�

    vector<student_info> v_student(studentNum);
    string age;
    string birthday;
    string name;


    for (int i = 0; i < studentNum; ++i)
    {
        cout << i << "��° �л� �̸� �Է� : ";

        while (1) {
            cin >> v_student[i].name;
            if (isAlpha(name))
            {
                break;
            }
            cout << "�̸��� �����Դϴ�. ���ڸ� �����ϰ� �ٽ� �Է����ּ���." << endl;
        }

        cout << i+1 << "��° �л� ���� �Է� : ";

        while (1) {
            cin >> v_student[i].age;
            if (isNumber(age))
            {
                break;
            }
            cout << "���̴� �����Դϴ�. ���ڸ� �����ϰ� �ٽ� �Է����ּ���." << endl;
        }
        
        cout << i << "��° �л� ���� �Է�(MMDD) : ";


        while (1) {
            cin >> v_student[i].birthday;
            if (isNumber(birthday))
            {
                break;
            }
            cout << "������ �����Դϴ�. ���ڸ� �����ϰ� �ٽ� �Է����ּ���." << endl;
        }
    }
    //3.
    // case 0: ����
    // case 1: �л� ���� ���
    // case 2: ��� ����
    // case 3: ���� ���� ����

    int choose = 0;
    float totalAge = 0;
    while (1)
    {
        cout << "case�� ������" << endl;
        cout << "case 0: ����" << endl;
        cout << "case 1: �л� ���� ���" << endl;
        cout << "case 2: ��� ����" << endl;
        cout << "case 3: ���� ���� ����" << endl;
        cin >> choose;

        switch (choose)
        {
        case 0 :
            cout << "����!" << endl;
            break;
        case 1 :
            cout << "�л� ���� ��� : " << endl;
            for (student_info& v : v_student)
            {
                cout << "�̸�: " << v.name << " " << "����: " << v.age << " " << "����: " << v.birthday << endl;
            }
            break;
        case 2 :
            
            for (student_info& v : v_student)
            {
                totalAge += stoi(v.age);
            }
            cout << "��� ���̴� : " << totalAge / float(studentNum) << endl;
            break;
        case 3 :
            vector<string> v_birth(studentNum);
            for (student_info& v : v_student)
            {
                for (int i = 0; i < studentNum; i++)
                {
                    v_birth[i] = v.birthday;
                }
             }
            cout << "���� ���� ������ : " << *min_element(v_birth.begin(), v_birth.end()) << endl;
            break;
        }
        
    }
    
}