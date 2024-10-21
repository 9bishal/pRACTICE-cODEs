import java.util.Scanner;

public class matrix2 {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        System.out.println("Enter the order of matrix:");
        int n=r.nextInt();
        int a[][]=new int[n][n];
        int b[][]=new int[n][n];
        int c[][]=new int[n][n];

        System.out.println("Enter the data of first matrix:\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                a[i][j]=r.nextInt();
            }
        }

        System.out.println("Enter the data of Second matrix:\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i][j]=r.nextInt();
            }
        }

        System.out.println("Data of first matrix:\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Data of Second matrix:\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Added two matrix result into:\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                c[i][j]=b[i][j]+a[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        r.close();
    }
}
