# Aim -
To study and implement C++ decision making statement loops.

## Software Used -
VS Code

## Problem Statement -
- Write a c++ code for printing numbers using for loop.

- Write a c++ code for printing numbers using while loop.

- Write a c++ code for making a triangular star pattern.

- Write a c++ code for making a square shaped star pattern.

- Write a c++ code for making a pyramid of star.

- Write a c++ code to get sum of the numbers printed.

- Write a c++ code to make a Floyd triangle.

- Write a c++ code to make Floyd triangle of alphabets.

- Write a c++ code for password validation till correct password is entered.

## Theory -
Loops are used to make the program less repetitive and compact ny iterating a part of a program several times .Thus,they are also  called repetitive control structures.

Types of loops:-

a) *For Loop*

b) *While Loop*

### A) For Loop -
 A "for" loop is a control flow statement used to repeat a block of code a certain number of times.
 
 for loop in C++ allows you to repeat a block of code a specific number of times.
 
 The syntax can vary slightly depending on the programming language. 
 
 *syntax :*
```
for (initialization; condition; update) {
    // Code to execute
}
```

*Example :*
```
for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
}
```

This loop prints numbers 0 to 4.

### B) While loop:-
A "while" loop is another type of control flow statement that repeatedly executes a block of code as long as a specified condition is true. 

You can control the flow inside a "while" loop using break to exit the loop and continue to skip to the next iteration.
  
A while loop in C++ repeats a block of code as long as a specified condition is true. 
  
*syntax :*
```
while (condition) {
    // Code to execute
}
```

*Example :*
```
#include <iostream>

int main() {
    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}
```

## Program codes
### 1. *Printing numbers using for loop* 
```
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}
```

### 2. *Printing numbers using while loop* 
```
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}
```

### 3. *Triangular star pattern* 
```
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```

### 4. *Square shaped star pattern* 
```
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}
```

### 5. *Pyramid of star* 
```
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```

### 6. *Sum of the numbers printed* 
```
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}
```

### 7. *Floyd triangle* 
```
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}
```

### 8. *Floyd triangle of alphabets* 
```
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}
```

### 9. *Password validation* 
```
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Sucess !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```

## Output -
### 1. *Printing numbers using for loop* -
![Screenshot 2024-08-13 042449](https://github.com/user-attachments/assets/83264439-69cc-47db-a604-08f020ad5e10)
### 2. *Printing numbers using while loop* -
![Screenshot 2024-08-13 042541](https://github.com/user-attachments/assets/4c7b5cbe-29d6-44b4-9e4f-d37cb78a2dda)
### 3. *Triangular star pattern* -
![Screenshot 2024-08-13 042600](https://github.com/user-attachments/assets/c642ec00-217f-475c-8fa1-95ed0251797f)
### 4. *Square shaped star pattern* -
![Screenshot 2024-08-13 042620](https://github.com/user-attachments/assets/3ad255a7-5a7b-45e5-8ff3-04343bc5f82d)
### 5. *Pyramid of star* -
![Screenshot 2024-08-13 042639](https://github.com/user-attachments/assets/d76143ba-30f9-49ca-9e61-2830d0a76001)
### 6. *Sum of the numbers printed* -
![Screenshot 2024-08-13 042729](https://github.com/user-attachments/assets/9480efbb-35da-4c8d-a596-79924a1f542e)
### 7. *Floyd triangle* -
![Screenshot 2024-08-13 042757](https://github.com/user-attachments/assets/2cff1e40-e38d-4096-945b-896ee14ab476)
### 8. *Floyd triangle of alphabets* -
![Screenshot 2024-08-13 042821](https://github.com/user-attachments/assets/bdf36bca-1705-4a5f-bf71-1bf7d853d79c)
### 9. *Password validation* -
![Screenshot 2024-08-13 042913](https://github.com/user-attachments/assets/e65b558b-0e34-4d4d-81bc-a0eda528781f)

## Conclusion:-
Decision-making statements like if, elif, and else control code execution based on conditions, while loops (for and while) repeat code blocks. Combining these allows dynamic, responsive programming. For example, using if statements within loops enables actions based on conditions during each iteration, efficiently handling varying data and scenarios.
