// Approach 2
import java.util.Scanner;
class program35
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;

        return iAns;

    }
    public static void main(String A[])
    {
          Scanner scanner = null;
           int iValue1 = 0, iValue2 = 0, Result = 0;

          scanner = new Scanner(System.in);


          System.out.println("Enter First No:");
          iValue1 = scanner.nextInt();

          System.out.println("Enter First No:");
          iValue2 = scanner.nextInt();

          Result = Addition(iValue1, iValue2) ;  

          System.out.println("Addition is "+Result);

    }
}   