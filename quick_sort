/*
*This quick sort is used to sort from low to high.
Ths quick sort is not a stable sort method.
*/
 void quick_sort(int *a,int left,int right){
	 if(left>=right) return ;
	 int bl=left;
	 int br=right;
	 int base=a[left];
	 while(bl<br){
		 while( bl<br && base<a[br]) br--;
		 a[bl] = a[br];
		 while( bl<br && base>=a[bl]) bl++;
		 a[br] = a[bl];
	 }
	 a[bl] = base;
	 quick_sort(a, left, bl-1);
	 quick_sort(a, bl+1, right);
 }
/*
Here is another method of the quick sort. It's obvious that the method before is better.
void quick_sort(int a[],int left,int right){
	 if(left>=right) return ;	
	 int bl=left;
	 int br=right;
	 do{
	 	 int bb=a[left];
		 while(a[bl]<=bb&&(bl<right)) bl++; 
		 while(a[br]>bb&&(br>left)) br--;
		 if(bl<br){
			 int tmp1=a[bl];
			 a[bl]=a[br];
			 a[br]=tmp1;
		 }else{
			 int tmp2=a[left];
			 a[left]=a[br];
			 a[br]=tmp2;
		 }		
	 }while(bl<br);
	 quick_sort(a,left,br-1);
	 quick_sort(a,br+1,right);
}
*/
