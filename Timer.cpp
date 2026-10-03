#include"Timer.hpp"
#include<chrono>
#include<string>
#include<iomanip>

void Timer::start(){
    starttime=std::chrono::steady_clock::now();
}

void Timer::update(){
    auto now=std::chrono::steady_clock::now();
    auto elapsed=now-starttime;
    if(count%2==0){
        time=1500-(std::chrono::duration_cast<std::chrono::seconds>(elapsed).count());
    }
    if (count%2==1){
        time=500-(std::chrono::duration_cast<std::chrono::seconds>(elapsed).count());
    }    
    if(time==0){
        count++;
        Timer::start();
    }
}
int Timer::gettime(){
    return time;
}
void Timer::print(){
    int t = Timer::gettime();
    int a,b;
    a=t/60;
    b=t%60;
    cout.fill('0');
    cout.width(2);
    cout<<to_string(a)+':';
    cout.fill('0');
    cout.width(2);
    cout<<to_string(b)<<endl;
}