#include <stdio.h> // tells the compiler to insert the contents of stdio
#include <string.h> // tells the compiler to insert the contents of string used for strlen()
void stringReversal(char myString[]){
    int lenOfString= strlen(myString);//variable to store length of the string
    char reverseString[lenOfString+1];// creates space in memory for a new string that will hold the contents of the new string 
    int arrayIndex=0;//pointer 
    while (lenOfString>0)
    {
       reverseString[arrayIndex]=myString[lenOfString-1];//sets front value of reverseString to equivilant back value of myString
       lenOfString = lenOfString -1;//counter is incrimented by -1
       arrayIndex = arrayIndex+1;// looks at next index in the array
    }
    printf("The string '%s' reversed is '%s'\n",myString, reverseString);//prints the reversed string
}

int main(){
    char myString[]=""; //taking input
    stringReversal(myString); //calling function
    return 0;
}