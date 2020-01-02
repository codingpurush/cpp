#include<iostream>
using namespace std;

int main()
{

    int a,b,c,d,e;
    float avg{0};
    cin >> a >> b >> c >> d >> e ;
    avg = (a+b+c+d+e)/5;
    cout << avg;
    return 0;
}
/*
INPUT --> 1 2 3 4 6
OUTPUT--> 3
But answer should be 3.2
This is because of the data types used for the operands i.e INT
The operation is performed on integers , but answer is a floating point number , but int/int = int 
So 3.2 is converted to 3 (implicit type casting)
There are 2 solutions :
1) data type of the input numbers can be changed to float 
2) we can divide the numbers by 5.0

 Because int/float = float (hierarchy) and float/int = float (hierarchy)
