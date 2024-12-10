#include<stdio.h>
int main(){
    char dircName[50];
    char fileName[50][20];
    int fileSize[50];
    int numFiles;
    printf("Enter the name if the directory: ");
    scanf("%s",dircName );
    printf("Enter the no. of files: ");
    scanf("%d", &numFiles);
    for(int i=0; i<numFiles; i++){
        printf("Enter the name of file %d: ",i+1);
        scanf("%s",fileName[i] );
        printf("Enter the size of the files %d: ",i+1);
        scanf("%d",&fileSize[i]);
    }

    printf("\nDirectory Structure");
    printf("Directory %s", dircName);
    printf("File\n");
    for(int i=0; i<numFiles; i++){
        printf("%d. %s (Size: %d in kb)\n", i+1, fileName[i], fileSize[i]);
    }
    return 0;
}