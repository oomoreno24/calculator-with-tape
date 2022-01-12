/*  This program is a calculator with a paper tape exported to an output file. This program was for the final project in an Intro to Programming with C class. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// binary operations, a series of if statemnents to see which operation to use
void binary_operations(double x, char *operation, double result[0], FILE *ofp, int i[0], int j[0])
{
  char input2[10];
  double y;
    // addition
    if (strcmp(operation, "+") == 0) 
    {
      printf("Enter a number: ");
      scanf("%s", input2);
      fprintf(ofp, "%s\n", input2);
        if (strcmp(input2, "pi") == 0)
        {
          y = atof(input2);
          y = M_PI;
        }
        else if (strcmp(input2, "e") == 0)
        {
          y = atof(input2);
          y = M_E;
        }
        else
        {
          y = atof(input2);
        }
  result[0] = x + y;
  printf("%lf + %lf = %lf\n", x, y, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }
  // subtraction
  else if (strcmp(operation, "-") == 0) 
  {
    printf("Enter a number: ");
    scanf("%s", input2);
    fprintf(ofp, "%s\n", input2);
      if (strcmp(input2, "pi") == 0)
      {
        y = atof(input2);
        y = M_PI;
      }
      else if (strcmp(input2, "e") == 0)
      {
        y = atof(input2);
        y = M_E;
      }
      else
      {
        y = atof(input2);
      }
  result[0] = x - y;
  printf("%lf - %lf = %lf\n", x, y, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }
  // multiplication
  else if (strcmp(operation, "x") == 0) 
  {
    printf("Enter a number: ");
    scanf("%s", input2);
    fprintf(ofp, "%s\n", input2);
      if (strcmp(input2, "pi") == 0)
      {
        y = atof(input2);
        y = M_PI;
      }
      else if (strcmp(input2, "e") == 0)
      {
        y = atof(input2);
        y = M_E;
      }
      else
      {
        y = atof(input2);
      }
  result[0] = x * y;
  printf("%lf x %lf = %lf\n", x, y, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }
  // division
  else if (strcmp(operation, "/") == 0) 
  {
    printf("Enter a number: ");
    scanf("%s", input2);
    fprintf(ofp, "%s\n", input2);
      if (strcmp(input2, "pi") == 0)
      {
        y = atof(input2);
        y = M_PI;
      }
      else if (strcmp(input2, "e") == 0)
      {
        y = atof(input2);
        y = M_E;
      }
      else
      {
        y = atof(input2);
      }
        // if dividing by 0, print ERROR and return to step 1
        if (y == 0)
        {
        fprintf(ofp, "ERROR\n");
        printf("ERROR\n");
        i[0] = 1;
        j[0] = 0;
        return;
      }
  result[0] = x / y;
  printf("%lf / %lf = %lf\n", x, y, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }
  // exponentiation
  else if (strcmp(operation, "^") == 0) 
  {
  printf("Enter a number: ");
  scanf("%s", input2);
  fprintf(ofp, "%s\n", input2);
    if (strcmp(input2, "pi") == 0)
    {
      y = atof(input2);
      y = M_PI;
    }
    else if (strcmp(input2, "e") == 0)
    {
      y = atof(input2);
      y = M_E;
    }
    else
    {
      y = atof(input2);
    }
  result[0] = pow(x, y);
  printf("%lf ^ %lf = %lf\n", x, y, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }


  return;
}
// unary operations
void unary_operations(double x, char *operation, double result[0], FILE *ofp, int i[0], int j[0])
{ 
  // sine
  if (strcmp(operation, "sin") == 0) 
  {
    result[0] = sin(x);
    printf("sin(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
    i[0] = 0;
    j[0] = 1;
    }
  // cosine
  else if(strcmp(operation, "cos") == 0) 
  {
  result[0] = cos(x);
  printf("cos(%lf) = %lf\n", x, result[0]);
  fprintf(ofp, "=\n");
  fprintf(ofp, "%lf\n", result[0]);
  i[0] = 0;
  j[0] = 1;
  }
  // tangent
  else if(strcmp(operation, "tan") == 0) 
  {
    result[0] = tan(x);
    printf("tan(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // inverse sine
  else if(strcmp(operation, "arcsin") == 0) 
  {
    result[0] = asin(x);
    printf("arcsin(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // inverse cosine
  else if(strcmp(operation, "arccos") == 0) 
  {
    result[0] = acos(x);
    printf("arccos(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // inverse tangent
  else if(strcmp(operation, "arctan") == 0) 
  {
    result[0] = atan(x);
    printf("arctan(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // square root
  else if(strcmp(operation, "root") == 0) 
  {
    result[0] = sqrt(x);
    printf("√%lf = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // absolute value
  else if(strcmp(operation, "abs") == 0) 
  {
    result[0] = fabs(x);
    printf("abs(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // inverse (1/x)
  else if(strcmp(operation, "inv") == 0) 
  {
      // prints ERROR and returns to step 1 if x = 0, (1/0)
      if (x == 0)
      {
        fprintf(ofp, "ERROR\n");
        printf("ERROR\n");
        i[0] = 1;
        j[0] = 0;
        return;
      }
    result[0] = (1/x);
    printf("inv(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // log base 10
  else if(strcmp(operation, "log") == 0) 
  {
    result[0] = log10(x);
    printf("log(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }
  // log base 2
  else if(strcmp(operation, "log2") == 0) 
  {
    result[0] = log2(x);
    printf("log2(%lf) = %lf\n", x, result[0]);
    fprintf(ofp, "=\n");
    fprintf(ofp, "%lf\n", result[0]);
  }

  return;
}

int main(void)
{
  int i[1], j[1]; // counters
  double x, result[1]; 
  char input1[64], operation[10];
  FILE *ofp;
  ofp = fopen("tape.txt", "w");
    do
    {
      printf("Enter a number: ");
      fprintf(ofp, "Enter a number: \n");
      scanf("%s", input1);
      fprintf(ofp, "%s\n", input1);

      printf("Choose an operation: ");
      scanf("%s", operation);
      fprintf(ofp, "%s\n", operation);
        // if pi or e is entered, it is converted to a constant
        if (strcmp(input1, "pi") == 0)
        {
          x = atof(input1);
          x = M_PI;
        }
        else if (strcmp(input1, "e") == 0)
        {
          x = atof(input1);
          x = M_E;
        }
        // if q is entered, quit the program
        else if (strcmp(operation, "q") == 0)
        {
          i[0] = 0;
          j[0] = 0;
        }
        // if c is entered, print 0 and return to step 1
        else if (strcmp(operation, "c") == 0)
        {
          printf("0.000000\n");
          fprintf(ofp, "0.000000\n");
          i[0] = 1;
          j[0] = 0;
        }
        else // convert string to double
        {
          x = atof(input1);
        }

  binary_operations(x, operation, &result[0], ofp, &i[0], &j[0]);
  unary_operations(x, operation, &result[0], ofp, &i[0], &j[0]);
    // loop for continuing operations after first input
    while (j[0])
    {
      printf("Choose an operation: ");
      scanf("%s", operation);
      fprintf(ofp, "%s\n", operation);
        if (strcmp(operation, "q") == 0)
        {
          j[0] = 0;
        }
        else if (strcmp(operation, "c") == 0)
        {
          printf("0.000000\n");
          fprintf(ofp, "0.000000\n");
          i[0] = 1;
          j[0] = 0;
        }
        else
        {
          binary_operations(result[0], operation, &result[0], ofp, &i[0], &j[0]);
          unary_operations(result[0], operation, &result[0], ofp, &i[0], &j[0]);
        }
    } 
  } while(i[0]);

  fclose(ofp);
  return 0;
}