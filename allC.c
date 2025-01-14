////////////////////////// Preface ///////////////////////////

// C language is called mother of all languages
// Dannis Ritchie created this in 1972
// It is one of the first stable languages
// It is created for develop unix operating system

// The uses of C is :
// ---> creating Operating System Development
// ---> creating Realtime algorithms
// ---> creating Embedded systems

// Why the name is C?
// Martin Richard created a programming language called    ' A ' in 1960s .
// And then came out another language called 'B' known as ' Bpcl ' invented by Ken Thomson in 1969. 
// Finally C was created in 1972.

//At first, Brian kernighan wrote first hello program , 
// while creating Bpcl( ' B ' language) 

//Boiler plate code (must for every program in every lang) :-
//
// #include<stdio.h>
// 
// int main(){
//     printf(" Hello World! ")
//     return 0;
//  }

#include<stdio.h>  //one kind of Preprocessor Directive
                        // called as "Header file" also
               // Necessary function before starting the program
//tells compiler to include the standard input-output h. file

#include<stdlib.h>
#include<time.h> // A library for time
#include<math.h>

int main(){  // all c program start from main() function
                    // executing start from line by line 
    
    printf("Hello World \n"); // execution start from here 
   
 //::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
    
    //Chapter 1 (Variables, Constants & Keywords)
    int varint; // variable declaration
    varint = 6; // variable initialization
    printf("The output of this program is %d \n", varint);
    // " %d " means ' print as a integar ''
    
    // Variable names are case-sensitive
    //That means 'a' and 'A' are different from each other
    
    // Value of any variable can be changed
    // But, value of constants does not change
    
    int dataint = 12; 
    printf("The value of dataint is %d \n", dataint);
    float datafloat = 3.33;
    printf("The value of datafloat is %f \n", datafloat);
    char datachar = 'R';
    printf("The value of datachar is %c \n", datachar);
    // There are typical sizes for these datatypes , 
    // depending on the system and the compiler
    // "int" - usually 4 bytes(32 bits)
    // "char" - usually 1 byte (8 bits)
    // "float" - usually 4 bytes(32 bits)
    //We can measure the size of data type using these code
//    printf("Size of int: %zu bytes\n ", sizeof(int));
//    print("Size of float: %zu bytes\n", sizeof(float));
//    print("Size of char: %zu bytes\n", sizeof(char));

       //Comments
       //There are two types of comments:- 
       // This is a "single line comment"
       /*
       This is a "multi line comment",
       and so you can write comments through multi-lines
       */
       
   //Library functions
    int library_func = 10;
    printf("This is %d\n", library_func);
    
    // '%_' is format specifier
    // %d for integers
    // %f for real values (floating-point numbers)
    // %c for characters
    
    /* Garbage value: It refers to an ininitialized or 
         unpredictable value stored in a variable in C.  £×@-->
    int numbu = 12;
    print("The number is %d\n"); // Here var isn't mentioned'
    */
    
   // Escape sequence character
   char es_ch = 'n'; // "\n"represents a new line
   printf("Hey I am a good boy,\nbut sometimes.. :) \n");
   printf("I have many dreams, \t manyyy.. \n");  
               // "\t" means tab
   printf("These dreams are very \"special\" \n") ;           
               //  \"  means double quote(visible) in double quote
               // same for single quote // also have more E.S.C
               
    //Practice Set 1.1          
    //1.1.1 : Calculating area of a rectangle
    int a_length = 12;
    int b_width = 10;
    int c_area = a_length * b_width;
    printf("The area of the rectangle is %d \n", c_area);           
               
    //1.1.1 : Calculating area of a rectangle with given input
    int x_len = 10;
    int y_wid = 5;
    
    printf("The area of the rectangle is %d\n", x_len * y_wid);
    
    // 2.2.1: Calculate the area of a circle 
    int r = 6;
    printf("The area of the circle with radius %d is %f\n", r, 3.14 * r * r);
    
     //1.2.2: Calculate the volume of a cylinder
     int cyr  = 6;
     int cyh = 7;
     printf("The volume of the cylinder is %f\n", 3.14*cyr*(cyh*cyh));
     
     //1.3.1: Convert celsius to fahrenheit
     float cel = 40.0; 
     printf("The temperature is %f°F \n", (9.0/5.0)*cel + 32); 
              
     // 1.4.1 : Calculating simple interest   
     int prin = 1350;
     int rate_int = 7;
     int time_int = 5;
     
     printf("The value of simple interest is %d\n", (prin*rate_int*time_int)/100);
     
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
    
    //Chapter 2 (Instructions and operator)
    // A C program is a set of instructions
    // There are 3 types of instructions:-
    
    // 1. Type declaration instructions
        // / / It instruct compiler to reserve a memory location
        // // / / Variable is a name of a memory location
    int a; // Declare an integer variable 'a'
    float b; // Declare a float variable 'b'
    char c;// Declare a char  variable 'c' 
    int i = 10; // Declare and initialize 'i' with 10
    int j = i; // Declare 'j' and initialize with 'i'
    printf("The value of 'i' is %d and value of 'j' is %d\n", i, j);
    int d = 2, e = 3,f = 4, g = 5; // Declare and initialize multiple variables
    
    int j1 = d  + j - i; // Valid: use previously defined variables
    // Invalid: 'a' is used before declaration
    // float b = a + 3; 
    // float a = 1.1; 
    // Valid: Assigning the same value to multiple variables
    int m, n, o, p;
    m  = n = o = p = 30; // a, b, c, d all equal to 30  
    
    // 2. Arithmetic instructions
// Arithmetic instructions perform mathematical operations.
// Here are some of the commonly used operators in C :
 // +(Addition), - (Subtraction),
  //* (Multiplication), / (Division), % (Modulus)
  
    int ari_b = 2, ari_c = 3;
    int ari_z; ari_z = ari_b * ari_c; //legal
//    int ari_z; ari_b*ari_c = ari_z; //illegal (not allowed)
      
//    int i = ab; // invalid 
    int val = a * b; //valid 
    
    int bmodu = 5, cmodu = 6;
    int modu = cmodu % bmodu;
    int summo = bmodu+cmodu;
    int subbo = cmodu-bmodu;
    int multio = bmodu*cmodu;
    float divio = cmodu/bmodu;
    printf("The remainder when c is divided by b is %d\n",modu); //  % → cannot be applied on float
            // % - -> used to get the remainder
    printf("The value of b is %d value of c is %d  and sum is %d\n", bmodu, cmodu, summo)  ;
   printf("The subtraction of the numbers is %d\n", subbo)  ;
   printf("The multiplication of the numbers is %d\n",multio);
   printf("The division of the numbers is %f\n", divio)  ; //For exact real output, declare b,c as float
   
// TYPE CONVERSION
  // int and int → int
  // int and float → float
  // float and float → float
  
   int con_a = 9;
   int con_b = 2; 
   float con_c = con_a / con_b;
   printf("int(9) ÷ int(2) -> int so the ans %f is invalid\n", con_c) ;
    
   float con_x = 5.0;
   int con_y = 2; 
   float con_z = con_x / con_y;
   printf("float(5) ÷ int(2) -> float so the ans %f is valid\n", con_c) ; // this is invalid for interpreter ;)
    
    //Note:- Type compalibity is crucial
    // int(8.7) is demoted to 8 & float(6) is promoted to 6.0
    int con_m = 8.7;
    float con_n = 9;
    printf("int(8.7) is demoted to %d\n", con_m);
    printf("float(9) is promoted to %f\n", con_n);
    
// OPERATOR PRECEDENCE & ASSOCIATIVITY  
//In C language simple mathematical rules like BODMAS, no longer apply.
//In writing mathematical equations, coders have to maintain operator precedence & associativity. 
//Rules:-
// Operators of higher priority are evaluated first in the absence of parenthesis:-
//            ***1st --> " * / %", 2nd --> " + - ", 3rd --> " = "

//But, When operators of equal priority are present in an expression, the tie is taken care of by associativity.

//                 x*y/z → (x*y)/z
//                 x/y*z → (x/y)*z
//           ***Here, " * ,  / " follows left to right associativity

// Pro Tip: Always use parenthesis in case of confusion 

     printf("The ans is : %d\n", con_a/con_b*con_y / 2) ;
     //                                          left ==>> right, then add 2
    
//3.CONTROL INSTRUCTIONS:
//                   (determine the flow of control in a program)
//    Four types of control instructions in C are:
//    1. Sequence Control instructions- executing line by line
//    2. Decision Control instructions (Upcoming chapter)
//    3. Loop Control instructions     (Upcoming chapter)
//    4. Case Control instructions.  (Upcoming chapter) 

// TYPE CASTING
// That means converting data types 

    int typ_a = 45;
    float typ_b = 32.23;
    
    typ_a = (int) typ_b;
    printf("The int version of the float(32.23) is %d\n", typ_a);
    
    
//Practice set 
    float b_2_a = 3.0/8 - 2;
    printf("The ans of the equation \"3÷8-2\" is %f\n", b_2_a);
    
    int c_2_a = 3349895;
    printf("The value of a modulus 97 is %d\n", c_2_a%97);
    
//4.Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

    int x_2 = 2, y_2 = 3, z_2 =3, k_2=1;
    float r_2 = 3 * x_2 / y_2 - z_2 + k_2;
    // 3*2/3 - 3 +1
    // =2 - 3 + 1
    // =  -1 + 1
    // = 0
    printf("The ans of the equation is %f\n", r_2);
    
    float t_2 = 3.0 + 1;
    printf("The answer is %f\n", t_2);
    
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

    ///////////////////////CHAPTER 3///////////////////////
    /////////////CONDITIONAL INSTRUCTIONS////////////
    
//Decision Making Instructions
//Decisions/instructions depends on a condition being met
    //If-else Statements (most used)

    //The structure of if-else:-
/*    if (condition_to_be_checked) {
        // Statements if condition is true
    } else {
        // Statements if condition is false
    }    */
    
    int if_age = 24;
    if(if_age > 18){
        printf("We are inside if\n");
        printf("Your age is greater than 18.\n");
    }else{ // else block is not necessary 
        printf("Your age is not greater than 18.\n");
    }   
    
// RELATIONAL OPERATOR      
//Relational operators are used to evaluate conditions (true or false) inside the if statements.

//Some examples of relational operators are:
//                   "  ==, >=, >, <, <=, !=  "
//Important note: ‘=’ is used for assignment whereas
//                           ‘==’ is used for equality check.


//The condition can be any valid expression. In C a non-zero value is considered to be true.
    
    if(0){
        printf("This is true.\n");
    }else{
        ("This is false.\n");        
    }
    if(1){
        printf("This is true.\n");
    }else{
        ("This is false.");        
    }
     if('c'){
        printf("This is character inside if but true.\n");
    }else{
        ("This is false.");        
    }
    if(9.99){
        printf("This is 9.99 but true.\n");
    }else{
        ("This is false.\n");        
    }
    if(2374){
        printf("This is also true.\n");
    }else{
        ("This is false.\n");        
    }

// LOGICAL OPERATORS
// &&, || and !, are three logical operators in C. 
// These are read as “AND”, “OR” and “NOT”

// They are used to provide logic to our C programs.

//Usage of logical operators(Truth Table) :-
// 1. && (AND) → is true when both the conditions are true 
//         a. “1 and 0” is evaluated as false.
//         b. “0 and 0” is evaluated as false.
//         c. “1 and 1” is evaluated as true.

// 2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1)

//3.!(NOT)→returns true if given false and false if given true
//         a. !(3==3) → evaluates to false 
//         b. !(3>30) → evaluates to true.

    int log_a = 1, log_b = 0;
    printf("The value of a and b is %d\n", log_a && log_b);
    printf("The value of a or b is %d\n", log_a || log_b);
    printf("The value of not a is %d\n", !log_a);
    
// As the number of conditions increases, the level of indentation increases. 
//This reduces readability. 
//Logical operators come to rescue in such cases.

    if(log_a && log_b){
        printf("Both are true");
    } // is same as writing..
    if(log_a){
        if(log_b){
            printf("Both are true");
        }
    }        
    
//else-if clause
//Instead of using multiple if statements, 
//we can also use else if along with it thus forming 
//an if-else if-else ladder.

    if (if_age >= 60){
        printf("You can drive and you are a sinior citizen");
    }
    else if(if_age >= 40 ){
        printf("You can drive and you are elder");
    }
    else if(if_age >= 18){
        printf("You can drive but maintain safety\n");
    }
    else if(if_age <= 0){
        printf("You haven't born yet\n");
    }
    else{
        printf("You can't drive");   
    } 
    
//OPERATOR PRECEDENCE

//Operator's Priority :-
//1st" ! ", 2nd " *, /, % ",3rd " +, - "4th " <>, <=, >=", 
//5th" ==, != ",6th " &&", 7th " ||", 8th "="

//CONDITIONAL  or  TERNARY OPERATORS 

//A shorthand “if–else” canbe written using these operator 
//Structure:-
//   " condition ? expression-if-true : expression-if-false"
//     Here "?" and ":" are called Ternary Operators
      
    int A = 770;
    int B = 999;
    A>B ? printf("A is greater") : printf("B is greater\n");
    
//SWITCH CASE CONTROL INSTRUCTION
//switch-case is used when we have to make a choice between number of alternatives for a given variable.
   
    switch(A){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You enterd 2\n");
            break;
        case 3:
            printf("You enterd 3\n");
            break;
        case 4:
            printf("You enterd 4\n");
            break;
        default:
            printf("Nothing matched\n");
    }    

//Practice Set 
//3.1.1
    int prob_a = 10;

    if (prob_a = 11)
 // Here '=' isn't relational op
        printf("I am 11\n");
// this is assignment op
    else
            //For this reason the output is "I am 11"
        printf("I am not 11\n");

//3.6.1
//Write a program to find greatest of four numbers entered by the user.

    int a_a=14, b_b=12, c_c=17, d_d=21;
    
    if(a_a>b_b && a_a>c_c && a_a>d_d){
        printf("The greatest of all is %d\n", a_a);
    }
    else if(b_b>a_a && b_b>c_c && b_b>d_d){
        printf("The greatest of all is %d\n", b_b);
    }
    else if(c_c>a_a && c_c>b_b && c_c>d_d){
        printf("The greatest of all is %d\n", c_c);
    }                                
    else{
        printf("The greatest of all is %d\n", d_d);
    }
              

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

       ///////////////////////CHAPTER 4///////////////////////
/////////////LOOP CONTROL INSTRUCTIONS////////////
    
//Coders use loops to tell computer that a given set of instructions must be executed repeatedly.
//there are three types of loops in C language:


//1. WHILE LOOP:-
//The syntex of while loop is: 
/*
while (condition is true) {
    // Code
//The block keeps executing aslongas the condition is true
}

*/

//Problem: print 10 times "Happy coding"    
    
    int i_i = 0;    // initialization
    while(i_i<4){
// condition to be checked before each iteration,
                                        //while i is less than 4
        printf("HAPPY CODING :)\n"); 
        // On each iteration, this prints Happy coding!!
        i_i = i_i  + 1; 
        //Increment the value of i by 1 after each iteration
 //After incrementing, the condition(i<4) is checked again
 //When the condition(i=4)becomes false , the lopp stops
    }
    
    int l_i = 0;
    while (l_i<10) {
        printf("The value of x is %d\n", l_i);
        l_i++;// i + 1
    }
    printf("--------------------\n");
    
    //infinite loop
//If the condition never becomes false, the while loop keeps getting executed.Such loop is known as infinite loop 
/*       int o_i = 0;
    while (o_i<10) {
        printf("the value of i is %d\n", o_i);
    }    */
    
//Quick quiz: Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.    
    int o_i = 10;
    while (o_i <= 20) {
        if(o_i >= 10) {
            printf("the value of i is %d\n", o_i);
        }
        o_i++;
    } 
    
//Increment and Decrement Operators
// i++ prints first & then increments(Post increment op)
// ++i increments first & then prints(Post increment op)
    int op_i = 7;
    printf("The op_i is %d\n", op_i);
    op_i = op_i + 5;
    printf("Again, the value of op_i is %d\n", op_i);
    ++op_i;
    printf("Again, the value of op_i is %d\n", op_i);
    op_i++;
    printf("Further Again, the value of op_i is %d\n", op_i);
    printf("Further Again, the value of op_i is %d\n", op_i++);
    printf("Further Again, the value of op_i is %d\n", op_i); 
    // 7, 12, 13, 14, 14, 15    
  // i++ → i is increased by 1
// i -- → i is decreased by 1
/* 
       • i+=2 is similer to i = i + 2
    • Similar to += operator we have other operators like -=, *=, /=, %= etc.     
          
 */
    
//2. do-while loop
//The syntax of do-while loop looks like this:
/*    
    do {
        //code;
    } while (condition);     
*/
/*
• ‘while’ checks the condition & then executes the code.
• ‘do-while’ executes the code & then checks the condition
• do-while loop = while loop which executes at least once.
*/
    i = 5;
    do {
        printf("The number is %d\n", i);
        i++;
    }while (i<4);  //0utput: The number is 5
//dowhileloop executes atleast once(condi doesn'tmatter')
    while (i<4) {
        printf("The value of x is %d\n", i);
        i++;//0utput is: None
    }
      
//3. for loop 
//The syntax of a typical ‘for’ loop looks like this:
/* 
for (initialize; test; increment or decrement)
{
    //code;
}   
*/ // initialize -> test -> code -> increment or decrement
//• Initialize → Setting a loop counter to an initial value.
//• Test → Checking a condition.
//• Increment → Updating the loop counter.

// Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
    int loop_n = 6;
    for(int i = 0; i<=loop_n ; i++){
        printf("The value of i is: %d \n", i);
    }   
    
//A CASE OF DECREMENTING FOR LOOP

//Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.    
       
    for(int loop_i = loop_n; loop_i; loop_i--){
        printf("The reversing value of i is: %d \n", loop_i);
    }                                                                                                   
//Condition i is checked & code is executed until ‘i’ is non 0
    
//THE BREAK STATEMENT IN C
//The ‘break’ statement is used to exit the loop irrespective of whether the condition is true or false.
 
    for(int i = 0; i<=15 ; i++)
    {
        if(i == 9){
            break; // exit the loop now!
        }
        printf("i is: %d \n", i);
     }
     printf("For loop is done\n"); 
                                                           
//THE CONTINUE STATEMENT IN C
//The ‘continue’ statement is used to immediately move to the next iteration of the loop.

    for(int i = 0; i<=5 ; i++)
    {
        if(i == 4){
            continue; // exit this iteration now!
        }
        printf("i is: %d \n", i);
     }
     printf("For loop is done again\n");
/*     
Notes:
1. Sometimes, the name of the variable might not indicate the behaviour of the program.
2. ‘break’ statement completely exits the loop.
3. ‘continue’ statement skips the particular iteration of the loop.                                                                                                
*/
// Practice Set(4)
//1. Write a program to print multiplication table of a given number n.
    int mul_n = 6;
    for (int i = 0; i<=10;i++){
        printf("%d × %d = %d\n", mul_n, i, mul_n*i );
    }
    printf("------------\n");
    
//2.Write a program to print multiplication table of 10 in reversed order.
    int n4 = 10;
    for (int i4 = 10; i4;i4--){
        printf("%d × %d = %d\n", n4, i4, n4*i4 );
    }   

//4. What can be done using one type of loop can also be done using the other two types of loops – true or false?
//==>True, all types of work canbe done by all types of loop

//5. Write a program to sum first ten natural numbers using while loop.
    int i5 = 1;
    int i4 = 0;
    while (i5 <= 10){
        i4+=i5;
        i5++;
    }
    printf("The sum of first ten natural numbers is %d \n", i4);
    
//6.Write a program to implement the 5th program using ‘for’ and ‘do-while’ loop.
    do{
        i4 += i5;
        i5++;
    }while(i5<=10);
    printf("The sum of first ten natural numbers is %d \n", i4);

    for(int i5 = 1; i5 <= 10; i5++)
    {
        i4 += i5;  
    }
    printf("The sum of first ten natural numbers is %d \n", i4);
    
//7.Write a program to calculate the sum of the numbers 
// occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).p

    int sum7 = 0;
    for(int i5 = 1; i5 <= 10; i5++ ){
        sum7 += (8*i5);
    }
    printf("The sum of \"8× 1\" to \"8×10\" is %d \n", sum7);
    
//8.Write a program to calculate the factorial of a given number using a for loop.
// 8! (factorial) = 1× 2 × 3 × 4 × 5 × 6 × 7 × 8 
//    0! = 1
// n! = 1× 2 × 3 × 4 × ........ × n

   int product8 = 1;
   int n8 = 4;
   for(int i8 = 1; i8 <= n8; i8++ ){
        product8 *= i8;
    }
    printf("The factorial of given 'n = %d' is %d \n", n8, product8);
    
//9. Repeat 8th progaram using while loop.
    int product9 = 1;
    int n9 = 6;
    int i9 = 1;
    while(i9<=n9){
        product9 *= i9;
        i9++;
    }
    printf("The factorial of given 'n = %d' is %d \n", n9, product9);
    
//10.Write a program to check whether a given number is prime or not, using loops. 
//A prime number is a number that can only be divided by itself and 1 without remainders
    int n10 = 1;
    int prime10 = 0;
    if(n10==0 || n10 ==1){
        prime10 = 1;
    }
    else{
        prime10 = 0;
    }
    for(int i10 = 2; i10 < n10 ; i10++ ){
        if(n10 % i10 == 0 && n10 != 2){
            prime10 = 1;
            break;
        }
    }
    if(prime10){
        printf("The given number isn't' prime\n");
    }
    else{
        printf("The given number is prime \n");
    }                
 //11. Implement 10th program using other types of loops.

    int n11 = 7;
    int prime11 = 0;
    if(n11==0 || n11 ==1){
        prime11 = 1;
    }
    else{
        prime11 = 0;
    }
    int i11 = 2;
    while(i11 < n11){
        if(n11 % i11 == 0 && n11 != 2){
            prime11 = 1;
            break;
        }
        i11++ ;
    }
    if(prime11){
        printf("The given number isn't' prime\n");
    }
    else{
        printf("The given number is prime \n");
    }                  
                    
                                                  
    int n12 = 11111;
    int prime12 = 0;
    if(n12==0 || n12 ==1){
        prime12= 1;
    }
    else{
        prime12 = 0;
    }
    int i12= 2;
    do{
        if(n12 % i12 == 0 && n12 != 2){
            prime12 = 1;
            break;
        }
        i12++ ;   
    }while(i12 < n12);
    if(prime12){
        printf("The given number isn't' prime\n");
    }
    else{
        printf("The given number is prime \n");
    }                  

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

                       ////////////CHAPTER 5/////////////
                                       
//Quick Quiz: Use the library function to calculate the area of a square with side a.  { Using pow func. from math.h }
    int lib_func_a = 5;
    printf("The area of square is %f\n", pow(lib_func_a,2));

        ////////////CHAPTER 5 – PRACTICE SET/////////////
                
//5. What will the following line produce in a C program:

    int a99 = 4;
    printf("%d %d %d \n", a99, ++a99, a99++); 
//The output will be 4,5,5 if the valuation order is right→left
//The output will be 6,6,4 if the valuation order is left→right
//Both are the correct answer

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

       ///////////////////////CHAPTER 6///////////////////////
         //////////////////////////POINTERS////////////////////
    
//A pointer is a variable which stores the address of another variable.
//Address means the location of variable in memory.
//If Int takes 2 bite then var is in 2 address

    int variable = 72;    //This is Printing pointer address,
    printf("The address of var is %p\n", &variable); //Not
    printf("The address of var is %u\n", &variable); //pointer   
//Here "%p" & "%u" is format specifer for printing pointer address.
//For u(means unsigned int), output will be in int

//THE “ADDRESS OF” (&) OPERATOR 
//The address of operator is used to obtain the address of a given variable.

    int* pointer = &variable;
// Here 'pointer' is a integer pointer pointing to variable
    printf("The address of var is %p\n", pointer);        

//THE ‘VALUE AT ADDRESS’ OPERATOR (*)
//The value at address or (*) operator is used to obtain the value present at a given memory address.                               
    printf("The value of the address is %d\n", *pointer);        
    printf("The value of the address is %d\n", *(&variable));
    
//Just like pointer of type integer, we also have pointers to char, float etc. 
    int variable_int = 34;
    float var_float = 7.69;
    char var_char = 'R';    

    int* ptr_int = &variable_int;
    float* ptr_float = &var_float;
    char* ptr_char = &var_char;
    
    printf("The address of the int is %p\n", ptr_int);
    printf("The address of the float is %p\n", ptr_float);
    printf("The address of the char is %p\n", ptr_char);

// Pointer to a Pointer
    int var_int = 21;
    int* point = &var_int;
    int** point_pointer = &point;  

    printf("The value of pointer to pointer is %u\n", point_pointer);           
    printf("The value of var_int is %d\n", var_int);
    printf("The value of var_int is %d\n", *point);    
    printf("The value of var_int is %d\n", *(&var_int));
    printf("The value of var_int is %d\n", **(&point));
  
          ////////////////Practice set - 06//////////////////
//1. Write a program to print the address of a variable. Use this address to get the value of the variable
    int var_61 = 7777999;
    int* ptr_61 = &var_61;
    printf("The address of the variable is %p\n", &var_61);
    printf("The value in the address is %d\n", *ptr_61);
    
//6.Write a program to print the value of a variable by using “pointer to pointer” type of variable.
    int p2p = 909;
    int* adr_p2p = &p2p;
    int** adr_adr_p2p = &adr_p2p;
    printf("The address of the variable is %u\n", &p2p); 
    printf("The value of the variable is %d\n", *adr_p2p); 
    printf("The value of the variable is %d\n", **adr_adr_p2p); 
                   
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

       ///////////////////////CHAPTER 7///////////////////////
           //////////////////////////ARRAYS////////////////////
 //An array is a collection of similar elements.
 // Array allows a single variable to store multiple values. 
    int marks[210];//Reserves space to store 210 integers
    marks[0] = 56;
    marks[1]  = 99;   
    //We can go all the way till marks[209]
    printf("The higher marks and lower marks is %d and %d\n", marks[1], marks[0]);
//It is important to note that the array index starts with 0.    
    
//INITIALIZATION OF AN ARRAY
//There are many other ways in which an array can be initialized-: Here cgpa[0] = 9, cgpa[2] = 8 & cgpa[2] = 8
    int cgpa[3] = {9, 8, 8}; // arrays can be initialized while declaration  
    for(int marks_num =0; marks_num < 3; marks_num++){
        printf("The value of the array at index %d is %d\n", marks_num, cgpa[marks_num] );
    }    
    int cgpa2[ ] = {9,8,8};  // same as before     
// C is enough intelligent to count the elements 

// ARRAYS IN MEMORY       
    int arr[3] = {12, 33, 45};      
//This will reserve 4x3=12 bytes in memory (4 bytes for each integer [depend on pc]).   

//POINTER ARITHMETIC
//A pointer can be incremented to point to the next memory location of that type.
    // Using int pointer
    int ari = 89;
    int* ptr_ari = &ari;
    printf("The address of the var is %u\n", ptr_ari);  
    ptr_ari++; //As much as the type var takes up space
                            // the increment will be the same
    printf("The value of the ptr is %u\n", ptr_ari);      
    
    // Using char pointer
    char char_ari = 'R';
    char* char_ptr_ari = &char_ari;
    printf("The address of the var is %u\n", char_ptr_ari);  
    char_ptr_ari++; //As much as the type var takes up space
                            // the increment will be the same
    printf("The value of the ptr is %u\n", char_ptr_ari);      
    
    // Using float pointer
    float float_ari = 21.7;
    float* float_ptr_ari = &float_ari;
    printf("The address of the var is %u\n", float_ptr_ari);  
    float_ptr_ari++; //As much as the type var takes up space
                            // the increment will be the same
    printf("The value of the ptr is %u\n", float_ptr_ari);      
    
//Accessing array using pointers
    int akms_marks[] = {99, 98, 97};
    
//    int* ptr_marks_akms = &akms_marks[0];
    int* ptr_marks_akms = akms_marks; //same as before

    for(int num_marks = 0; num_marks < 3; num_marks++){
        printf("The value of marks at index %d is %d \n", num_marks, akms_marks[num_marks]);
        printf("The value of marks at index %d is %d\n", num_marks, *ptr_marks_akms);
        ptr_marks_akms++;        
    }

//MULTIDIMENSIONAL ARRAYS

//An array can be of 2 dimension/ 3 dimension/ n dimensions.   
    int arr_2d[3][2] = {{1, 4}, {7, 9}, {11, 22}}; 
    printf("The value of the 2d array at index 0 is %d\n", arr_2d[0][0]);   
    printf("The value of the 2d array at index 1 is %d\n", arr_2d[0][1]);    
    printf("The value of the 2d array at index 0 is %d\n", arr_2d[1][0]);    
                                                                                                     
//2-D ARRAYS IN MEMORY

//A 2d array like a 1d array is stored in contiguous memory blocks like this:-
/*
arr_2d[0][0]  arr_2d[0][1]  arr_2d[1][0]   
        1                    4                    7    ...........
    87224            87228          87232   ..........
*/

//Quick Quiz: Create a 2-d array by taking input from the user. And,
//write a display function to print the content of this 2-d array on the screen.


                                                                            
    return 0; // end of the program
    //0 indicates that the program has executed successfully

} 