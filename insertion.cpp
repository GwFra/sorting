#include <iostream>
//#include <stdio.h> 
//#include <math.h>
using namespace std;

int* insertion(int*,int);
void printArray(int*,int);//pass array

int main(){
  int array[5] = {6,4,8,2,10};
  int n = sizeof(array)/sizeof(array[0]);//total bits/bit of one element 
  int *arrSort = insertion(array,n);
  printArray(arrSort,n);
  return 0;
}

int* insertion(int arr[], int size){//pass arrays
  int i, j, key;
  for( i = 1; i < size; i++)
  {
    key = arr[i];
    j = i-1;
    /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
    while (j >= 0 && arr[j] > key)
    {
      arr[j+1] = arr[j];
      j = j-1;
    }
    arr[j + 1] = key;
  }
  return arr;
}

void printArray(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout << arr[i];
  }
  cout << endl;
  }

