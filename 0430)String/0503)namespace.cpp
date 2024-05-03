#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <functional>
#include "Prac4_Func.h"


// 실습 namespace 사용하기
// 1. 앞서 만들었던 헤더 파일을 main함수가 있는 파일에서 불러오기
// 2. 앞서 만들었던 헤더 파일에 있는 내용을 적절한 namespace 이름으로 감싸기
// 3. main 함수가 있는 파일에서 헤더에 있는 내용을 namespace를 거쳐서 사용하기
//  // //

using namespace std;
using namespace Info_Control;


int main()
{
    int studentNum;
    cout << "학생 수를 입력하세요: ";
    cin >> studentNum;
    vector<student_info> students(studentNum);

    inputStudentData(students);

    int choose;
    while (true) {
        cout << "case를 고르세요 (0: 종료, 1: 학생 정보 출력, 2: 평균 나이, 3: 가장 빠른 생일): ";
        cin >> choose;

        if (choose == 0) {
            cout << "종료!" << endl;
            break;
        }

        if (choose == 1) {
            printStudentInfo(students);
        }
        else if (choose == 2) {
            cout << "평균 나이는: " << Info_Control :: calculateAverageAge(students) << endl;
        }
        else if (choose == 3) {
            cout << "가장 빠른 생일은: " << findEarliestBirthday(students) << endl;
        }
    }

    return 0;
}