#include <stdio.h>


//f5bda72bd36bcf153cb6541800d088b9a169087c commit draft4 calculator.c
//56e5c3b55d79d89c3b634bc8c7bf419b98d81ad1 commit draft3 calculator.c
//92c0da59065e1b2771c1bb4214361c13f645afb0 commit draft2 calculator.c
//a5b814ea5c4d4ad17f90f01c85ea93db01cae4d6 commit draft1 calculator.c



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

