#include <stdio.h>

int getInputLength(char* str) {
    int i;
    for (i=0; str[i] != '\0'; i++);
    return i;
}

void findMinDistance(char *inputString) {
    int strlen = getInputLength(inputString);

    int updatedIdx[strlen];
    int updatedDistance[strlen];

    int hugeNumber = 100000;
    for (int i=0; i< strlen; i++) {
        updatedDistance[i] = hugeNumber;
    }

    for (int i = 0; i<strlen; i++) {
        for (int j = i + 1; j<strlen; j++) {
          if (inputString[i] == inputString[j]) {
            updatedIdx[i] = j;
            updatedDistance[i] = j - i - 1;
          }
        }
    }
    
    int smallestIdx = 0;
    int smallestValue = hugeNumber;
    for (int i=0; i<strlen; i++) {
        if (smallestValue > updatedDistance[i]) {
            smallestValue = updatedDistance[i];
            smallestIdx = i;
        }
    }

    if (smallestValue == hugeNumber) {
        printf("No repeats found\n");
    } else {
        printf("repeated character is %c, min distance is %d\n", inputString[smallestIdx], smallestValue);
    }
}


int main( int argc, char *argv[]) {
  findMinDistance(argv[1]);
  return 0;
}