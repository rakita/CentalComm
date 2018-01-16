#include <iostream>
#include <iomanip>
#include <list>
#include "date.h"

using namespace std;
using namespace chrono;

std::list<time_point<system_clock, system_clock::duration>> exeList;

void func()
{
    try{
        time_point<system_clock, system_clock::duration> tp = exeList.front();
        exeList.pop_front();
        system_clock::duration dur = system_clock::now()-tp;
        if(dur+milliseconds(1) > milliseconds(2))
        {
            cout<<"ERRRRORRRR"<<date::format("%S",dur)<<endl;
        }
    } catch(exception e)
    {
        cout<<"Exception:"<<e.what()<<endl;
    }
}

//test1 start stop!
void test1()
{

}

void test2()
{
}


int main()
{
    test1();
    cout << "Hello World!" << endl;
    return 0;
}
