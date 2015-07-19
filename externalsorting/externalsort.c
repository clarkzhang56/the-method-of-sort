#include"stdio.h"
#define MAXSIZE 13	//the max num
#define MIN -1	//the min num
#define k 4  //four array

int a1[]={1,3,11,13};
int a2[]={2,4,8};
int a3[]={6,7,10};
int a4[]={5,9,12};
int r[MAXSIZE]={};    //the result array
int ls[k]={};         //the loser tree 
static int b[k+1]={0,0,0,0,MIN};    //the block array
static int t1 = 0;
static int t2 = 0;
static int t3 = 0;
static int t4 = 0;

void myprint(){
	//to show the result
	 int i;
	 for(i=0; i<MAXSIZE; i++){
		 printf("%d ",r[i]);
	 }
}
void input(int i){
	//input the number to the block
	 switch(i){
		 case 0:
			 if(t1 < 4){
				 b[i] = a1[t1];
				 t1++;
			 }else b[i] = MAXSIZE+1;
			 break;
		 case 1:
			 if(t2 < 3){
				 b[i] = a2[t2];
				 t2++;
			 }else b[i] = MAXSIZE+1;
			 break;
		 case 2:
			 if(t3 < 3){
				 b[i] = a3[t3];
				 t3++;
			 }else b[i] = MAXSIZE+1;
			 break;
		 case 3:
			 if(t4 < 3){
				 b[i] = a4[t4];
				 t4++;
			 }else b[i] = MAXSIZE+1;
			 break;
		 default:
			 break;
	 }
}
void Adjust(int ls[], int s){
	//adjust the loser tree
	 int tmp = (s+k)/2;
	 while(tmp>0){
		 if(b[s] > b[ls[tmp]]){
			 int tt = s;
			 s = ls[tmp];
			 ls[tmp] = tt;
		 }
		 tmp /= 2;
	 }
	 ls[0] = s;
}
void CreateLoserTree(){
	 int i;
	 for(i=0; i<k; i++){
		 ls[i] = k;
	 }
	 for(i=k-1; i>=0; i--){
		 Adjust(ls, i);
	 }
}
void Merge(){
	//merge the num of the different array to r
	 int i;
	 for(i=0; i<k; i++){
		 input(i);
	 }
	 CreateLoserTree();
	 int j = 0;
	 r[j++] = b[ls[0]];
	 while(b[ls[0]] != MAXSIZE){
		 printf("\n");
		 myprint();
		 input(ls[0]);
		 Adjust(ls, ls[0]);
		 r[j++] = b[ls[0]];
	 }
}

int main(){

	 Merge();
	 printf("\nResult:\n");
	 myprint();
	
	 return 0;
}

