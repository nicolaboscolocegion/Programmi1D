import java.text.DecimalFormat;
import java.text.NumberFormat;

public class conta{

    public static void main(String[] args) {
        
        long start = System.currentTimeMillis();
        int b=0;
        for(int i=0; i<2147483647; i++) b++;

        long end = System.currentTimeMillis();

        
    NumberFormat formatter = new DecimalFormat("#0.00000"); 
    System.out.print("Execution time is " + formatter.format((end - start) / 1000d) + " seconds"+b);

    }
    
}