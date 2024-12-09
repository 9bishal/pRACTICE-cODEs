interface resizable{
    void resizewidht(double widht);
    void resizeheight(double height);
}

class rectangle implements resizable{
    private double height;
    private double widht;

    rectangle(double widht, double height){
        this.widht=widht;
        this.height=height;
    }

    public void resizewidht(double newWidth){
        System.out.println("Resizing width from: "+ this.widht +"to new width: " +newWidth);
        this.widht=newWidth;
    }

    public void resizeheight(double newheight){
        System.out.println("Resizing height from: "+ this.height +"to new width: " +newheight);
        this.height=newheight;
    }
     public void display(){
        System.out.println("Widht : "+this.widht+" Height: "+this.height);
    }
}
public class interfaces_java {
    public static void main(String[] args){
        rectangle rect = new rectangle(10, 4);
        rect.display();

        rect.resizeheight(50);
        rect.resizewidht(23);

        System.out.println("New Dimension: ");
        rect.display();
    }
    
}


