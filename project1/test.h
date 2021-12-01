#include<iostream>
#include<Eigen/Dense>

class test
{

    private:
    Eigen::Matrix2cd a;
    Eigen::Matrix2cd b;

int x,y,d1,d2;
double z;
public:
test(int x, int y);
int add();
int subtract();

    
};
