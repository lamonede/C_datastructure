#include <stdio.h>

int factorial(int n);

int main(){
    printf("%d", factorial(5));
}

int factorial(int n){
    if(n <= 1) 
        return(1);
    else
        return (n * factorial(n-1));
};
