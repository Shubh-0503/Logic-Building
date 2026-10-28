import java.util.Scanner;

class program68
{
    

    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        
        Iteration iteration = new Iteration();
        System.out.println("Enter the Frequency: ");
        iValue = scanner.nextInt();
        iteration.display(iValue);
        
    }
}

class Iteration
{
    public void display(int iNo)
    {
        int iCnt = 0;
            iCnt = 1;
        
            do
            {
                System.out.println("_ _ _ _ _ _ _ _ ");
                System.out.println(iCnt + " Jay Ganesh...");
                System.out.println("_ _ _ _ _ _ _ _ _ ");
                iCnt++;
            }while(iCnt <= iNo);
        
        
    }
}