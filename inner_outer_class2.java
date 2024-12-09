class outer{
    void display(){
        System.out.println("This is outer calss display method!!");
    }
    class innner{
        void display(){
            System.out.println("This is inner calss display method!!");
        }
    }
}
public class inner_outer_class2 {

    public static void main(String[] args) {
        outer obj = new outer();
        // obj.display();

        outer.innner obj2 = obj.new innner();
        obj2.display();
    }
}