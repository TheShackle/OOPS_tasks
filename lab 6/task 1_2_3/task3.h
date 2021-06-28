#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
class shape{
public:
    shape();
    ~shape();
    void draw();

};

class twoDimensionalShape: public shape{
    public:
    twoDimensionalShape();
    ~twoDimensionalShape();
    void draw();
    double getArea();
};

class threeDimensionalShape: public shape{
    public:
    threeDimensionalShape();
    ~threeDimensionalShape();
    void draw();
    double getArea();
    double getVolume();
};


#endif // TASK3_H_INCLUDED
