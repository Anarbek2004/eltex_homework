#include <iostream>
#define TWO 2

int main(){
    int n;
    int i;
    std::cout << "Enter a natural number ";
    std::cin >> n;

    int result = 1;
    for (i = 0; i < n; i++){
        result *= TWO;
    }

    std::cout << "2 to power of "<< n <<" is equal to "<< result <<" "<< std::endl <<"";

    return 0;
}