
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Average of Array\n");
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        printf("Enter %d ",i);
        scanf("%d",&a[i]);
    }

    float avg = 0;
    for(int i=0;i<n;i++){
        avg += a[i];
    }

    avg = avg/n;
    printf("The average of this array is: %f",avg);

    return 0;
}
