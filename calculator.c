#include <stdio.h>

// This is a new line that has been added 
//f5bda72bd36bcf153cb6541800d088b9a169087c commit draft4 calculator.c

// addition
float add (float x, float y)
{
    return x + y; 
}

// multipling
float times (float x, float y)
{
    return x * y;
}

//subtract
float subtract (float x, float y)
{
    return x - y; 
}

//divide
float divide (float x, float y)
{
    return x / y; 
}

int main()
{
    float a, b, r;
    char op;
    
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       
    switch (op)
       {
           case '+' : r = add(a,b);
           	   
                      break;
                      
              case '*' : r = times (a,b);
              	      
              	      break; 
              	      
           case 'q' : break;
           	   
           default  : op='?';
       }
       
     if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    
    while (op != 'q');

int i;
int a[Numb];
int max = a[0];
int min = a[0];

  for (i = 0; i < 5; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }


    return 0;
}

