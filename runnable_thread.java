class myhtreads implements Runnable{
    public void run(){
        try {
            for(int i=0; i<5; i++){
                System.out.println(Thread.currentThread().getName() + " is running step "+i);
                Thread.sleep(500);
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(Thread.currentThread().getName()+" is interupted!!");
        }
    }
}
public class runnable_thread {
    public static void main(String[] args) {
        myhtreads task = new myhtreads();
        Thread thread1 = new Thread(task);
        thread1.start();
    }
}
