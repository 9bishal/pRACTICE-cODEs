#include<stdio.h>
#define MAX 5
int f=-1;
int r=-1;
int main(){
    int cq[MAX];
    int ch;
    int elem;
    while(1){
        printf("\n\n1.Insert \n2.Delete \n3.Display \nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            if ((f==-1 && r==MAX-1) || (f==r+1)){
                printf("Queue is full!!!");
            }
            else{
                printf("Entert the element to enter:");
                scanf("%d",&elem);
                if(f==-1){
                    f=0;
                }
                r=(r+1)%MAX;
                cq[r]=elem;
                printf("Element %d is inserted",elem);
            }
            break;


            case 2:
                if(f==-1){
                    printf("\nQueue is Empty!!");
                }
                else{
                    printf("The deleted element is:%d",cq[f]);
                    if(f==r){
                        f=r=-1;
                    }
                    else{
                        f=(f+1)%MAX;
                    }
                }
            break;


            case 3:
                if(f==-1){
                    printf("\nQueue is Empty!!!");
                }
                else{
                printf("Queue elements:");
                    for(int i=f;i!=r; i=(i+1)%MAX){
                        printf("%d ",cq[i]);
                    }
                    printf("%d\n",cq[r]);
                }
            break;
        

            case 4:
                return 0;

            default:
            printf("\nEnter a valid integer!!");
        }
    }
    return 0;   
}