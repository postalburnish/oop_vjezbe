#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

struct Matrix{
int cols;
int rows;
float**matrix;

int alociraj(){
    matrix=new float*[rows];
    for (int i=0;i<rows;i++){
        matrix[i]= new float[cols];
    }
return 0;
}

void upis(){
    cout << "broj stupaca" <<endl;
    cin >> cols;
    cout << "broj redova" << endl;
    cin >> rows;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];

        }
    }
}

/*int trans(struct Matrix*mat1){
    for(int i = 0; i < mat1->rows; i++){
            cout << " " << endl;
        for(int j = 0; j < mat1->cols; j++){
        cout << mat1->matrix[i][j];
        cout <<" ";}
    }
}
int ispis(struct Matrix mat1){
    for(int i = 0; i < mat1.rows; i++){
            cout<<" "<<endl;
        for(int j = 0; j < mat1.cols; j++){
        cout <<mat1.matrix[j][i];
        cout<<" ";}
    }
}

#include <iostream>
Matrix zbrajanje(struct Matrix *mat1,struct Matrix *mat2,struct Matrix *mat3){
if(mat1->cols==mat2->cols && mat1->rows==mat2->rows){
alociraj(&mat3);
for(int i = 0; i < mat3->rows; i++){
    for(int j = 0; j < mat3->cols; j++){
        mat3->matrix[i][j]= mat1->matrix[i][j]+ mat2->matrix[i][j];
        }
    }
ispis(&mat3);
}
else
    cout<<"nisu istih dimenzija no can do"<<endl;
}

int oduzimanje(struct Matrix *mat1,struct Matrix *mat2,struct Matrix *mat3){
if(mat1->cols==mat2->cols && mat1->rows==mat2->rows){
alociraj(&mat3);
for(int i = 0; i < mat3->rows; i++){
    for(int j = 0; j < mat3->cols; j++){
        mat3->matrix[i][j]= mat1->matrix[i][j]- mat2->matrix[i][j];
        }
    }
}
else
    cout<<"nisu istih dimenzija no can do"<<endl;
}

int gener(){
    //    x=a+rand()%(b-a+1);//
}


int mnozenje(struct Matrix *mat1,struct Matrix *mat2,struct Matrix *mat3){
if(mat1->rows==mat2->cols||mat2->rows==mat1->cols){

    }
else
    cout<<"no can do buddy nisu ulancane"<<endl;
    }
*/
};

int main()
{
    Matrix mat1;
   mat1.alociraj();
   mat1.upis();

    return 0;
}
