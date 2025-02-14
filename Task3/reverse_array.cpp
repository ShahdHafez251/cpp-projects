#include <iostream>

void reverseFunc(int *array , int size);
int	main()
{
    int temp;
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "the original array " << std::endl;

    for (int i : array){
        std::cout << i << " " ;
    }
    std::cout << std::endl;

    reverseFunc(array , size);
    
    for (int i : array){
        std::cout << i << " ";
    }

    return 0;
}

void reverseFunc(int *array , int size){
    int * start = &array[0];
    int *end = &array[size-1];
    while ( start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++; end--;
    }

}
