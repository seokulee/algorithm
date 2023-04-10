#include <iostream>

typedef struct {
    int hour;
    int min;
    int sec;
}Time;

Time setTime(std::string time) {
    return Time{
            std::stoi(time.substr(0,2)),
            std::stoi(time.substr(3,2)),
            std::stoi(time.substr(6,2))
    };
}

void printTime(Time time) {
    if (time.hour < 10)
        std::cout << '0' << time.hour << ':';
    else
        std::cout << time.hour << ':';
    if (time.min < 10)
        std::cout << '0' << time.min << ':';
    else
        std::cout << time.min << ':';
    if (time.sec < 10)
        std::cout << '0' << time.sec;
    else
        std::cout << time.sec;
}
int main() {
    std::string currentTime, startTime;
    std::cin >> currentTime >> startTime;

    Time current = setTime(currentTime);
    Time start = setTime(startTime);

    Time result;
    result.sec = start.sec - current.sec;
    if (result.sec < 0) {
        result.sec += 60;
        start.min--;
    }
    result.min = start.min - current.min;
    if (result.min < 0) {
        result.min += 60;
        start.hour--;
    }
    result.hour = start.hour - current.hour;
    if (result.hour < 0)
        result.hour += 24;
    printTime(result);
    return 0;
}
