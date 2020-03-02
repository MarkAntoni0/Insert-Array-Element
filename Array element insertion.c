//  main.c
//  assignment 3
//  Created by Mark Antonio on 3/2/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.

#include <stdio.h>
int tempArray[]={};

void PreLocation(int location, int value){
    tempArray[location] = value;
}

void PostLocation(int location, int value){
}
    tempArray[location] = value;

int main() {
    int originalArraySize;
    int position;
    int elementToBeInserted;
	
    // receiving inputs from the user(size of array - elements)
    printf("Number of elements in the array: \n");
    scanf("%d",&originalArraySize);
    
    int originalArray[originalArraySize];
    
    for(int i=0; i<originalArraySize;i++){
        int j = i+1;
        printf("insert the elements in position [%d]: ", j);
        scanf("%d",&originalArray[i]);
    }

    // picking the location to insert in + the element to be inserted
    printf("insert the location in which the element should be inserted: \n");
    scanf("%d",&position);

    printf("insert the element to be inserted: \n");
    scanf("%d",&elementToBeInserted);

    // prelocation move
    for(int i=0;i<position;i++){
        tempArray[i] = originalArray[i];
    }

    // post location move
    for(int i=position;i<=originalArraySize+1;i++){
        tempArray[i] = originalArray[i-1];
    }

    // location move
        tempArray[position-1] = elementToBeInserted;
    // printing the output

    printf("{");
    for(int i=0;i<originalArraySize+1;i++){
        printf("%d ",tempArray[i]);
    }
    printf("}");
	
    return 0;
}