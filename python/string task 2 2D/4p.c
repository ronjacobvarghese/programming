#include<stdio.h>
void read_matrix(int matrix[][10],int row,int column);
void transform_matrix(int matrix[10][10],int row,int column);
int count(int matrix[10][10],int row,int column,int a,int b);
void print_matrix(int matrix[10][10],int row,int column);
int limit1A,limit1B,limit0A,limit0B,k;
int main(){
int matrix[10][10];
int row,column;
printf("Enter the no of the rows and columns: ");
scanf("%d %d",&row,&column);
printf("Enter the elements in the matrix: \n");
read_matrix(matrix,row,column);
printf("Enter limit1A and limit1B: ");
scanf("%d %d",&limit1A,&limit1B);
printf("Enter limit0A and limit0B: ");
scanf("%d %d",&limit0A,&limit0B);
printf("Enter k:");
scanf("%d",&k);
for (int i=0;i<k;i++){
    transform_matrix(matrix,row,column);
}
printf("The matrix after %d transformations is: \n",k);
print_matrix(matrix,row,column);
return 0;
}

void read_matrix(int matrix[10][10],int row,int column){
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
}

void transform_matrix(int matrix[10][10],int row,int column){
int temp[10][10];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int c=count(matrix,row,column,i,j);
            
            if (matrix[i][j]==1){
                if(limit1A>c-1 || c-1>limit1B){
                    temp[i][j]=0;
                }
				else{
					temp[i][j]=1;
            	}
			}
            else{
                if(limit0A>c|| c>limit0B){
                   temp[i][j]=0;
                }
				else{
					temp[i][j]=1;
				} 
			}	
		}
	}
	for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
		matrix[i][j]=temp[i][j];
	}
	}
}
    
int count(int matrix[10][10],int row,int column,int a,int b){
    int x1=(a>0?a-1:a);
    int x2=(a==row-1?a:a+1);
    int y1=(b>0?b-1:b);
    int y2=(b==column-1?b:b+1);
    int c=0;
    for (int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if (matrix[i][j]==1){
                c=c+1;
            }
        }
    }
    return c;
}
void print_matrix(int matrix[10][10],int row,int column){
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
printf("%d ",matrix[i][j]);
}
printf("\n");
}
}
