/*
This is the simple selection sort. It's now a stable method.
A is the array. N is the length of the array.
*/
void selection_sort(int *a, int n){
	int i,j,k,t;
	 for(i=0;i<n;i++){
         k=i;
         for(j=i+1;j<n;j++){
            if(a[k]>a[j])
                k=j;
         }
         if (k!=i)
         {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
         }
    }
}
