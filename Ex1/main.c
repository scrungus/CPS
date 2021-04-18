#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char string[], char reversedString[]){
    printf("%s\n",string); //print original string
    int j = strlen(string)-1; //descending index
    
    for(int i = 0;i <= strlen(string)-1;i++){ //ascending index
        reversedString[j] = string[i]; //assigning first letter of string to last letter of reversed string
        j--;
    }
    reversedString[strlen(string)] = '\0'; //terminating character
    return reversedString;
}

int main()
{
    char string[] = "new string";
    char reversedString[strlen(string)];

    printf("%s\n",reverseString(string,reversedString));
    return 0;
}
