# CST116SRS02
I/O Stream Formatting

Class ID: Vulpix

SRS ID: CST116SRS02

Unresolved Issues: 

Notes: The data table in the README.md file does not allocate one space between the $ sign and the third value. I had made it so my code does that to make the table more readable in the console. 

---

Purpose: 

Demonstrate stream input and output formatting.  
Practice creating multiple projects in a solution. 

Instructions: 

Part 0:  

Create a project named “Output”.

Format the following sales information using C++ stream manipulators. 

   West: $ 36,364.87  
Midwest: $ 12,431.33  
   East: $127,690.50  
  South: $  9,200.00  

Right align the labels and colons and align the $’s using i/o manipulators. Place value punctuation according to the U.S. convention of 3 digits per group separated by commas with decimal point for dollar/cent separator. Show 2 digits to the right of the decimal point even when there are not fractions of a dollar in the data.  

Part 1:  

Create a project named “Input”.  

Read user input from std::cin with a prompt for a number "Enter a number: ". Display the number back to std::cout with the format in scientific notation. 
