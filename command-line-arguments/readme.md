## COMMAND LINE ARGUMENTS

```
int main( int argc , char& argv[] ) {
    // blah blah
}
``` 

- argc = argument count, number of arguments passed + name of program/file 
- argv = argument vector, array of arguments passed also containing name of program/file (array containing pointer to arguments)

commands to execute in the command line->

```
g++ name_of_file.cpp
.\a.exe arg1 arg2 arg3 arg4  
```

g++ name_of_file.cpp will create a .exe file called a.exe


### Passing multiple command line arguments 

```
// C++ program to demonstrate the use of command line 
// arguments 
#include <iostream> 
using namespace std; 

int main(int argc, char* argv[]) 
{ 
	cout << "You have entered " << argc 
		<< " arguments:" << endl; 

	// Using a while loop to iterate through arguments 
	int i = 0; 
	while (i < argc) { 
		cout << "Argument " << i + 1 << ": " << argv[i] 
			<< endl; 
		i++; 
	} 

	return 0; 
}

// COMMAND LINE ARGUMENT/ IN THE TERMINAL
g++ one.cpp 
.\a.exe one two three four hundred

```

#### OUTPUT 
You have entered 6 arguments 
Argument 1 : .\a.exe 
Argument 2 : one  
Argument 3 : two  
Argument 4 : three  
Argument 5 : four  
Argument 6 : hundred  

### Passing multiple command line arguments as a single string 

```

// C++ program to illustrate the spaces seperated string as 
// a single argument 
#include <iostream> 
using namespace std; 

int main(int argc, char* argv[]) 
{ 
	cout << "Program Name Is: " << argv[0] << endl; 

	if (argc >= 2) { 
		cout << "Number Of Arguments Passed: " << argc 
			<< endl; 
		cout << "----Following Are The Command Line "
				"Arguments Passed----"
			<< endl; 
		cout << "argv[0]: " << argv[0] << endl; 
		cout << "argv[1]: " << argv[1] << endl; 
	} 

	return 0; 
}


// IN THE TERMINAL 
g++ one.cpp 
.\a.exe "vaishali vaishali vaishali"

```

#### OUTPUT 
Number of arguments passed: 2 
argv[0] : .\a.exe
argv[1] : vaishali vaishali vaishali