#include <stdio.h>
#include <string.h>
#include <math.h>

int convertOctal(char octal[]){
	int decimalTotal=0;
    int arraySize = strlen(octal);
    printf("array size is %d\n",arraySize);
    char octalConverted[arraySize]; //creating duplicate string to be worked on, so that main function can still output original octal - octalConverted is modified in this function
    strcpy(octalConverted,octal);

	for(int i=arraySize-1; i>=0;i--){ 
        printf("for character %c : \n",octal[i]);

	    if(octal[i] >= '0' && octal[i] <= '7'){ //if input is not a valid octal, output error and break loop
            octalConverted[i] -= 48; //chars of integers begin at 48 in the ascii table, so converting to ordinal int
            printf("octal is %d\npower raised by is %d\n",octalConverted[i],arraySize-1-i); //verbose output
            decimalTotal += ((int)octalConverted[i])*pow(8,arraySize-1-i); //take int value, multiply it by the base and raise it to the power of its position in the string (from right to left), then add it to int running total
	    }
        else if(octal[i] == '-'){ //for loop is decending, so this would only ever be the last character to be indexed: if number is negative, convert decimal to negative
            decimalTotal = -decimalTotal;
        }
        else{
            printf("input is not valid octal\n");
            decimalTotal=0;
            
            break;
        }
    }
    return decimalTotal;
}


int main(){
char octal[] = "8";
int result = convertOctal(octal);
printf("\n%s in decimal is %d\n",octal, result);	
}
