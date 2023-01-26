#include <stdio.h>
int main()
{
    int arr[4];
    int maaz,size,i, j, k,count=0;
    
printf("input the size of Arry\n: ");
                   scanf("%d",&size);
printf("you want to find unique number from %d elements\n",size);
         for(i=0;i<size;i++)
            {
                count++;
printf("Enter %dst number : ",count);
	                 scanf("%d",&arr[i]);
	    }
printf("\nThe unique elements found in the array are: \n");
        for(i=0; i<size; i++){
                maaz=0;
        for(j=0,k=size; j<k+1; j++){
             if (i!=j){
		     if(arr[i]==arr[j])
                maaz++;
}
}
             if(maaz==0)
printf("%d ",arr[i]);
}
       return 0;
}
