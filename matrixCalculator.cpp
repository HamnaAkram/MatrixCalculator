#include <iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>

using namespace std;
int addmatrix();
int determinant();
int submatrix();
int mulnum();
int mulmatrix();
int transpose();
void inverse();
int pow();
double d = 0;


int main()
{
    int choice,choice1;
     system("CLS");
    cout<<"\t"<<" Welcome to the program"<<endl;
    cout<<"  This program can perform the following operations: "<<endl;
    cout<<"  1. Addition"<<endl;
    cout<<"  2. Subtraction"<<endl;
    cout<<"  3. Multiplication"<<endl;
    cout<<"  4. Determinant"<<endl;
    cout<<"  5. Transpose"<<endl;
    cout<<"  6. Inverse"<<endl;
    cout<<"  7. Power Matrix"<<endl;

    cout<<endl;
    cout<<"  Please enter the number of operation you would like to perform: "<<endl;
    cout<<"   ";
    cin>>choice;
    {
            if (choice<1 || choice >7)
            {

                do
                {
                   cout<<"  Please enter number from one of the above given options."<<endl;
                   cout<< "  New Choice: ";
                   cin>>choice;
                }
                while(choice<1 || choice>7);
            }
            if (choice==1)
            addmatrix();
            else if (choice==2)
            submatrix();
            else if (choice==3)
            {
                system("CLS");
                cout<<"\t Welcome to the Multiplication Menu"<<endl;
                cout<<" Following operations can be performed with respect to Multiplication"<<endl;
                cout<<" 1. Multiplication by a number"<<endl;
                cout<<" 2. Multiplication by another matrix"<<endl<<endl;
                cout<<" Please enter the number of operation you would like to perform: ";
                cin>>choice1;
                if (choice1<1 || choice1>2)
            {

                do
                {
                   cout<<"  Please enter number from one of the above given options."<<endl;
                   cout<< "  New Choice: ";
                   cin>>choice1;
                }
                while(choice1<1 || choice1>2);
            }

                    if (choice1==1)
                        mulnum();
                    else if (choice1==2)
                        mulmatrix();
            }
            else if(choice==4)
            determinant();
            else if (choice==5)
            transpose();
            else if (choice==6)
            inverse();
            else if (choice==7)
            pow();

    }
return 0;
}


//Addition

int addmatrix()
{
    double a[10][10],b[10][10];
    int row,col;
    char choice;
    system("CLS");
    cout<<"  \t\t Adding Matrices"<<endl<<endl;
    cout<<"  Since for addition the order of both matrices must be same"<<endl;
    cout<<"  Please enter number of rows for both matrices: ";
    cin>>row;
    if (row<1 || row >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>row;
                }
                while(row<1 || row>10);
            }
    cout<<"  Please enter number of columns for both matrices: ";
    cin>>col;
    if (col<1 || col >10)
            {

                do
                {
                   cout<<"  Number of columns can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>col;
                }
                while(col<1 || col>10);
            }
    cout<<endl;
    cout << "  Enter values in the first matrix's " << endl;
    for(int i=0;i<row;i++)
    {
        cout<<"   Row "<<i+1<<endl;
        for(int d=0;d<col;d++)
        {
            cout<<"\t";
        cin>>a[i][d];
        }
        cout<<endl;
    }

    cout<<"  Enter values in the second matrix's "<<endl;
    for(int j=0;j<row;j++)
    {
        cout<<"   Row "<<j+1<<endl;
    for(int m=0;m<col;m++)
        {
        cout<<"\t";
        cin>>b[j][m];
        }
    cout<<endl;
    }
    double c[10][10],res;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            res=a[i][j]+b[i][j];
            c[i][j]=res;
        }
    }
    cout<<"  Result for addition is"<<endl;
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                cout<<"\t";
                cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<c[i][j];
                }
                cout<<endl;
            }

    cout<<"  Do you want to perform Addition again? If yes then press 'y', else press any character to return to the main menu."<<endl;
    cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            addmatrix();
        else
            main();

return 0;
}


