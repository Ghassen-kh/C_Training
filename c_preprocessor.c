/*a C Preprocessor is just a text substitution tool and it instructs the compiler to do
 required pre-processing before the actual compilation */

 #include <stdio.h>

/*A macro is normally confined to a single line. The macro continuation operator (\) is used to continue a macro that is
  too long for a single line*/
//The Stringize (#) Operator :converts a macro parameter into a string constant

#define   macro_example(a, b)  \
    printf( "Hello  "#a " and " #b"\n")
#define tokenpaster(n)\
    printf ("token" #n " = %d \n", token##n )
/*The Token Pasting (##) Operator : combines two arguments. It permits two separate tokens in the macro definition to be 
joined into a single token*/

/*The Defined() Operator : The preprocessor defined operator is used in constant expressions to determine if an identifier
 is defined using #define*/
#if !defined (MESSAGE)
   #define MESSAGE "Message !"
#endif

//Parameterized Macros
#define MIN(x,y) ((x) > (y) ? (y) : (x))


int main() {

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    // The Macro Continuation (\) Operator
    macro_example(Ghassen, His friend);
    //The Token Pasting (##) Operator
    int token20 = 10;
    tokenpaster(20);
    //The Defined() Operator :
    printf("Here is the message: %s\n", MESSAGE);  
    //Parameterized Macros
    printf("Min between 100 and 50 is %d\n", MIN(100, 50));  



   return 0;

}