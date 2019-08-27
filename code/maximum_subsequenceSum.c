#include <stdio.h>

int MaxSubseqSum(int A[], int length);

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
	int MaxSum=MaxSubseqSum(A,K);
	printf("%d",MaxSum);
	
	return 0;
 } 
 
int MaxSubseqSum(int A[], int length)
{
	int ThisSum=0,MaxSum=0;
	for (int i=0;i<length;i++){
		ThisSum+=A[i];
		if (ThisSum>MaxSum){
			MaxSum=ThisSum;
		}
		if (ThisSum<0){
			ThisSum=0;
		}
	}
	
	return MaxSum;
}