//Subtraction
int submatrix()
{
    {
    double a[10][10],row,col,b[10][10];
    system("CLS");
    cout<<"\t \t Subtracting Matrices"<<endl<<endl;
    cout<<" Since to perform Subtraction the order of both matrices must be same"<<endl;
    cout<<" Enter number of rows for both matrices: ";
    cin>>row;
     if (row<1 || row >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>row;
                }
                while(row<1 || row>10);
            }
    cout<<" Enter number of columns for both matrices: ";
    cin>>col;
    if (col<1 || col >10)
            {

                do
                {
                   cout<<"  Number of columns can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>col;
                }
                while(col<1 || col>10);
            }
    cout << " Enter values in the first matrix's " << endl;
    for(int i=0;i<row;i++)
    {
        cout<<"  Row "<<i+1<<endl;
        for(int d=0;d<col;d++)
        {
        cout<<"\t";
        cin>>a[i][d];
        }
        cout<<endl;
    }

    cout<<" Enter values in the second matrix's "<<endl;
    for(int j=0;j<row;j++)
    {
        cout<<"  Row "<<j+1<<endl;
    for(int m=0;m<col;m++)
    {
    cout<<"\t";
    cin>>b[j][m];
    }
    cout<<endl;
    }
    double c[10][10];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"  Result for subtraction is"<<endl;
                    for(int i=0;i<row;i++)
                    {
                    for(int j=0;j<col;j++)
                    {
                    cout<<"\t";
                    cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<c[i][j];
                    }
                    cout<<endl;
                    }

    char choice;
     cout<<"  Do you want to perform Subtraction again? If yes then press 'y' else press any character to return to the main menu."<<endl;
    cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            submatrix();
        else
            main();
return 0;
}
}

//Multiplication with a number
int mulnum()
{
 double a[10][10],num;
 int row,col;
    system("CLS");
    cout<<"\t \t Multiplication of a Matrix with a Number "<<endl<<endl;
    cout<<"  Enter the number you want to multiply the matrix with: ";
    cin>>num;
    cout<<"  Enter number of rows of the matrix: ";
    cin>>row;
    if (row<1 || row >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>row;
                }
                while(row<1 || row>10);
            }
    cout<<"  Enter number of columns of the matrix: ";
    cin>>col;
    if (col<1 || col >10)
            {

                do
                {
                   cout<<"  Number of columns can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>col;
                }
                while(col<1 || col>10);
            }
    cout << "  Enter values in matrix's" << endl;
    for(int i=0;i<row;i++)
    {
        cout<<"   Row "<<i+1<<endl;
        for(int d=0;d<col;d++)
        {
            cout<<"\t";
        cin>>a[i][d];
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
        {
            for(int d=0;d<col;d++)
            {
            a[i][d]=num*a[i][d];
            }
        }
        cout<<endl;

    cout<<" Result for multiplication is"<<endl;
                    for(int i=0;i<row;i++)
                    {
                    for(int j=0;j<col;j++)
                    {
                    cout<<"\t";
                    cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<a[i][j];
                    }
                    cout<<endl;
                    }

    char choice;
     cout<<"  Do you want to perform Multiplication by a number again? If yes then press 'y', else press any character to return to the main menu."<<endl;
    cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            mulnum();
        else
            main();
return 0;
}


//Multiplication with a Matrix
int mulmatrix()
{
    double a[10][10],row,col,b[10][10];
    system("CLS");
    cout<<"\t \t \t Multiplication of a Matrix With Another Matrix"<<endl<<endl;
    cout<<" Since for performing multiplication between matrices the order of matrix 2 is the inverse of order of matrix 1."<<endl;
    cout<<" Enter number of rows for first matrix (number of columns for second matrix) : ";
    cin>>row;
    if (row<1 || row >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>row;
                }
                while(row<1 || row>10);
            }
    cout<<" Enter number of columns for first matrix (number of rows for second matrix) : ";
    cin>>col;
    if (col<1 || col >10)
            {

                do
                {
                   cout<<"  Number of columns can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>col;
                }
                while(col<1 || col>10);
            }
    cout << " Enter values in the first matrix's" << endl;
    for(int i=0;i<row;i++)
    {
        cout<<"  Row "<<i+1<<endl;
        for(int d=0;d<col;d++)
        {
            cout<<"\t";
        cin>>a[i][d];
        }
        cout<<endl;
    }

    cout<<" Enter values in the second matrix's"<<endl;
    for(int j=0;j<col;j++)
    {
        cout<<"  Row "<<j+1<<endl;
    for(int m=0;m<row;m++)
        {
        cout<<"\t";
        cin>>b[j][m];
        }
    cout<<endl;
    }
    double c[10][10];

    for(int i=0;i<row;i++)
        {
    for(int j=0;j<row;j++)
    {
        c[i][j]=0;
        for(int k=0;k<col;k++)
            {
    c[i][j]=c[i][j]+(a[i][k] * b[k][j]);
            }
    }
        }

    cout<<"  Result for multiplication is"<<endl;
                    for(int i=0;i<row;i++)
                    {
                    for(int j=0;j<row;j++)
                    {
                    cout<<"\t";
                    cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<c[i][j];
                    }
                    cout<<endl;
                    }


    char choice;
     cout<<"  Do you want to perform Multiplication by a Matrix again? If yes then press 'y' Else press any character"<<endl;
   cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            mulmatrix();
        else
            main();
return 0;
}


