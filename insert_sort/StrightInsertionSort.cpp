void stright_insert_sort(int *a, int n){
	int i;
	for(i=1; i<n; i++){
		int base = a[i];
		int j=i;
		while( j>0 && base<=a[j-1] ){
			a[j] = a[j-1];
			j--;
		} 
		a[j] = base;
	}
}
