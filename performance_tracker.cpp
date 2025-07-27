#include <iostream>
#include <algorithm> // for max and min

using namespace std;

namespace exam_writes {
    bool exam = true;
}

namespace no_exam {
    bool exam = false;
}

int main() {
    string name;

    cout << "Enter your name here: " << endl;
    cin >> name;

    string user_email = name.append("@gmail.com");

    int first_test;
    int second_test;

    cout << "Enter marks for first test here: " << endl;
    cin >> first_test;

    cout << "Enter marks for second test here: " << endl;
    cin >> second_test;

    double sum = first_test + second_test;
    double avg = sum / 2;

    int max_marks = max(first_test, second_test); // checking for highest marks between the two tests
    int min_marks = min(first_test, second_test); // checking for lowest marks between the two tests
    int first_diff_marks = first_test - second_test;
    int sec_diff_marks = second_test - first_test;

    int min_diff_marks = min(first_diff_marks, sec_diff_marks);
    int max_diff_marks = max(first_diff_marks, sec_diff_marks);

    if (max_diff_marks > 0 && (min_diff_marks < 0 && avg >= 50)) {
        using namespace exam_writes;
        cout << "Performance and Data Analysis For : " << name << endl;
        cout << "Email To " << user_email << endl;
        cout << "Improved by " << max_diff_marks << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else if (max_diff_marks < 0 && (min_diff_marks > 0 && avg >= 50)) {
        using namespace exam_writes;
        cout << "Performance and Data Analysis For : " << name << endl;
         cout << "Email To " << user_email << endl;
        cout << "Dropped by " << min_diff_marks << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else if (max_diff_marks == 0 && avg >= 50) {
        using namespace exam_writes;
        cout << "Performance and Data Analysis For : " << name << endl;
        cout << "Email To " << user_email << endl;
        cout << "No improvement, same performance as previous test " << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else if (max_diff_marks > 0 && (min_diff_marks < 0 && avg < 50)) {
        using namespace no_exam;
        cout << "Performance and Data Analysis For : " << name << endl;
        cout << "Email To " << user_email << endl;
        cout << "Improved by " << max_diff_marks << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else if (max_diff_marks < 0 && (min_diff_marks > 0 && avg < 50)) {
        using namespace no_exam;
        cout << "Dropped by " << min_diff_marks << endl;
        cout << "Email To " << user_email << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else if (max_diff_marks == 0 && avg < 50) {  // fixed '=' to '=='
        using namespace no_exam;
        cout << "Performance and Data Analysis For : " << name << endl;
        cout << "Email To " << user_email << endl;
        cout << "No improvement, same performance as previous test " << endl;
        cout << "Qualifies For An Exam : " << exam << endl;

    } else {
        cout << "Enter correct information";
    }
    return 0;
}
