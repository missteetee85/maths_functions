#include <stdio.h>

//This is the second line causing issue in the <master> branch

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
    
    return 0;
}

