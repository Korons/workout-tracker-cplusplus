#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;
time_t theTime = time(NULL);
struct tm *aTime = localtime(&theTime);
int seconds = aTime->tm_sec;
int minutes = aTime->tm_min;
int hour = aTime->tm_hour;
int day = aTime->tm_mday;
int month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
int year = aTime->tm_year + 1900; // Year is # years since 1900
string logfile = "logfile.txt";

int ask_weights()
{
	string FoB;
	int weight;
	int goal;
	int did;
	cout << "Free or Bench: ";
	cin >> FoB;
    cout << "Enter weight of weights: ";
    cin >> weight;
    cout << "Enter your goal: ";
    cin >> goal;
    // Converts int to strings
    std::string y = std::to_string(year);
    std::string m = std::to_string(month);
    std::string d = std::to_string(day);
    std::string h = std::to_string(hour);
    std::string w = std::to_string(weight);
    std::string g = std::to_string(goal);
    string date = y + '/' + m + '/' + d +'/' + h;
    cout << "Enter how many you did: ";
    cin >> goal;
    ofstream myfile;
    myfile.open (logfile);
    myfile << date + '\n' + FoB + '\n' + w + '\n' + g + '\n';
    myfile.close();
    return 0;
} 

int ask()
{
    string nothing;
    int goal;
    int did;
    cout << "Enter your goal: ";
    cin >> goal;
    std::string y = std::to_string(year);
    std::string m = std::to_string(month);
    std::string d = std::to_string(day);
    std::string h = std::to_string(hour);
    string date = y + '/' + m + '/' + d +'/' + h;
    cout << "Press enter when done";
    cin >> nothing;
    cout << "Enter how many you did: ";
    cin >> goal;
    std::string d = std::to_string(did)
    std::string g = std::to_string(goal);
    string date = y + '/' + m + '/' + d +'/' + h;
    cout << "Enter how many you did: ";
    cin >> goal;
    ofstream myfile;
    myfile.open (logfile);
    myfile << date + '\n' + FoB + '\n' + d + '\n' + g + '\n';
    myfile.close();
    return 0;
}
int main()
{
    cout << minutes;
    int workout;
    cout << "-------------------------------------------------------\n\n Welcome to workout-tracker\n\n";
    cout << "\n\n What will you be doing today? \n\n1) Lifting\n2) Running\n3) Situps\n4) Squats\n5) Pushups\n\n-------------------------------------------------------\n\n";
    cin >> workout;
    if (workout == 1)
    {
        ask_weights();
    }
    else if (workout > 1 && workout < 6)
    {
        ask();
    }
    else 
    {
        cout << "Workout not found exiting\n";
        return 0;
    }

}
