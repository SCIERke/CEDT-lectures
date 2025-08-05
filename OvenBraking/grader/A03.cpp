
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

int main() {
    string start_time, alarm_time;


    getline(cin, start_time);
    getline(cin, alarm_time);


    int start_hour =  stoi(start_time.substr(0, 2));
    int start_minute = stoi(start_time.substr(3, 2));
    int pm_am = start_hour / 12;

    int alarm_hour = stoi(alarm_time.substr(0, 2));
    int alarm_minute = stoi(alarm_time.substr(3, 2));

    int diff_hour = ((alarm_hour - start_hour + 24) % 24 ) - ((start_minute > alarm_minute)*1);
    int diff_minute = (alarm_minute - start_minute ) + ((start_minute > alarm_minute) * 60);

    printf("%d hr %d min until alarm rings." , diff_hour, diff_minute);
    return 0;

}