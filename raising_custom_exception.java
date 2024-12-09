class divisionbyzeroexception extends Exception{
    public divisionbyzeroexception (String message){
        super(message);
    }
}

class calculator{
    public double divide(double numenator, double denominator) throws divisionbyzeroexception{
        if(denominator==0){
            throw new divisionbyzeroexception("Denominator can't be zero!!");
        }
        return numenator/denominator;
    }
}
public class raising_custom_exception {
    public static void main(String[] args) {
        calculator cal = new calculator();
        double denominator=0;
        double numenator=10;
        try {
            double result = cal.divide(numenator, denominator);
            System.out.println(result);
        
        } catch (divisionbyzeroexception e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
        }
    }
}
