interface resizable{
    void resizewidht(int width);
    void resizeheight(int height);
}
class rectangle implements resizable{
    private int width;
    private int height;

    public rectangle(int width, int height){
        this.width=width;
        this.height=height;
    }
    //overide
    public void resizewidht(int newWidth){
        this.width=newWidth;
        System.out.println("New Widht:" + this.width);
    }

    public void resizeheight(int newheight){
        this.height=newheight;
        System.out.println("New Heigth:" + this.height);
    }

    public void displaydimension(){ 
    System.out.println("Current Dimension -> Width: " + width + "\nheight: " + height);    
    }
}

public class resizableRectangle{
    public static void main(String[] args){
        rectangle react = new rectangle(8,9);
        react.displaydimension();
        react.resizeheight(9);
        react.resizeheight(9);
        react.resizeheight(9);
    }
}