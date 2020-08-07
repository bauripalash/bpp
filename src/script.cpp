#include <iostream>

bool isPrime(int n){

    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for (int i = 5 ; i*i <= n ; i+=6){
        if (n % i == 0 || n % (i+2) == 0){
            return false;
        }
    }

    return true;

}

int main(){
    
    for (int i = 1; i <= 1000000000; ++i) {
        if (isPrime(i)){
            
            std::cout << i << std::endl;

        }
    }

    return 0;

}
