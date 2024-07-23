//Write a program which accept matrix from user and return largest number from both of the diagonals.
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
 public int MaxDiagonal() 
 {
        if (iRow != iCol) 
        {
            System.out.println("Unable to find maximum element because number of rows and columns are not the same");
            return -1;
        }
        int i = 0;
        int iMax1 = Arr[0][0];
        int iMax2 = Arr[0][iCol - 1];

        for (i = 0; i < iRow; i++) 
        {
            if (iMax1 < Arr[i][i]) 
            {
                iMax1 = Arr[i][i];
            }
            if (iMax2 < Arr[i][iCol - i - 1]) 
            {
                iMax2 = Arr[i][iCol - i - 1];
            }
        }

        return Math.max(iMax1, iMax2);
    }
    
}
class Assignment48_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iValue2 = sobj.nextInt();

        Matrix mobj = new Matrix(iValue1, iValue2);

        mobj.Accept();
        mobj.Display();
        int iRet = 0;
        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum element is : "+iRet);


    }
}