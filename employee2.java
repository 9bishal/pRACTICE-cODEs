import java.util.Scanner;

public class employee2 {
    private double raisalary(double salary, double percent){
        if(percent>0){
            salary=salary+salary*(percent/100);
        }
        else{
            System.out.println("Invalid value, Salary can't be increassed!!!");
        }
        return salary;
    }
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        System.out.println("Employee id:");
        int id=sc.nextInt();

        sc.nextLine();
        System.out.println("Enter Employee name:");
        String name = sc.nextLine();

        System.out.println("Enter Employee Salary:");
        double salary=sc.nextDouble();

        System.out.println("Enter raise percentage:");
        double raisePercentage =sc.nextDouble();

        employee2 e2 =new employee2();

        double updatedSalary = e2.raisalary(salary,raisePercentage);

		System.out.printf("\nEmployee after raise:\nID: %d\nName: %s\nUpdated Salary: %.2f\n", id, name, updatedSalary);
        sc.close();
    }
}

