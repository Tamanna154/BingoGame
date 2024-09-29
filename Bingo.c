#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define size 5
int a[size][size];
int b[size][size];

int a1[size][size];
int b1[size][size];
int isUnique (int arr[size][size], int value, int row, int col)
{
  for (int i = 0; i < size; i++)
    {
          for (int j = 0; j < size; j++)
	    {
	          if ((i != row || j != col) && arr[i][j] == value)
	        {
	            return 0;		// Not unique
	        }
	     }
     }
     return 1;			// Unique
}
void print(int arr[size][size])
{
    printf("\n B\tI\tN\tG\tO\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}
void bingo (int n)
{
    printf ("WELCOME BINGO!!!!");
    printf("\nThis game for 2 players..");
    int i, j, k;
    printf("\nplayer 1:");
           for (i = 0; i < size; i++)
	     {
	          for (j = 0; j < size; j++)
	          {
	              do
		          {
		               printf ("\nElement at position (%d, %d): ", i + 1, j + 1);
		               scanf ("%d", &a[i][j]);
		                   if (a[i][j] < 1 || a[i][j] > 25 ||!isUnique(a, a[i][j],i,j))
		                   {
		                       printf ("\nPlease enter a number between 1 and 25.");
		                   }
		           }
	               while (a[i][j] < 1 || a[i][j] > 25 || !isUnique(a, a[i][j],i,j));
	          }
	      }
          printf ("Player 1:\n");
          printf ("\n B\tI\tN\tG\tO\n");
          for (i = 0; i < size; i++)
	     {
	           for (j = 0; j < size; j++)
	           {
	               printf ("%d \t", a[i][j]);
	           }
	           printf ("\n");
	      }
	      printf("\nplayer 2:");
	      for (i = 0; i < size; i++)
	     {
	          for (j = 0; j < size; j++)
	          {
	              do
		          {
		               printf ("\nElement at position (%d, %d): ", i + 1, j + 1);
		               scanf ("%d", &b[i][j]);
		                   if (b[i][j] < 1 || b[i][j] > 25 || !isUnique(b, b[i][j],i,j))
		                   {
		                       printf ("\nPlease enter a number between 1 and 25.\n");
		                   }
		           }
	               while (b[i][j] < 1 || b[i][j] > 25 ||  !isUnique(b, b[i][j],i,j));
	          }
	      }
          printf ("\nPlayer %d's array elements:\n", k + 1);
          printf ("\n B\tI\tN\tG\tO\n");
          for (i = 0; i < size; i++)
	     {
	           for (j = 0; j < size; j++)
	           {
	               printf ("%d \t", b[i][j]);
	           }
	           printf ("\n");
	    }
}
void winningcondition(int *count, int *count2)
{
    
            if(((a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[3][3]==a[4][4]) && (a1[0][0]||a1[1][1]||a1[2][2]||a1[3][3]||a1[4][4])))
                {
                    (*count)++;
                    a1[0][0]=0,a1[1][1]=0,a1[2][2]=0,a1[3][3]=0,a1[4][4]=0;
                }
            if(((b[0][0]==b[1][1] && b[1][1]==b[2][2] && b[2][2]==b[3][3] && b[3][3]==b[4][4]) && (b1[0][0]||b1[1][1]||b1[2][2]||b1[3][3]||b1[4][4])))
                {
                    (*count2)++;
                    b1[0][0]=0,b1[1][1]=0,b1[2][2]=0,b1[3][3]=0,b1[4][4]=0;
                }
            if(((a[0][4]==a[1][3] && a[1][3]==a[2][2] && a[2][2] == a[3][1] && a[3][1] == a[4][0]) && (a1[0][4] || a1[1][3] || a1[2][2] || a1[3][1] || a1[4][0]))){
                a1[0][4] = 0, a1[1][3] = 0, a1[2][2] = 0, a1[3][1] = 0, a1[4][0] = 0;
                (*count)++;
            }
            if(((b[0][4]==b[1][3] && b[1][3]==b[2][2] && b[2][2] == b[3][1] && b[3][1] == b[4][0]) && (b1[0][4] || b1[1][3] || b1[2][2] || b1[3][1] || b1[4][0]))){
                b1[0][4] = 0, b1[1][3] = 0, b1[2][2] = 0, b1[3][1] = 0, b1[4][0] = 0;
                (*count)++;
            }
            for(int i=0;i<size;i++)
            {
                if(((a[i][0] == a[i][1] && a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][3]==a[i][4])&& (a1[i][0]||a1[i][1]||a1[i][2]||a1[i][3]||a1[i][4]))){
                    a1[i][0]=0,a1[i][1]=0,a1[i][2]=0,a1[i][3]=0,a1[i][4]=0;
                    (*count)++;
                }
                if(((a[0][i] == a[1][i] && a[1][i]==a[2][i] && a[2][i]==a[3][i] && a[3][i]==a[4][i])&& (a1[0][i]||a1[1][i]||a1[2][i]||a1[3][i]||a1[4][i]))){
                    a1[0][i]=0,a1[1][i]=0,a1[2][i]=0,a1[3][i]=0,a1[4][i]=0;
                    (*count)++;
                }
            }
            for(int i=0;i<size;i++)
            {
                if(((b[i][0] == b[i][1] && b[i][1]==b[i][2] && b[i][2]==b[i][3] && b[i][3]==b[i][4])&& (b1[i][0]||b1[i][1]||b1[i][2]||b1[i][3]||b1[i][4]))){
                    b1[i][0]=0,b1[i][1]=0,b1[i][2]=0,b1[i][3]=0,b1[i][4]=0;
                    (*count2)++;
                }
                if(((b[0][i] == b[1][i] && b[1][i]==b[2][i] && b[2][i]==b[3][i] && b[3][i]==b[4][i])&& (b1[0][i]||b1[1][i]||b1[2][i]||b1[3][i]||b1[4][i]))){
                    b1[0][i]=0,b1[1][i]=0,b1[2][i]=0,b1[3][i]=0,b1[4][i]=0;
                    (*count2)++;
                }
            }
             printf("----------------------------------------------------");
}
int main ()
{
    int count = 0, count2 = 0;
    int n,i,j,k,co,arr[size][size],X;
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            a1[i][j]=1;
            b1[i][j]=1;
        }
    }
    printf ("\nEnter the number of players:");
    scanf ("%d", &n);
    bingo (n);
    for(k=0;k<25;k++)
    {
      do
		{
		    printf("\nenter player chose number :");
            scanf("%d",&co);
		    if (co< 1 || co > 25)
		  {
		      printf ("\nPlease enter a number between 1 and 25.\n");
		  }
		}while (co < 1 || co> 25);
            printf("player 1:");
	     	 for(i=0;i<size;i++)
	     	 {
	     	     for(j=0;j<size;j++)
	     	     {
	     	       if(a[i][j]==co)
	     	       {
	     	           a[i][j]=0;
	     	       }
                }
            }
            print(a);
            printf("--------------------------------------------------");
            printf("\nplayer 2:\n");
            for(i=0;i<size;i++)
	     	 {
	     	     for(j=0;j<size;j++)
	     	     {
	     	       if(b[i][j]==co)
	     	       {
	     	           b[i][j]=0;
	     	       }
                }
            }
            print(b);
            winningcondition(&count,&count2);
            printf("\nplayer1:%d",count);
            printf("\nplayer2:%d",count2);
            if(count==5)
            {
                printf("\ncongratulations!!player 1 win..");
                break;
            }
             if(count2==5)
            {
                printf("\ncongratulations!!player 2 win..");
                break;
            }

    }
    return 0;
}
