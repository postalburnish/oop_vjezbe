#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

struct Matrix
{
    int cols;
    int rows;
    float**matrix;

    int cindim()
    {
        cout << "number of rows" << endl;
        cin >> rows;
        cout << "number of collumns" <<endl;
        cin >> cols;
    }
    int alocate()
    {
        matrix=new float*[rows];
        for (int i=0; i<rows; i++)
        {
            matrix[i]= new float[cols];
        }
        return 0;
    }

    void input()
    {
        cout << "enter each number in the matrix"<<endl;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cout <<"enter"<< i+1<< j+1 <<":"<<endl;
                cin >> matrix[i][j];
            }
        }
    }

    void random()
    {
        int a,b;
        cout << "enter bottom limit" << endl;
        cin >> a;
        cout << "enter top limit" << endl;
        cin >> b;
        srand(time(0));
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                matrix[i][j]=a+rand()%(b-a+1);

            }
        }
    }

    void print()
    {
        for(int i = 0; i < rows; i++)
        {
            cout<<" "<<endl;
            for(int j = 0; j < cols; j++)
            {
                cout << setprecision(4)<<setw(4)<<matrix[i][j];
                cout<<" ";
            }
        }
        cout <<" "<<endl;
    }

    int delet()
    {

        for(int i = 0; i < rows; i++)
        {
            delete [] matrix[i];
        }
        delete [] matrix;
        return 0;
    }

    void trans(struct Matrix*mattrans)
    {
        mattrans->rows=cols;
        mattrans->cols=rows;
        mattrans->alocate();
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                mattrans->matrix[i][j]=matrix[j][i];
            }
        }
        cout<<"transponate"<<endl;
        mattrans->print();
        cout <<" "<<endl;
    }

    Matrix add(struct Matrix*mat2,struct Matrix*matsum)
    {
        if(cols==mat2->cols && rows==mat2->rows)
        {
            matsum->cols=cols;
            matsum->rows=rows;
            matsum->alocate();
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < cols; j++)
                {
                    matsum->matrix[i][j]=mat2->matrix[i][j]+matrix[i][j];
                }
            }
            cout << "addition" << endl;
            matsum->print();
            cout <<" "<<endl;
        }
        else
            cout<<"cant perform addition"<<endl;
    }


    Matrix subtract(struct Matrix*mat2,Matrix*matsub)
    {
        if(cols==mat2->cols && rows==mat2->rows)
        {
            matsub->rows=rows;
            matsub->cols=cols;
            matsub->alocate();
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < cols; j++)
                {
                    matsub->matrix[i][j]=mat2->matrix[i][j]-matrix[i][j];
                }
            }
            cout << "subtraction" << endl;
            matsub->print();
            cout << " " <<endl;

        }
        else
            cout<<"cant perform subtraction"<<endl;
    }


    void multiply(struct Matrix *mat2,struct Matrix*matmult)
    {
        if(cols==mat2->rows)
        {
            matmult->rows=rows;
            matmult->cols=mat2->cols;
            matmult->alocate();
            for(int i=0; i<matmult->rows; i++)
            {
                for(int j=0; j<matmult->cols; j++)
                {
                    for(int ii=0; ii<cols; ii++)
                    {
                        matmult->matrix[i][j]+=matrix[i][ii]*mat2->matrix[ii][j];
                    }
                }
            }
            cout << "multiplication" <<endl;
            matmult->print();
            cout <<" "<<endl;
        }
        else
            cout<<"cant preform multiplication, matrix arent chained"<<endl;
    }
};

int main()
{
    Matrix mat1,mat2,matrand,matmult,matsum,matsub,mattrans;

    mat1.cindim();
    mat1.alocate();
    mat1.input();
    mat1.print();
    mat1.trans(&mattrans);

    mat2.cindim();
    mat2.alocate();
    mat2.input();
    mat2.print();

    mat1.add(&mat2,&matsum);

    mat1.subtract(&mat2,&matsub);

    mat1.multiply(&mat2,&matmult);

    matrand.cindim();
    matrand.alocate();
    matrand.random();
    matrand.print();

    mat1.delet();
    mat2.delet();
    matrand.delet();
    matmult.delet();


    return 0;
}
