class box{
    double width;
    double height;
    double depth;
    box(box ob){
        width=ob.width;
        height=ob.height;
        depth=ob.depth;
    }

    box(double w, double h, double d){
        width=w;
        height=h;
        depth=d;
    }
    box(){
        width=-1;
        height=-1;
        depth=-1;
    }

    box(double len){
        width=height=depth=len;
    }
    double volume(){
        return width*height*depth;
    }
}

public class object_as_parameter {
    public static void main(String[] args) {
        box myBox1 = new box(10,20,15);
        box myBox2 = new box();
        box myBox3 = new box(7);
        box myBox4 = new box(myBox1);

        System.out.println("Volume of box 1 is "+ myBox1.volume());
        System.out.println("Volume of box 2 is "+ myBox2.volume());
        System.out.println("Volume of box 3 is "+ myBox3.volume());
        System.out.println("Volume of box 4 is "+ myBox4.volume());
        
    }
}
