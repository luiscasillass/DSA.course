#include <iostream>
#include <string>
#include <vector>

int main(){
           // Array example
    std::cout<<"Array example->  ";
    int arr[3] = {1,2,3}; // el arreglo inicializa en 0, por lo que la posicion del elemento "1" es igual a 0. numero 2 en posicion 1 etc. 
    for(int i=0; i<3;i++){
        std::cout<<arr[i]<< " "; /* arr[i] es la forma de acceder al elemento que se encuentra en la posición i 
                                 del arreglo arr. Posición: La i indica qué elemento del arreglo se quiere obtener en ese momento.*/
    }
    std::cout<<std::endl;
    std::cout <<"Array memory: "<<sizeof(arr)<<" bytes"<<std::endl;

    for(int x:arr)
    {
        std::cout << x <<" "<<std::endl;
    }

        // Vector example 
    std::cout <<"vector example->  ";
    std::vector<int> vec = {1,2,3,4};
    vec.push_back(5); // dynamically add an element with push_back
    for(int i=0; i < vec.size(); ++i){
        std::cout<<vec[i]<< " ";
    }

    return 0;
}