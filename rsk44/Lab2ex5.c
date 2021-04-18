#include <stdio.h> // tells the compiler to insert the contents of stdio
/*function that takes array of intiger numbers up to an including n and updates value at a given index to 0 if the number is not prime
and moves onto the next element if it is prime leaving the number at that index unchanged using the sieve of eratosthenes. */
void eratosthenes(int n, int numbersArray[]){
    int i=2;//algorithm starts from 2
    //while loop runs to square root of number n
    while(n>=i*i){
        if (numbersArray[i]!=1){
            for(int y=2; y<n; y =y+1){
                if(numbersArray[i]*y>n){
                    break;
                }
                else{
                    numbersArray[numbersArray[i]*y]=0; //marks multiples of the number i
                }
            }
        }
        i = i+1;//increment counter
    }
}
//function that tells user if number n is prime or not
void isPrime(int n,int numbersArray[]){
    //checks for valid data
    if(n>101 ||n<0){
        printf("Please enter number between 1 and 100 and try again. \n");
    }
    //if data is not between 1 and 100 an error message is produced
    else if(numbersArray[n]!=0){
        printf("%d is a prime number", n);
    }
    //if number at this index is not 0 it is a prime number
    else
    {
        printf("%d is not a prime number",n);
     //if number at this indec is 0 the number entered by the user is prime
    }
    
}
int main(){
    int n;
    printf("Enter a number between 1 and 100: ");
    scanf("%d",&n);//taking a number from user and sroring in variable n
    int numbersArray[n+1];//create space in memory for an array of size n+1
    for(int i=2;i<=n;i=i+1){
        numbersArray[i]=i;
    }
    //populating array with all numbers up to and including n
    eratosthenes(n,numbersArray); //calling function that updates numbersArray 
    isPrime(n,numbersArray);//calling function to see if n is a prime or not
    return 0;
}

