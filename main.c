#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
// IF YOU CREATE FUNCTION ON TOP OF MAIN, YOU DO NOT NEED DECLERED YOUR FUNCTIONS ;
float averagefunctions (float a, float b) // DIDALAM KURUNG DISEBUT PARAMETER
{
    float result; // 3 VARIABLE IN HERE
    result = a/b;
    return result;
}

int main()
{
    int loop1, loop2, input_sub, input_exam; // 9 VARIABLE IN HERE
    float value,sum,min=100, max=0, average;

printf ("Input How many Subject: ");
scanf ("%d",&input_sub);

for (loop1=1;loop1<=input_sub;loop1++)
{
    printf ("Subject %d\n",loop1);
    printf ("How many Exam: ");
    scanf ("%d",&input_exam);

    sum=0;
    min=100;
    max=0;
    for (loop2=1;loop2<=input_exam;loop2++)
    {
       printf ("Exam %d Value: ",loop2);
       scanf ("%f",&value);
       if (value<0||value>100){printf ("Sorry More or less from range Value, Min=0, Max=100"); return 0;}
// GET MINIMUM AND MAXIMUM VALUE
if (max<value){max=value;}
if (min>value){min=value;}
// FOR GET SUM OR TOTAL
       sum+=value;
    }

    average= averagefunctions (sum,input_exam);
    printf ("\tSum      : %.2f\n", sum);
    printf ("\tAverage  : %.2f\n", average);
    printf ("\tMin      : %.2f\n", min);
    printf ("\tMax      : %.2f\n", max);

    //NESTED IF CALCULATE GRADE AND PASS OR REMIDIAL
      if (average>=60&&average<=100)
    {
        printf ("Pass from Test ");
        if (average>=60&&average<=69.99)
        {
            printf ("Grade C\n\n");
        }
        if (average>=70&&average<=84.99)
        {
            printf ("Grade B\n\n");
        }
        if (average>=85&&average<=100)
        {
            printf ("Grade A\n\n");
        }

      }
      else if (average>100)
      {
          printf ("More than Range\n\n");
      }
    else
        {
        printf ("Remidial Because Less than 60\n\n");
        }

}

    return 0;
}
