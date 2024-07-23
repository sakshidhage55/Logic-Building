//Write a program which accept matrix from user and one number from user and return frequency of that number
import java.util.*;

class Matrix
{
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    
    public void Display()
    {
        System.out.println("Matrix is : ");

        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Frequency(int No)
    {
        int i = 0, j = 0, iCount = 0;
        for(i = 0; i < iRow; i++)
        {
            for(j = 0;j < iCol; j++)
            {
               if(Arr[i][j] == No)
               {
                iCount++;
               }
                
            }
        }
        return iCount;
    }
    
}
class Assignment48_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iValue2 = sobj.nextInt();

        System.out.println("Enter the element that you want to search : ");
        int iNo = sobj.nextInt();

        Matrix mobj = new Matrix(iValue1, iValue2);

        mobj.Accept();
        mobj.Display();
        int iRet = 0;
        iRet = mobj.Frequency(iNo);
        System.out.println("Frequency of "+iNo+" is  : "+iRet);
    }
}