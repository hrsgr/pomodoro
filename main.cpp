#include<iostream>
#include<windows.h>
#include"Timer.hpp"
#pragma comment(lib, "user32.lib")
using namespace std;

Timer timer;
int main(){
    timer.start();
    while (true)
    {
        timer.update();
        if(GetAsyncKeyState(VK_SPACE))break;;
        timer.print();
    }
}