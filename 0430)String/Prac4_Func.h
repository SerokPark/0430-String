#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;


namespace Info_Control
{
    struct student_info {
        string name;
        string age;
        string birthday; // "MM-DD" Çü½Ä
    };

    bool CheckInputNumber(string& str);
    bool CheckInputAlpha(string& str);
    void inputStudentData(vector<student_info>& students);
    void printStudentInfo(const vector<student_info>& students);
    float calculateAverageAge(const vector<student_info>& students);
    string findEarliestBirthday(vector<student_info>& students);
}