#include <iostream>

void rotateArray(int *array , int size , int rotates);

int	main()
{
    int temp;
    int array[10] ;
    int rotations ; int size;
    std::cout << "the original array " << std::endl;

    for (int i =0 ; i < 10 ;  i++){
        std::cout << "enter number " << i << " ";
        std::cin >> array[i] ;
    }
    std::cout << "enter number of rotations ";
    std::cin >> rotations;

    std::cout << std::endl;
    size = sizeof(array)/sizeof(array[0]);

    rotateArray(array , size , rotations);
    
    for (int i : array){
        std::cout << i << " ";
    }



    return 0;
}

void rotateArray(int *array , int size , int rotates){
    for (int i =0 ; i < rotates ; i++){
        for (int j=0;j < size - 1; j++){
            int *ptr1 = &array[j];
            int *ptr2 = &array[j+1];
            int temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;

        }
    }
}
