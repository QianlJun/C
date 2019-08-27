#include <stdio.h>

struct ret MaxSubseqSum(int A[], int length);

struct ret{
	int MaxSum;
	int i;
	int j;
}; 

int main()
{
	int K=0;
	scanf("%d",&K);
	int A[K];
	int x=0;
	for (int i=0;i<K;i++){
		scanf("%d",&x);
		A[i]=x;
		//printf("%d ",A[i]);
	}
	struct ret MaxSeq=MaxSubseqSum(A,K);
	if (MaxSeq.i==A[0] && MaxSeq.j==A[0] && MaxSeq.MaxSum==0){
		printf("%d %d %d",MaxSeq.MaxSum,A[0],A[K-1]);
	}else{
		printf("%d %d %d",MaxSeq.MaxSum,MaxSeq.i,MaxSeq.j);
	}
	return 0;
 } 
 
struct ret MaxSubseqSum(int A[], int length)
{
	struct ret MaxSeq;
	MaxSeq.i =A[0];
	MaxSeq.j =A[0];
	MaxSeq.MaxSum =0;
	int ThisSum=0;
	for (int i=0;i<length;i++){
		ThisSum+=A[i];
		if (ThisSum>MaxSeq.MaxSum){
			MaxSeq.MaxSum=ThisSum;
			MaxSeq.j =A[i];
			int sum=0;
			int n=i+1;
			while(sum !=MaxSeq.MaxSum ){
				n--;
				sum+=A[n];
			} 
			MaxSeq.i =A[n];
		}
		if (ThisSum<0){
			ThisSum=0;
		}
	}
	
	return MaxSeq;
}
