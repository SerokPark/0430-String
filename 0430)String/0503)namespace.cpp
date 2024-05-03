#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <functional>
#include "Prac4_Func.h"


// �ǽ� namespace ����ϱ�
// 1. �ռ� ������� ��� ������ main�Լ��� �ִ� ���Ͽ��� �ҷ�����
// 2. �ռ� ������� ��� ���Ͽ� �ִ� ������ ������ namespace �̸����� ���α�
// 3. main �Լ��� �ִ� ���Ͽ��� ����� �ִ� ������ namespace�� ���ļ� ����ϱ�
//  // //

using namespace std;
using namespace Info_Control;


int main()
{
    int studentNum;
    cout << "�л� ���� �Է��ϼ���: ";
    cin >> studentNum;
    vector<student_info> students(studentNum);

    inputStudentData(students);

    int choose;
    while (true) {
        cout << "case�� ������ (0: ����, 1: �л� ���� ���, 2: ��� ����, 3: ���� ���� ����): ";
        cin >> choose;

        if (choose == 0) {
            cout << "����!" << endl;
            break;
        }

        if (choose == 1) {
            printStudentInfo(students);
        }
        else if (choose == 2) {
            cout << "��� ���̴�: " << Info_Control :: calculateAverageAge(students) << endl;
        }
        else if (choose == 3) {
            cout << "���� ���� ������: " << findEarliestBirthday(students) << endl;
        }
    }

    return 0;
}