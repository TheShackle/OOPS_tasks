#include <iostream>
#include "task3.h"

using namespace std;

int main()
{
    //for base Class
    cout<< "\tBase Class:"<<endl;
    shape s1;
    s1.draw();

    // child class for two dimension
    cout<< "\tChild Class for two dimension:"<<endl;
    twoDimensionalShape t1;
    t1.draw();
    cout << "Area = "<<t1.getArea()<<endl;

    //child class for three dimension
    cout<< "\tChild Class for three dimension:"<<endl;
    threeDimensionalShape th1;
    th1.draw();
    cout << "Area = "<<th1.getArea()<<endl;
    cout << "volume = "<<th1.getVolume()<<endl;
    cout<< "\tDestructor Invoked"<<endl;
    return 0;
}
