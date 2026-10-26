// Write  a  program  to  accept  n  numbers  in  an  array  and  display  the  largest  and  smallest 
// number of the array.

#include <stdio.h>

int main()
{
    int arr[50],n;
    int i,j,temp;

    printf("Enter how many array elements you want to enter:");
    scanf("%d",&n);

    printf("Enter you array elements:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Here are you array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int largest = arr[0];
    int smallest = arr[0];
    
    for(i = 0; i<n; i++)
    {
        if ( arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    
    for(i = 0; i<n; i++)
    {
        if ( arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    
    
    printf("\n");
    
    printf("The smallest number is %d\n",smallest);
    printf("the Biggest number is %d\n",largest);
    
    return 0;
    
}