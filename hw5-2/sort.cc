#include <iostream>
void swap(int *a,int i,int j){
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void bubble_sort(int *a,int len){
    int max = len-1;
    int i,j;
    for(i=0;i<max;i++){
        for(j=0;j<max-i;j++){
            if(a[j+1]<a[j]){
                swap(a,j,j+1);
            }
        }
    }
}
