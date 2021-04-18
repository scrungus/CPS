#include <stdio.h>

const int TRUNK_WIDTH = 3;

void printWhiteSpace(int count){ //print a given number of white spaces on 1 line
    for(int i=1;i<=count;i++){
        printf(" ");
    }
}

void printAstericks(int layer){ //print a given number of astericks on 1 line
    for(int i=1;i<=layer;i++){
        printf("*");
    }
    printf("\n");
}

void printTrunk(int width, int length){
    for(int i=0;i<=length-1;i++){
        printWhiteSpace((width-TRUNK_WIDTH)/2); //print white space on the left side of the trunk
        printAstericks(TRUNK_WIDTH); //print trunk
    }

}

void printTree(int width, int trunkLength){
    int count=width/2; //whitespace goes down by 1 per layer, so starting from the top this is the number of spaces to make
    for(int i = 1; i<= width;i+=2){ //tree width decreases by 2 each layer
        printWhiteSpace(count);
        printAstericks(i);
        count--;
    }
    printTrunk(width,trunkLength);
}

int main()
{
    int width = 9;
    int trunkLength = 4;
    printTree(width,trunkLength);
    return 0;
}