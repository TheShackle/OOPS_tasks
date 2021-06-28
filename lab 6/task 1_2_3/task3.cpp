#include <iostream>
#include "task3.h"

using namespace std;

    //Base Class
    shape::shape(){
        cout<<"shape::shape()"<<endl;
    }
    shape::~shape(){
        cout<<"shape::~shape()"<<endl;
    }
    void shape::draw(){
        cout<<"Drawing Shape"<<endl;
    }

    // Two dimensional Child class
    twoDimensionalShape::twoDimensionalShape(){
        cout<<"twoDimensionalShape:;twoDimensionalShape()"<<endl;
    }
    twoDimensionalShape::~twoDimensionalShape(){
        cout<<"twoDimensionalShape::~twoDimensionalShape()"<<endl;
    }
     void twoDimensionalShape::draw(){
        cout<<"twoDimensionalShape::draw()"<<endl;
     }
    double twoDimensionalShape::getArea(){
        cout<<"twoDimensionalShape::getArea()"<<endl;
        return 698;
    }

    //three Dimensional Child Class
    threeDimensionalShape::threeDimensionalShape(){
        cout<<"threeDimensionalShape:;threeDimensionalShape()"<<endl;
    }
    threeDimensionalShape::~threeDimensionalShape(){
        cout<<"threeDimensionalShape::~threeDimensionalShape()"<<endl;
    }
    void threeDimensionalShape::draw(){
        cout<<"threeDimensionalShape::draw()"<<endl;
    }
    double threeDimensionalShape::getArea(){
        cout<<"threeDimensionalShape::getArea()"<<endl;

        return 698;
    }
    double threeDimensionalShape::getVolume(){
        cout<<"threeDimensionalShape::getVolume()"<<endl;
        return 698;
    }
