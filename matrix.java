import java.util.Scanner;

public class matrix{
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        System.out.println("Enter the number to create n*m matris");
        int n = r.nextInt();
        
        int a[][] = new int[n][n];
        int b[][] = new int[n][n];
        int c[][] = new int[n][n];


        System.out.println("Enter the first matrix data:");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                a[i][j]=r.nextInt();
            }
        }

        System.out.println("Enter the second matrix data:");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i][j]=r.nextInt();
            }
            
        }


        System.out.println("First Matrix\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }


        System.out.println("Second Matrix\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("Sum of two matrix\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                c[i][j]=a[i][j] + b[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        r.close();
    }
}