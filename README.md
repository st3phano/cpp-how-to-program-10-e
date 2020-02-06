Chapter 2:

-Every program should begin with a comment that describes the purpose of the program.

-If program execution reaches the end of main without encountering a return statement, it’s assumed that the program terminated successfully.

-Although it’s not always necessary to initialize every variable explicitly, doing so will help you avoid many kinds of problems.

-Declare only one variable in each declaration and provide a comment that explains the variable’s purpose in the program.

-Use identifiers of 31 characters or fewer to ensure portability.

-Avoid using abbreviations in identifiers.

-Do not use identifiers that begin with underscores and double underscores.

-Place spaces on either side of a binary operator.

-If you have an expression such as (a + b) * (c - d) in which two sets of parentheses are not nested, but appear “on the same level,” the C++ Standard does not specify the order in which these parenthesized sub-expressions will evaluate.

-Always enclose an if statement’s body statement(s) in braces.

-If a statement is split across two or more lines, indent all subsequent lines and left-align the group of indented lines.


Chapter 3:

-Class names begin with an initial uppercase letter, and member-function and data-member names begin with an initial lowercase letter.

-Place a class’s data members last in the class’s body.

-Headers should not contain using directives or using declarations.

-Declaring a member function with const to the right of the parameter list tells the compiler, 
“this function should not modify the object on which it’s called—if it does, please issue a compilation error.” 

-Making a class’s data members private and member functions public facilitates debugging
because problems with data manipulations are localized to the member functions.


Chapter 4:

-The precedence of the conditional operator is low, so the entire conditional expression is normally placed in parentheses.

-Conditional expressions can be used in some situations where if…else statements cannot.

-https://en.wikipedia.org/wiki/Integer_overflow#Security_ramifications

-The maximum and minimum values that can be stored in an int variable are represented by the constants INT_MAX and INT_MIN, 
respectively, which are defined in the header \<climits\>. There are similar constants for the other integral types 
and for floating-point types (header \<cfloat\>).

-According to the C++ standard, the result of division by zero in floating-point arithmetic is undefined. 
When performing division (/) or remainder (%) calculations in which the right operand could be zero, 
test for this and handle it (e.g., display an error message) rather than allowing the calculation to proceed.

-When the stream manipulators fixed and setprecision are used, the printed value is rounded 
to the number of decimal positions indicated by setprecision’s argument, 
although the value in memory remains unaltered.

-The conditional operator (?:), the unary operators preincrement (++), predecrement (--), plus (+) and minus (-), 
and the assignment operators =, +=, -=, *=, /= and %= associate from right to left.

Chapter 5:

-Using the final value and operator <= in a loop’s condition helps avoid off-by-one errors.

-If a program must modify the control variable’s value in the loop’s body, use while rather than for.

-The value and type of a comma-separated list of expressions is the value and type of the rightmost expression.

-In loops, avoid calculations for which the result never changes—such calculations should typically be placed before the loop.

-Using floating-point numbers in a manner that assumes they’re represented exactly (e.g., using them in comparisons for equality) can lead to incorrect results. Floating-point numbers are represented only approximately.

-Do not use variables of type double (or float) to perform precise monetary calculations. The imprecision of floating-point numbers can lead to errors.

-There’s a tension between achieving quality software engineering and achieving the best-performing software. Sometimes one of these goals is achieved at the expense of the other. For all but the most performance-intensive situations, apply the following rule of thumb: First, make your code simple and correct; then make it fast and small, but only if necessary.

-Consider the expression (i != 0) && (10 / i == 2). The dependent condition (10 / i== 2) must appear after the && operator to prevent the possibility of division by zero.

-Placing the literal on the left, as in 7 == x, enables the compiler to issue an error if you accidentally replace the == operator with = .
