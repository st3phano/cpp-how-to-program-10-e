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