import java.util.Scanner;

class program58
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
        // input Filter
        if(iNo <= 0)
        {
            System.out.print("Invalid Input");
            return;
        }
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                System.out.println("Jay Ganesh...");
            }
        
        
    }
}