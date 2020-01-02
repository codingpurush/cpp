Hierarchy:
Float   
Int    
Char                                                
Bool 

IMPLICIT TYPE CASTING
int + int = int 
float + int = float
char + char = int (because of the operator '+' which is used on int and the sum of the ASCII values is printed)
char + float = float 
bool + float = float (bool becomes 1)

EXPLICIT TYPE CASTING
cout << int(5.6);
OUTPUT --> 5
cout << float(10/3);
OUTPUT --> 3.3

char ch = 'A';
ch = ch + 2;
cout << ch;
OUTPUT --> C
cout << int(ch);

cout<< bool(ch);
OUTPUT --> 1 (non zero)
