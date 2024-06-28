import java.util.Scanner;

public Class MultiplicationTable {
    public static void main(String[] args) {
        
Scanner scanner = new Scanner(System.in);
      System.out.print("Enter a number: ");
    int num = scanner.nextInt();
      System.out.print("Enter the range: ");
        int range = scanner.nextInt();
        for (int i = 1; i <= range; i++) 
{
            System.out.println(num + " x " + i + " = " + (num * i));
        }
    }
}