//Determinant



double det(int n, double mat[10][10])
{

    double submat[10][10];
    if (n==1)
    {
        return mat[0][0];
    }
    else if (n == 2)
    {
       return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));

    }
     else
    {
        for(int cofactor=0;cofactor<n;cofactor++)
        {
            int subi=0;
            for(int i=0;i<n;i++)
            {
                if(i==cofactor)
                {
                    continue;
                }
                 else
                 {
                    int subj=0;
                    for(int j=1;j<n;j++)
                    {
                        submat[subi][subj]=mat[i][j];
                        subj++;
                    }
                    subi++;
                 }
            }
            d = d + (pow(-1 ,cofactor) * mat[cofactor][0] * det(n - 1 ,submat));
        }
    }
    return d;

}



int determinant()
{
    system("CLS");
    int n;
    char choice;
    cout<<"  Since the determinant is only possible for a square matrix "<<endl;
    cout<<"  Please enter the order of matrix: " ;
    cin>>n;
    if (n<1 || n >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>n;
                }
                while(n<1 || n>10);
            }
    double mat[10][10];
    int i, j;
    cout<<"  Please Enter Elements in"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"   Row "<<i+1<<endl;
        for(j=0;j<n;j++)
        {
            cout<<"\t";
            cin>>mat[i][j];
        }
    }

    cout<<"\n  The Determinant of the Matrix is: "<<fixed<<setprecision(3)<<det(n,mat)<<endl<<endl;

cout<<"  Do you want to calculate the determinant again? If yes then press 'y',else press any character to return to the main menu."<<endl;
    cin>>choice;
if (choice=='y'||choice=='Y')
            determinant();
        else
            main();

}

//Inverse
void inverse()
{
   int i,j,k,n,l,m;
   double mat[10][10],t;
   system("CLS");
   cout<<"\t Inverse of a Matrix"<<endl<<endl;
   cout<<" Since Inverse is possible only for a square matrix"<<endl;
   cout<<" Please enter order of matrix: ";
   cin>>n;
    if (n<1 || n >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>n;
                }
                while(n<1 || n>10);
            }
   cout<<" Please enter elements of matrix"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<"  Row "<<i+1<<endl;
      for(j=0;j<n;j++)
      {
          cout<<"\t";
         cin>>mat[i][j];
      }
   }
      if (det(n,mat)==0)
        cout<<" Sorry! Inverse is not possible for this matrix because Determinant is equal to ZERO"<<endl;
      else
      {

   for(l=0;l<n;l++)
   {
      for(m=n;m<2*n;m++)
      {
          if(l==m-n)
             mat[l][m]=1;
         else
             mat[l][m]=0;
       }
   }
   for(i=0;i<n;i++)
   {
      t=mat[i][i];
      for(int g=i;g<2*n;g++)
          mat[i][g]=mat[i][g]/t;
      for(j=0;j<n;j++)
      {
         if(i!=j)
         {
            t=mat[j][i];
            for(k=0;k<2*n;k++)
                mat[j][k]=mat[j][k]-t*mat[i][k];
          }
          else continue;
      }
   }
   cout<<"\n\nThe inverse of the matrix is: \n\n";
   for(i=0;i<n;i++)
   {
      for(j=n;j<2*n;j++)
         cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<mat[i][j];
      cout<<"\n";
    }
    }




    char choice;
    cout<<endl;
    cout<<" Do you want to calculate the inverse again? If yes then press 'Y', else press any key to return to the main menu."<<endl;
        cin>>choice;
        if (choice=='y'||choice=='Y')
            inverse();
        else
            main();


}

