 #include<stdio.h>
 void merge(int a[],int low,int mid,int high)               //function definition
 {
    int b[25];
	int i=low,j=mid+1,k=0;
    while(i<=mid && j<=high)
    {
    	if(a[i]<a[j])
    	{
    		b[k]=a[i];
 		    i++;
 	    }
 	    else
 	    {
 	    	b[k]=a[j];
 	    	j++;
		}
		k++;
	}
	while(i<=mid)
	{
    	b[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	a[i]=b[k];
 }
 
void mergesort(int a[],int low,int high)           //function definition
{
 	if(low<high)
 	{
 		int mid=(low+high)/2;
 		mergesort(a,low,mid);
 		mergesort(a,mid+1,high);
 		merge(a,low,mid,high);
    }
}

main()
{
	int a[25],i,n;
	printf("how many elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("the sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
