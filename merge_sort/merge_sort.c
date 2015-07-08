/*
Merge Sort is used to sort two sorted sequence. Its biggest feature is it's a stable method.
a and b below are the two sequence. c is the result. m and n are the length of a and b.
*/
void merge_sort(int *c, int *a, int *b, int m, int n){
	int i=0, j=0, k=0;
	while(i<m+n){
		if(a[j]<b[k] && j<m && k<n){
			c[i] = a[j];
			i++;
			j++;
		}else{
			c[i] = b[k];
			i++;
			k++;
		}
		if(j == m){
			c[i] = b[k];
			i++;
			k++;
		}else if(k == n){
			c[i] = a[j];
			i++;
			j++;
		}
	}
}