//transpose
int transpose()
{
    double a[10][10];
    int row,col;
    system("CLS");
    cout<<"\t Transpose of a Matrix "<<endl;
    cout<<"  To calculate the transpose of the matrix" <<endl;
    cout<<"  Please enter Number of rows for the matrix: " ;
    cin>>row;
    if (row<1 || row >10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>row;
                }
                while(row<1 || row>10);
            }
    cout<<"  Please enter Number of columns for the matrix: " ;
    cin>>col;
    if (col<1 || col >10)
            {

                do
                {
                   cout<<"  Number of columns can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>col;
                }
                while(col<1 || col>10);
            }
    cout<<"  Please enter elements in the matrix's "<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<"   Row "<<i+1<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<"\t";
            cin>>a[i][j];
        }
    }
    double b[col][row];

    for (int i=0;i<col;i++)
    {
        for (int j=0;j<row;j++)
            b[i][j]=a[j][i];
    }

    cout<<"  The transpose of the matrix is"<<endl;
        for(int i=0;i<col;i++)
            {
                for(int j=0;j<row;j++)
                {
                cout<<"\t";
                cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<b[i][j];
                }
                cout<<endl;
            }


    char choice;
     cout<<"  Do you want to calculate the transpose again? If yes then press 'y', else press any character to return to the main menu."<<endl;
    cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            transpose();
        else
            main();
return 0;
}

//power
int pow()
{
    double a[10][10],c[10][10];
    int order,power;
    system("CLS");
    cout<<"\t Power of the matrix"<<endl;
    cout<<" Since power matrix is only possible for square matrix"<<endl;
    cout<<" Enter order of the matrix: ";
    cin>>order;
     if (order<1 || order>10)
            {

                do
                {
                   cout<<"  Number of rows can only be greater than 0 and less than 11."<<endl;
                   cout<< "  Please Re-enter:  ";
                   cin>>order;
                }
                while(order<1 || order>10);
            }
    cout<<" Enter the power of the matrix: ";
    cin>>power;
    if (power<=0)
    {
        do
        {
            cout<<" This value must be greater than 0. Please enter the value again"<<endl;
            cout<<" New Power: ";
            cin>>power;
        }
        while(power<=0);
    }

    cout<<" Enter Elements in matrix's \n";
    for(int i=0; i<order;i++)
    {
        cout<<" Row "<<i+1<<endl;
        for(int j=0;j<order;j++)
        {
            cout<<"\t";
            cin>>a[i][j];
        }
    }

    double b[10][10];
    for(int i=0; i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            b[i][j]=a[i][j];
        }
    }

if (power==1)
{
    cout<<"Matrix raised to the power "<<power<<"is as calculated below"<<endl;
                    for(int i=0;i<order;i++)
                    {
                    for(int j=0;j<order;j++)
                    {
                    cout<<"\t";
                    cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<a[i][j];
                    }
                    cout<<endl;
                    }
}
else
{
for(int m=1;m<power;m++)
{
    for(int i=0;i<order;i++)
        {
    for(int j=0;j<order;j++)
    {
        c[i][j]=0;
    for(int k=0;k<order;k++)
            {
    c[i][j]=c[i][j]+(a[i][k] * b[k][j]);
            }
    }
        }
        for(int i=0; i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            a[i][j]=c[i][j];
        }
    }


}

                    cout<<"Matrix raised to the power "<<power<<" is as calculated below"<<endl;
                    for(int i=0;i<order;i++)
                    {
                    for(int j=0;j<order;j++)
                    {
                    cout<<"\t"<<fixed<<setprecision(3)<<setw(6)<<c[i][j];
                    }
                    cout<<endl;
                    }
}

char choice;
     cout<<"  Do you want to calculate the power matrix again? If yes then press 'y', else press any character to return to the main menu."<<endl;
    cout<<"  ";
    cin>>choice;

        if (choice=='y'||choice=='Y')
            pow();
        else
            main();
return 0;
}




