#include <stdio.h>
#include <stdbool.h>
int findmin(int arr[], int size)
{
    int min = arr[0];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int findmax(int arr[], int size)
{
    int max = arr[0];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int target(int arr[], int size, int search)
{
    printf("\n\nLooking for %d: ", search);
    int k, i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            k = arr[i];
            printf("\nMatched item %d ", k);
        }
        else
        {
            k = -1;
        }
    }
    return k;
}

int main()
{
    int arr[100];
    int i = 0, f, find, l = 0;
    int min = 0, max = 0;
    int choice;

    while (true)
    {

        printf("\n1.Insert \n2.Show The list \n3.Find Maximum \n4.Find Minimum \n5.Search Item \n6.Exit");
        printf("\nPlease choose your option: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: /*Taking input */
            printf("\nEnter array size: ");
            scanf("%d", &l);
            for (i = 0; i < l; i++)
            {
                printf("Enter element no %d: ", (i + 1));
                scanf("%d", &arr[i]);
            }

            break;
        case 2:
            printf("\n");
            printf("Elements are: ");
            for (i = 0; i < l; i++)
            {
                printf("\n%d", arr[i]);
            }
            break;
        case 3:
            /*Finding maximum*/
            max = findmax(arr, l);
            printf("\nMaximum is : %d", max);
            break;
        case 4: /*Finding minimum*/
            min = findmin(arr, l);
            printf("\nMinimum is : %d", min);
            break;
        case 5: /*Search item*/

            printf("\nInput your number:   ");
            scanf("%d", &f);
            find = target(arr, l, f);
            printf("\nSearched item: %d", f);
            if (find < 0)
            {
                printf("\nItem not found");
            }
            else
            {
                printf("\nItem found");
            }
            break;
        case 6:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}
