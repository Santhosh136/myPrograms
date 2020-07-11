class Recursion {
    public static int factorial(int a) {
        if(a == 0 || a== 1) return 1;
        else return a * factorial(a-1);
    }

    public static int fibonacci(int n) {
        if(n== 0) return 0;
        else if( n== 1) return 1;
        else  fibonacci(n-1)+fibonacci(n-2);
    }
    public static void main(String args[]) {
        
    }
}