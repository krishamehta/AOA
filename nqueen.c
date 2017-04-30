#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//char a[10][10];
int board[10] ;
void print_board();
int feasible(int row,int column);
void nqueen(int row, int n);
int main()
{
 int n;
 printf("Enter the number of queens: ");
 scanf("%d",&n);
 nqueen(1,n);
 return 0;
}
void print_board(int n)
{
 int row,column;
 printf("\nThe solution is: \n");
 for(row=1;row<=n;row++)
 {
 for(column=1;column<=n;column++)
 {
 if(board[row]==column)
 printf("Q\t");
 else
 printf("-\t");
 }
 printf("\n\n");
 }
 printf("\n\n\n\n\n");
}
void nqueen(int row, int n)
{
 int column;
 for(column=1;column<=n;column++)
 {
 if(feasible(row,column))
 {
 board[row]=column;
 if(row==n)
 print_board(n);
 else
 nqueen(row+1,n);
 }
 }
}
int feasible(int row,int column)
{
 int i;
 for(i=1;i<row;i++)
 {
 if(board[i]==column)
 return 0;
 else if(abs(board[i]-column) == abs(i-row))
 return 0;
 }
 return 1;
}