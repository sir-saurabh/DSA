// Linear Search:
// input: List of n elements, key
// output: key is present or absent. If present then its location.

// ALGORITHM:
// STEP 1: current_item = starting item of the list
// STEP 2: while(End of the list)
// STEP 3: if(current_item == key)
// STEP 4: return location of current element
// STEP 5: Exit
// STEP 6: else
// STEP 7: current_item = next element
// STEP 8: End if
// STEP 9: End while
// STEP 10: if(End of list)
// STEP 11: return key is absent
// STEP 12: STOP

#include<stdio.h>

int linearSearch(int arr[], int size, int key){

    int current_item = arr[0];
    int i = 0;
    while(i< size){
        if(current_item == key){
            return i; // key found at the index i.
        }
        else{
            current_item = arr[++i];
        }

        
    }

    if(i == size){
        return -1; // key not found in the list.
    }
}

int main(){

    int array[5] = {2,3,5,8,10};

    int a = linearSearch(array, 5, 10);

    if(a == -1){
        printf("Key does not found!");
    }
    else{
        printf("key found at index %d", a);
    }

    return 0;
}
