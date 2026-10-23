// Approach 1
import java.util.Scanner;
class program33
{
    public static void main(String A[])
    {
          Scanner scanner = null;
           int iValue1 = 0, iValue2 = 0, Result = 0;

          scanner = new Scanner(System.in);


          System.out.println("Enter First No:");
          iValue1 = scanner.nextInt();

          System.out.println("Enter First No:");
          iValue2 = scanner.nextInt();

          Result = iValue1 + iValue2;

          System.out.println("Addition is "+Result);

    }
}   