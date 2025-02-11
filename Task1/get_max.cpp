#include <iostream>

int main()
{
    int a ,b ,c,d,e; int max;
    std::cout << "enter 5 numbers " ;
    std::cin >> a >> b >> c >> d >> e;
    int arr [5] = {a,b,c,d,e};
    max = arr[0];
    for (int i=0 ; i<4 ; ++i ) {
        if (max > arr[i+1]){
            continue;
        }
        else {
            max = arr[i+1];
        }
    }
    std::cout << "maximum  " << max <<std::endl;
    


    
    return 0;
}
