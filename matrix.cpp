/* Matrix use case in c++ 
*/

#include <iostream>

int main() {   
    int matrix[5][3];
    // nested for loop
    // Loop through rows
    for (int i = 0; i < 5; ++i) {
        // Loop through columns
        for (int j = 0; j < 3; ++j) {
            std::cout << "ingresa los elementos de tu matriz: ["<<i<<"],["<<j<<"]"<<std::endl; 
            std::cin >> matrix[i][j];
        }
        //std::cout <<std:: endl;
    }
    for(int i = 0; i <= 10; i++){
        std::cout << i <<" ";
    }
    
    const int maxArray = 544;
    char storeChar[maxArray];
    std::cout<<std::endl << maxArray;

    return 0;
}