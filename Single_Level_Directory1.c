#include<stdio.h>
int main(){
    char directoryName[50], fileName[20][30];
    int fileSize[50];
    int numFiles;
    printf("Enter the name of the directory: ");
    scanf("%s", directoryName);
    printf("Enter the number of the files: ");
    scanf("%d",&numFiles);

    for(int i=0; i<numFiles; i++){
        printf("Enter the name of %d file: ", i+1);
        scanf("%s", fileName[i]);
        printf("Enter the size of %d file: ", i+1);
        scanf("%d", &fileSize[i]);
    }

        printf("Single Level Directory\n");
        printf("Directory Name: %s\n", directoryName);
        printf("Files\n");
        for (int i = 0; i < numFiles; i++)
        {
            /* code */
            printf("%d. %s (Size: %d in kb)\n", i+1, fileName[i], fileSize[i]);
        }
        return 0;

}

