public class StackOverflowDemo {

    static int pass;

    static void foo(){
        System.out.printf("foo() was called %d times\n", ++pass);
        foo();
    }

    public static void main(String[]args){
        foo();
    }
}