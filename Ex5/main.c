#include <stdio.h>
#include <stdbool.h>

bool Primes[100];

void initialisePrimes(){ //initializing array - assume all numbers to be prime 
    for(int i = 0; i<=sizeof(Primes)/sizeof(bool)-1;i++){
        Primes[i] = true;
    }
}

void sieveOfE(){
    int n = sizeof(Primes)/sizeof(bool);
    int p = 2; //first prime between 0-100 is 2. array starts from 0 to 100 but the numbers they represent start from 2.
               // e.g.                  Primes(boolean) 1   1   1   1   1   ...
               //                       Primes(numbers) 2   3   4   5   6   ...
    int multiplier, multiple;

    while(true){
        multiplier = 2;
        multiple = p*multiplier;

        while(multiple<=n){
            Primes[multiple-2] = false;
            multiplier++;
            multiple = p*multiplier;
        }
        for(int i=2;i<=n;i++){
            if((i>p)&&(Primes[i-2])){
                p=i;
                break;
            }
            else if(i==n){
                return;
            }
        }
    }
}

void printPrime(int n){
    if(n>=0 && n<= 100){
        if(n==0 || n==1){
        printf("%d is not prime\n",n);
        }   
        else{
            if(Primes[n-2]){
            printf("%d is prime\n",n);
            }
            else{
            printf("%d is not prime\n",n);
            }
        }
    }
    else{
        printf("%d is out of range\n",n);
    }
}

int main()
{
    int n = 101;
    initialisePrimes();
    sieveOfE();
    printPrime(n);
    return 0;
}
