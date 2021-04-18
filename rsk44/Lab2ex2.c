#include <stdio.h> // tells the compiler to insert the contents of stdio
#include <string.h> // tells the compiler to insert the contents of string used for strlen()
#include <stdlib.h>
#include <math.h>
//Function that returns the decimal value of a given octal number
//Takes the number as a string as a parameter
int octalToDecimal(char number[]){
    int lenOfNum=strlen(number);
    int power = lenOfNum -1; //highest power applied is n length - 1(n 383 has length 3, the highest power raised is 2)
    int i=0;
    int decimal=0;
    while (i<lenOfNum)
    {
        int number1=number[i];//takes one character of string 
        int charToInt = number1 - '0'; //converts character taken above into an intiger using ascii numbers
        decimal = decimal + (charToInt*pow(8, power));//adds to sum value of decimal answer
        power = power-1;
        i=i+1;
    }
    return decimal;//returns the final decimal
}

int main(){
    char number[]="0";
    int numInt= atoi(number);//converts char to int used for robustness 
    if (numInt>0)
    {
        printf("%s as an decimal number is %d\n",number,octalToDecimal(number)); //calls function if data is valid
    }
    else{
        printf("Your number is less than 0");
    }
    return 0;
}