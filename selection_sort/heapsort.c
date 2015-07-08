/*
The heap sort is a kind of select sort. 
It can be divide into two parts. 1st part is used for adjusting the heap to the 
big_heap which means the father node is bigger than its two son nodes.
2nd part exchange the root node with the last node. So the bigger one is pushed to the 
last.
The method after is used to sort the sequence from 0 to n-1. However, the sequence from 1 to n-1 
is much better to understand.
* a is the sequence. n is the length of the sequence. 
*/
void heap_adjust(int *a, int n){
	int i;
	for(i=0; i<=(n-1)/2; i++){
		int j = i;
		int flag = 0;
		while(j>=0 && 2*j+1<n && flag<2){ //the flag is used to avoid loop.
			int k;
			if(2*j+2<n && a[2*j+2]>a[2*j+1]) k = 2*j+2; //select the bigger son node to compare to father node.
			else k = 2*j+1;
			if(a[k]>a[j]){
				int tmp = a[j];
				a[j] = a[k];
				a[k] = tmp;
			}
			j = (j-1)/2;
			if(j==0) flag++;
		}
	}
}
void heap_sort(int *a, int n){
	for(; n>1; n--){
		heap_adjust(a, n);
		int tmp = a[0];
		a[0] = a[n-1];
		a[n-1] = tmp;
	}
}
