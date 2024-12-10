#include <stdio.h>

int main()
{
    char mainDirectory[50];
    int numSubDirs, i, j;
    char subDirNames[10][50], fileNames[10][10][50];
    int numFiles[10], fileSizes[10][10];

    printf("Enter the name of the main directory: ");
    scanf("%s", mainDirectory);

    printf("Enter the number of subdirectories in %s: ", mainDirectory);
    scanf("%d", &numSubDirs);

    for (i = 0; i < numSubDirs; i++)
    {

        printf("Enter the name of subdirectory %d: ", i + 1);
        scanf("%s", subDirNames[i]);

        printf("Enter the number of files in subdirectory %s: ", subDirNames[i]);
        scanf("%d", &numFiles[i]);

        for (j = 0; j < numFiles[i]; j++)
        {

            printf("Enter the name of file %d in subdirectory %s: ", j + 1, subDirNames[i]);
            scanf("%s", fileNames[i][j]);
            printf("Enter the size of file %d (in KB): ", j + 1);
            scanf("%d", &fileSizes[i][j]);
        }
    }

    printf("\nDirectory Structure:\n");
    printf("========================================\n");
    printf("Main Directory: %s\n", mainDirectory);
    for (i = 0; i < numSubDirs; i++)
    {
        printf(" Subdirectory: %s\n", subDirNames[i]);
        printf("  Files:\n");
        for (j = 0; j < numFiles[i]; j++)
        {
            printf("   %d. %s (Size: %d KB)\n", j + 1, fileNames[i][j], fileSizes[i][j]);
        }
    }
    printf("========================================\n");

    return 0;
}
