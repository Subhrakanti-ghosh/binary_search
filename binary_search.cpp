#include<stdio.h>
#include<conio.h>
int binary_search(int *, int , int ,int, int);
main()
{
	int f,l,i,j,n,k,m;
	int arr[20];
	printf("\nEnter the size of array....:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element into the array\n");
		scanf("%d",&arr[i]);
	}
	printf("enter the element u want to search\n:");
	scanf("%d",&k);
	f=0;
	l=n-1;
	m= binary_search(arr, n, f, l, k);
	
	printf("%d has been found at %d",k,m);
}
 int binary_search(int arr[], int n, int f, int l, int k)
 {
 	int mid;
 	
 	while(f<=l)
 	{
 		mid=(f+l)/2;
 		if(arr[mid]==k)
 		{
 			return mid;
 			break;
		 }
		 else if(arr[mid]<k)
		 {
		 	f=mid+1;
		 	
		 }
		 else
		 {
		 	l=mid-1;
		 }
	 }
	 return 0;
 }
