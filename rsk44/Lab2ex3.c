#include <stdio.h> // tells the compiler to insert the contents of stdio
#include <math.h> //tells compiler to load contents of math
#include <string.h> // tells the compiler to insert the contents of string used for strlen()
// function that prints a tree 
void makeTree(int width, int trunkHeight){
  if((width <= 0) || (trunkHeight < 0)){
    printf("Please enter data values greater than 0.\n");
    return;
  }
  // makes sure that data entered is valid
  int i;
  char trunk[3] = "***";
  for(i; i <= width; i += 2){
    for(int x = 1; x <= (width + i)/2; x++){
      if(x <= (width - i)/2){
        printf(" ");// prints out empty spaces until * is ready to be added
      }else{
        printf("*");// prints *
      }
    }
    printf("\n");
  }

  for(int y = 1; y <= trunkHeight; y++){
    for(int z = 1; z <= (width - 2)/2; z++){
      printf(" ");
    }
    printf("%s\n", trunk);
  }

  return;
}

int main(void) {
    int width = 8;
    int trunkHeight=3;
    if (width%2 == 0){
        printf("Please enter a width that is odd");
    }
    //makes sure that width entered is odd
    else{
        makeTree(width, trunkHeight);//function called if data entry is odd
    }
 
    return 0;
}
