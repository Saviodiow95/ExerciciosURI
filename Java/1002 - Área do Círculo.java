import java.io.IOException;
 
import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
      Scanner ler = new Scanner(System.in);
       
       NumberFormat formatter = new DecimalFormat("#0.0000");
        double a, raio,pi = 3.14159;
        
        
        raio = ler.nextDouble();
        
        
        
        a= pi *(raio * raio);
  
         System.out.println("A=" + formatter.format(a));
        ler.close();
 
    }
 
}