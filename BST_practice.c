#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * left, *right;

};
struct node * createNode(int value){
    struct node * newNode = ( struct node *)malloc(sizeof( struct node ));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;

}
struct node * insert(struct node *root, int value){
    if(root==NULL){
        return createNode(value);
    }
    if(value<root->data){
        root->left=insert(root->left, value);
    }
    else if(value>root->data){
        root->right=insert(root->right, value);
    }
    return root;
}


struct node * search(struct node * root, int key){
    if(root==NULL || root->data==key){
        return root;
    }
    if(key<root->data){
        return search(root->left, key);
    }
    return search(root->right,key);
}

struct node *preorder(struct node * root){
    if(root!=NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
}
struct node * inorder(struct node * root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node * postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    struct node * root =NULL;
    int choice, key, value, n,i;
    while (1)
    {
        /* code */

        printf("\n\n");
        printf("\n_____Menu____");
        printf("\n1.Insert an Element in to BS1");
        printf("\n2.PreOrder Traversal");
        printf("\n3.InOrder Traversal");
        printf("\n4.PostOrder Traversal");
        printf("\n5.Search for a Key");
        printf("\n6.EXIT");
        printf("\nEnter your Choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of Element to insert: ");
            scanf("%d", &n);
            for(int i=0; i<n; i++){
                scanf("%d", &value);
                root=insert(root, value);
            }
            printf("Elements Inserted on a BST!!");

            break;
        

        case 3:
            printf("Inorder Traversal:");
            inorder(root);
            break;


        case 4:
            printf("PostOrder Traversal:");
            postorder(root);
            break;

        case 2:
            printf("PreOrder Traversal:");
            preorder(root);
            break;


        case 5:
            printf("Enter a key to saerch:");
            scanf("%d",&key);
            if(search(root, key)){
                printf("Key %d Found!!!", key);
            }
            else
            {
                printf("Key not Found!!!");
            }
            break;


        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
    

}
