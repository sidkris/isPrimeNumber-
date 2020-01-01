
#include <iostream>

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
     return true;
    }
}

int main(){
    int userInput;
    std::cout << "please enter a number : ";
    std::cin >> userInput;

    if(isPrime(userInput) == 1){
        std::cout << "This is a prime number.";
    }
    else{
        std::cout << "This is not a prime number.";
    }

}

