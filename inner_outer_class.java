// Filename: OuterClassWithInner.java

public class inner_outer_class {
    
    public void display() {
        System.out.println("Display method in Outer Class");
    }
    
    public class Inner {
        public void display() {
            System.out.println("Display method in Inner Class");
        }
    }
    
    public static void main(String[] args) {
        inner_outer_class outer = new inner_outer_class();
        outer.display();
        
        inner_outer_class.Inner inner = outer.new Inner();
        inner.display();
    }
}
