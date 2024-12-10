class myhtreads1 extends Thread{
    public myhtreads1(String threadname){
        super(threadname);
    }
    public void run(){
        try{
            for(int i=0; i<5; i++){
                System.out.println(Thread.currentThread().getName()+ " is runnning step "+i);
                Thread.sleep(500);
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
public class Create_and_Start_a_Thread {
    public static void main(String[] args){
        myhtreads1 childthread = new myhtreads1("thread-0");
        childthread.start();
        try{
            for(int i=0; i<6; i++){
                System.out.println(Thread.currentThread().getName()+ " is runnning step "+i);
                Thread.sleep(500);
            }
        }
        catch(Exception e){
            System.out.println(e);
        
        }
    }
}
