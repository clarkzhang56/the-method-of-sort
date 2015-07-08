/*
This is the shell sort. Its time complexity is lower than O(n2).
a is the array and n is the length of the array.
*/

void Shell_sort(int *a, int n){
  int step= n/2;
  while(step>0){
    int i;
    for(i=step; i<n; i++){
       int j= i-step;
       int base= a[i];
       while(j>=0 && a[j]>base){
        a[j+step]= a[j];
       j-= step;
      }
    a[j+step] = base;
    }
    step/= 2;
  }
}
