#include<stdio.h>
#include<stdlib.h>
int main(){
    int block[50]={0}, index, length, allocated, choice;
    int block_num;
    printf("Enter the no. of block to be allocated: ");
    scanf("%d", &allocated);
    printf("Enter the block number: ");
    for(int i=0; i<allocated; i++){
        scanf("%d", &block_num);
        block[block_num]=1;
    }
    do
    {
        /* code */
        printf("Enter the starting index and the length: ");
        scanf("%d %d", &index, &length);
        for (int i = index; i < index+length; i++)
        {
            /* code */
            if(block[i]==0){
                block[i]=1;
                printf("%d-->Allocated\n", i);

            }
            else{
                printf("%d-->Already Allocated\n", i);
            }
        }
        printf("Do you want to allocates another file?(Yes-1/ No-0)");
        scanf("%d", &choice);
    } while (choice==1);
    return 0;
}