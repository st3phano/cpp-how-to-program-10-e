1) Semicolon placed incorrectly after if condition and wrong closing quotes 
positioning in cout statement inside else block.

2) Missing closing brace for if block, semicolon placed incorrectly after else 
and wrong closing quotes positioning in cout statement inside else block.

if (age >= 65) {
	cout << "Age is greater than or equal to 65" << endl;
}
else {
	cout << "Age is less than 65" << endl;
}


3) Total not initialized and being utilized.

unsigned int x{1};
unsigned int total{0};

while (x <= 10) {
	total += x;
	++x;
}


4) Using While instead of while. No braces around the 
statements indented after while, causing an infinite loop since the second 
statement is not part of the loop.

while (x <= 100) {
	total += x;
	++x;
}


5) If the loop starts with y > 0 it will never end, because y is increasing.

while (y > 0) {
	cout << y << endl;
	--y;
}
