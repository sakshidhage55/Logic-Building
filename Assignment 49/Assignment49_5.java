//Write a program which accept and check whether the matrix is sparse matrix or not
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

    Boolean ChkSparse()
    {
        int iCount = 0;
        int total = iRow * iCol;

        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                if (Arr[i][j] == 0) 
                {
                    iCount++;
                }
            }
        }

        return iCount > total / 2;
    }
    }



class Assignment49_5
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
        boolean bRet = false;
        bRet = mobj.ChkSparse();
        if(bRet == false)
        {
            System.out.println("Matrix is not an Sparse matrix");
        }
        else
        {
            System.out.println("Matrix is an Sparse matrix");
        }
    }
}