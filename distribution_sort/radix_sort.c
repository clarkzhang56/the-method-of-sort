/*
The radix sort is a kind of sort which needn't to compare the element.
It's compare the %10 parts and divide them into ten buckets. Then compare 
the ten digit and divide the sort in the buckets before into other buckets
In the end, the sequence is sorted into the last buckets.
We have to say that this method is better to compare the strings or others rather 
than the digits.

* maxlen is used to calculate the bits of the biggest num in the sequence.
* The method below are all written by myself. It's obviously not elegent.(~v~)
*MAXSIZE is the max col of the two dimensional array.
*/
#define MAXSIZE 10
int maxlen(int *a,int n){
	int max = 0;
	int i;
	for(i=0; i<n; i++){
		while((int)(a[i]/pow(10,max))%10!=0) max++;
	}
	return max;
}
void radix_sort(int *a, int n, int max){
	int num = 0;
	for(; num<max; num++){
		int b[10][MAXSIZE] = {}};
		int i,j,k = 0;
		for(i=0; i<n; i++){
			j = ((int)(a[i]/(pow(10,num))))%10;
			for(k=0; k<n; k++){
				if(b[j][k] == NULL) b[j][k] = a[i];
				break;
			}
		}
		int m = 0;
		for(i=0; i<10; i++){
			for(j=0; j<n; j++){
				if(b[i][j]!=NULL){
					a[m] = b[i][j];
					m++;
				}
			}
		}
	}
}
