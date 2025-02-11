#include <iostream>
#include <cmath>

#define PI  3.142
float calcArea(float x );
float calcPerimeter(float y);

int main (){
    float x ;
    std::cout << "please enter the radius of the circle :";
    std::cin >> x ;
    auto res1 = calcArea(x);
    std::cout << "area of circle is " << res1 <<std::endl;
    auto res2 = calcPerimeter(x);
    std::cout << "perimeter of circle is " << res2 <<std::endl;

    return 0 ;
    
}

float calcArea(float x ){
    float res = PI * pow(x ,2);
    return res;
}
float calcPerimeter(float y){
    float res2 = 2 * PI * y;
    return res2;
}