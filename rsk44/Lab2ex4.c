#include <stdio.h> // tells the compiler to insert the contents of stdio
#include <string.h> // tells the compiler to insert the contents of string used for strlen() and strlwr()
//function that reverses a string and then compares it to the original string to see if its a palindrome
void palindrome(char myString[]){
    myString = strlwr(myString);//stores string as lower case as capitilization doesnt matter when assesing if a string is a palindrome
    int lenOfString= strlen(myString);//variable to store length of the string
    char reverseString[lenOfString+1];// creates space in memory for a new string that will hold the contents of the new string 
    int arrayIndex=0;//pointer 
    while (lenOfString>0)
    {
       reverseString[arrayIndex]=myString[lenOfString-1];//sets front value of reverseString to equivilant back value of myString
       lenOfString = lenOfString -1;//counter is incrimented by -1
       arrayIndex = arrayIndex+1;// looks at next index in the array
    }
    int isPalindrome=1;//assumes that the string is a palindrome and variable is set to 1 to represent True
    int len= strlen(myString);
    int i=1;// counter
    //while loop only runs until each character has been assessed or until we have discovered if it is not a palindrome
    while(i<len && isPalindrome==1){
        // code below compares each character of the original and reverse strings and checks if they are equivilant
        if(reverseString[i]==myString[i]){
           isPalindrome=1;
        }
        else
        {
            isPalindrome=0;// if not equivilant isPalindrome set to 0 and while loop terminates
        }
        i=i+1;//incrementing counter
    }

    if (isPalindrome==1)// if it is a palindrome 
    {
        printf("The string '%s' reversed is '%s' and IS a palindrome",myString, reverseString);
    }
    else
    {
        printf("The string '%s' reversed is '%s' and IS NOT a palindrome",myString, reverseString);
        
    }
    
    
}
int main(){
    char myString[]="1001";
    palindrome(myString);//calling function
    return 0;
}