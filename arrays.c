#include <stdio.h>

int main()
{
    int nums[] = {20, 52, 54, 85, 45};
    nums[1] = 60;
    printf("%d \n", nums[1]);

    //GETING THE LENGTH OF AN ARRAY
    char numbers[] ={20,50,60,85,84,52,78,98,85};
    int index = 0;
    while((numbers[index]) != '\0'){
    printf("%d \n",index);
    index++;
    //printf("%p",*numbers[index]);
    }
    int arr_length=index-1;
    printf(" index: %d \n",index);
    printf(" length: %d \n",arr_length);

    return 0;
}