#include <iostream>

struct Student{
    std::string name;
    int date;
    int month;
    int year;
};

int main() {
    int num_of_stu, min, max;

    std::cin >> num_of_stu;
    struct Student students[num_of_stu];
    for (int i = 0; i < num_of_stu; ++i) {
        std::cin >> students[i].name;
        std::cin >> students[i].date;
        std::cin >> students[i].month;
        std::cin >> students[i].year;
    }
    min = 0;
    max = 0;
    for (int i = 0; i < num_of_stu; ++i) {
        if (students[i].year < students[max].year)
            max = i;
        else if (students[i].year == students[max].year) {
            if (students[i].month < students[max].month)
                max = i;
            else if (students[i].month == students[max].date) {
                if (students[i].date < students[max].date)
                    max = i;
            }
        }
    }
    for (int i = 0; i < num_of_stu; ++i) {
        if (students[i].year > students[min].year)
            min = i;
        else if (students[i].year == students[min].year) {
            if (students[i].month > students[min].month)
                min = i;
            else if (students[i].month == students[min].date) {
                if (students[i].date > students[min].date)
                    min = i;
            }
        }
    }
    std::cout << students[min].name <<std::endl;
    std::cout << students[max].name <<std::endl;
    return 0;
}