<h1>Chapter 2:</h1>

-Every program should begin with a comment that describes the purpose of the program.

-If program execution reaches the end of main without encountering a return statement, it’s assumed that the program terminated successfully.

-Although it’s not always necessary to initialize every variable explicitly, doing so will help avoid many kinds of problems.

-Use identifiers of 31 characters or fewer to ensure portability, avoid using abbreviations and do not use identifiers that begin with underscores and double underscores.

-Place spaces on either side of a binary operator.

-If you have an expression such as (a + b) * (c - d) in which two sets of parentheses are not nested, but appear “on the same level,” the C++ Standard does not specify the order in which these parenthesized sub-expressions will evaluate.

-Always enclose an if statement’s body statement(s) in braces.

-If a statement is split across two or more lines, indent all subsequent lines and left-align the group of indented lines.


<h1>Chapter 3:</h1>

-Class names begin with an initial uppercase letter, and member-function and data-member names begin with an initial lowercase letter. Place class data-members last in the class body.

-Headers should not contain using directives or using declarations.

-Declaring a member function with const to the right of the parameter list tells the compiler, 
“this function should not modify the object on which it’s called—if it does, please issue a compilation error.” 

-Making a class’s data members private and member functions public facilitates debugging
because problems with data manipulations are localized to the member functions.


<h1>Chapter 4:</h1>

-Conditional expressions can be used in some situations where if…else statements cannot, but the precedence of the conditional operator is low, so the entire conditional expression is normally placed in parentheses.

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


<h1>Chapter 5:</h1>

-Using the final value and operator <= in a loop’s condition helps avoid off-by-one errors.

-If a program must modify the control variable’s value in the loop’s body, use while rather than for.

-The value and type of a comma-separated list of expressions is the value and type of the rightmost expression.

-In loops, avoid calculations for which the result never changes, such calculations should typically be placed before the loop.

-Using floating-point numbers in a manner that assumes they’re represented exactly (e.g. using them in comparisons for equality or to perform precise monetary calculations) can lead to incorrect results. Floating-point numbers are represented only approximately.

<strong>-For all but the most performance-intensive situations, apply the following rule of thumb: First, make your code simple and correct; then make it fast and small, but only if necessary.</strong>

-Consider the expression (i != 0) && (10 / i == 2). The dependent condition (10 / i== 2) must appear after the && operator to prevent the possibility of division by zero.

-Placing the literal on the left, as in 7 == x, enables the compiler to issue an error if you accidentally replace the == operator with = .


<h1>Chapter 6:</h1>

-To promote software reusability, every function should be limited to performing a single, well-defined task, and the name of the function should express that task effectively. A function that has many parameters may be performing too many tasks. Consider dividing the function into smaller functions that perform the separate tasks.

-For industrial-strength code, always check that the arguments you pass to math functions are valid.

-The order of evaluation of a function’s arguments is not specified by the C++ standard. Sometimes when a function’s arguments are expressions, such as those with calls to other functions, the order in which the compiler evaluates the arguments could affect the values of one or more of the arguments. If the evaluation order changes between compilers, the argument values passed to the function could vary, causing subtle logic errors, to ensure the order evaluate the arguments in separate assignment statements before the function call.

-Always provide function prototypes, even though it’s possible to omit them when functions are defined before they’re used. Providing the prototypes avoids tying the code to the order in which functions are defined.

-The portion of a function prototype that includes the name of the function and the types of its arguments is called the function signature or simply the signature. The function’s return type is not part of the function signature. Functions in the same scope must have unique signatures.

-If a square function that uses an integer parameter is called with a floating-point argument, the argument is converted to int (a lower type and thus a narrowing conversion), and square could return an incorrect value.

-Provide a default case in a switch to catch errors even if you are absolutely, positively certain that you have no bugs!

-To make numeric literals more readable, C++14 allows you to insert between groups of digits in numeric literals the digit separator ' (a single-quote character).

-By convention, you should capitalize the first letter of an enum class’s name and use only uppercase letters in enumeration constant names.

-Qualifying an enum class’s constant with its typename and :: explicitly identifies the constant as being in the scope of the specified enum class. If another enum class contains the same identifier for one of its constants, it’s always clear which version of the constant is being used, because the typename and :: are required. Using scoped enums avoid the potential naming conflicts that can occur with unscoped enum constants.

-Local variables also may be declared static. Such variables also have block scope, but unlike other local variables, a static local variable retains its value when the function returns to its caller. The next time the function is called, the static local variable contains the value it had when the function last completed execution. All static local variables of numeric types are initialized to zero by default.

-Declaring a variable as global rather than local allows unintended side effects to occur when a function that does not need access to the variable accidentally or maliciously modifies it. In general, variables should be declared in the narrowest scope in which they need to be accessed. The const qualifier should be used to enforce the principle of least privilege.

-Stack frame is also known as activation record. If more function calls occur than can have their activation records stored on the function-call stack, a fatal error known as stack overflow occurs.

-If you change the definition of an inline function, you must recompile all of that function’s clients.

-Because reference parameters are mentioned only by name in the body of the called function, you might inadvertently treat reference parameters as pass-by-value parameters. This can cause unexpected side effects if the original variables are changed by the function. For passing large objects, use a const reference parameter to simulate the appearance and security of pass-by-value and avoid the overhead of passing a copy of the large object.

-When returning a reference to a local variable, unless that variable is declared static, the reference refers to a variable that’s discarded when the function terminates. An attempt to access such a variable yields undefined behavior.

-Always using the unary scope resolution operator (::) to refer to global variables (even if there is no collision with a local-variable name) makes it clear that you’re intending to access a global variable rather than a local variable.

-Every parameter in the template parameter list is preceded by keyword typename or keyword class (they are synonyms in this context).

-Do not depend on the order in which operands are evaluated. To ensure that side effects are applied in the correct order, break complex expressions into separate statements. Recall that the && and || operators use short-circuit evaluation. Placing an expression with a side effect on the right side of a && or || operator is a logic error if that expression should always be evaluated.

-Avoid using recursion in performance situations. Recursive calls take time and consume additional memory. Any problem that can be solved recursively can also be solved iteratively (nonrecursively).
