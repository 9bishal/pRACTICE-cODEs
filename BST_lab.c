#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node*left, *right;
};

struct node* createNode(int value){
    struct node* newNode =(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->right=newNode->left=NULL;
    return newNode;
}

struct node* insert(struct node* root, int value){
    if(root==NULL){
        return createNode(value);
    }
    if(value<root->data){
        root->left=insert(root->left, value);
    } else if(value>root->data){
        root->right=insert(root->right, value);
    }
    return root;
}

void inorder(struct node* root){
    if(root!=NULL){
        
        inorder(root->left);
        printf("%d", root->data);
        printf("\t");
        inorder(root->right);
    }
}


void preorder(struct node* root){
    if(root!=NULL){
        printf("%d", root->data);
        printf("\t");
        preorder(root->left);
        
        preorder(root->right);
    }
}

struct node* search(struct node* root, int key){
    if(root==NULL || root->data==key){
        return root;
    }
    if(key<root->data){
        return search(root->left, key);
    }
    return search(root->right, key);
}

int main(){
    int key, value, i, n;
    struct node* root=NULL;
    int choice;
    while (1)
    {
        /* code */
        printf("\n");
        printf("\nMenu");
        printf("\n1.Insert Element into BST");
        printf("\n2.Inorder Traversal");
        printf("\n3.preorder Traversal");
        printf("\n4.Search a key");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
                printf("Enter the number of element ot be inserted: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++)
                {
                    printf("Enter %d Element: ", i+1);
                    scanf("%d", &value);
                    root=insert(root,value);
                }
                printf("Elements Inserted Successfully!!");
            break;
        
        case 3:
            printf("PreOrder Traversal!!");
            preorder(root);
            break;

        case 2:
            printf("Inoreder Traversal!!");
            inorder(root);
            break;
        case 4:
            printf("Enter key to Search: ");
            scanf("%d", &key);
            if(search(root, key)){
                printf("Key Found!!");
            }
            else{
                printf("Key didn't found!!");
            }
            break;
        case 5:
            printf("Exiting the Program!!!");
            exit(0);
        default:
            printf("Enter the valid choice!!!");
        }

    }
    return 0;

}