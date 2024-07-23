//Write a program which accept matrix from user and display transpose of the matrix.
import java.util.*;

class Matrix 
{
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

    public void TransposeMatrix() 
    {
        int i = 0, j = 0;
        int Transpose[][] = new int[iCol][iRow];

        for ( i = 0; i < iRow; i++) 
        {
            for ( j = 0; j < iCol; j++) 
            {
                Transpose[j][i] = Arr[i][j];
            }
        }
        System.out.println("Transpose of the matrix is : ");

        for ( i = 0; i < iCol; i++) 
        {
            for ( j = 0; j < iRow; j++) 
            {
                System.out.print(Transpose[i][j] + "\t");
            }
            System.out.println();
        }
    }

}


class Assignment49_1
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
        mobj.TransposeMatrix();
    }
}