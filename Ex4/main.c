#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char string[]){
    printf("%s ",string);
    bool isPalindrome = true;
    for(int i = 0;i <= strlen(string)-1;i++){
        if(string[strlen(string)-1-i] != string[i]){ //indexes starting from either end of the string - if any of the opposite characters don't match, word isn't a palindrome.
                                                     //could be made more efficient by stopping at the midpoint
            isPalindrome = false;
        }
    }
    return isPalindrome;
}

int main()
{
    char string[] = "101";

    if(isPalindrome(string)){
        printf("is a palindrome \n");
    }
    else{
        printf("is not a palindrome \n");
    }
    return 0;
}
