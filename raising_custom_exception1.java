class divisionbyzeroexception extends Exception{
    public divisionbyzeroexception(String message){
        super(message);
    }
} 

class calculator{
    public double divide(double numenator, double denominator) throws divisionbyzeroexception{
        if(denominator==0){
            throw new divisionbyzeroexception("Cn't be divisible!!");

        }return numenator/denominator;
    }
}

public class raising_custom_exception1 {
    public static void main(String[] args) {
        calculator cal1 = new calculator();
        double numenator=90;
        double denominator =80;
        try {
            double result = cal1.divide(numenator, denominator);
            System.out.println(result);
        } catch (divisionbyzeroexception e) {
            // TODO: handle exception
            System.err.println(e.getMessage());
        }
        finally{
            System.out.println("program executed successfullly!!");
        }
        
    }
}
