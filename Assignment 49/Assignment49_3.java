//Write a program which accept matrix and reverse the contents of each row.
import java.util.*;

class Matrix {
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B) {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    protected void finalize() {
        Arr = null;
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        System.out.println("Matrix is : ");

        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void ReverseCol() 
    {
        int j = 0;
        for (j = 0; j < iCol; j++) 
        {
            int start = 0;
            int end = iRow - 1;

            while (start < end) 
            {
                int temp = Arr[j][start];
                Arr[j][start] = Arr[j][end];
                Arr[j][end] = temp;
                start++;
                end--;
            }
        }
    }

}

class Assignment49_3
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
        mobj.ReverseCol();
        System.out.println("Matrix after reversing row : ");
        mobj.Display();
        
       
    }
}