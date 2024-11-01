class factorial{
    int fact(int n){
        if(n==1){
            return 1;
        }
        else{
            return fact(n-1)*n;
        }
    }
}

public class recursion {
    public static void main(String[] args) {
        factorial f = new factorial();
        System.out.println("Factorial of 3 is "+f.fact(3));
        System.out.println("Factorial of 4 is "+f.fact(4));
        System.out.println("Factorial of 5 is "+f.fact(5));
    }
}
