#include <stdio.h>
#include <stdlib.h>

void reverse(int i, int j, char a[]) {
    if (i < j) {
        char t = a[i];
        a[i] = a[j];
        a[j] = t;
        reverse(i + 1, j - 1, a);
    }
}

int main()
{
    printf("Average of Array\n");
    int n;
    printf("Enter the number of characters: ");
    scanf("%d",&n);
     char a[n];
    printf("Enter %d characters: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &a[i]); // Read each character into array a
    }


    reverse(0,n-1,a);

    for(int i=0;i<n;i++)
    {
        printf("%c \t",a[i]);
    }

    return 0;
}
