#include<stdio.h>
#include<stdlib.h>
int main(){
    int allocated, block_num, index, length, block[50]={0},choice;
    printf("Enter the no. of blocka that are already allocated:");
    scanf("%d", &allocated);
    printf("Enter the allocated block number: ");
    for (int i = 0; i < allocated; i++)
    {
        /* code */
        scanf("%d", &block_num);
        block[block_num]=1;
    }
    do
    {
        /* code */
        printf("Enter the starting block  and length: ");
        scanf("%d %d", &index, &length);
        for(int i=allocated; i<allocated+length; i++){
            if(block[i]==0){
                block[i]=1;
                printf("%d-->Allocated\n",i);
            }
            else{
                printf("%d-->already Allocated\n",i);
                length++;
            }
        }
        printf("Allocated anther file ? (Yes-1/ No-0): ");
        scanf("%d", &choice);
    } while (choice==1);
    
}