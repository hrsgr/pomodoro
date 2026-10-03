#include<iostream>
#include<chrono>
using namespace std;

class Timer
{
private:
    int time;
    int count=0;
    std::chrono::steady_clock::time_point starttime;
public:
    void start();
    void update();
    void print();
    int gettime();
};