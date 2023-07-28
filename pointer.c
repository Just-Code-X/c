#include<stdio.h>
/*void inter (void);*/
float convert (float f);
int main ()
{
    float temp_f,temp_c;
    print("enter temperature in fahrenhiet ");
    scanf("%f",&temp_f);
    temp_c= convert(temp_f);
    printf("%.1fF is %1fC\n",temp_f, temp_c);
    return(0);
    /*int x = 123;
    int *p = &x;
    printf ("the value of x: %d\n",*p);
    printf("the address of x : %p\n", *p);
    //
        inter();*/

    }
    float convert (float f)
    {
        float t;
        t = (f-32)/1.8;
        return (t);
    }
    //new function
    /*void inter (void)
   {
        int a =10;
       printf("%i\n",a);
    }*/
