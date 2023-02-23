# RESTAURANT MANAGEMENT AND BILLING SYSTEM
# Introduction
This is a Restaurant Management and Billing System, it interacts with user, asks food,
quantity in an order, then stores the data in a text file with date and order number and
also generates a bill for each order.
# Problem Statement
It will be an interactive system where model restaurant will take order from its customer
and
generate bill. Use file to store data.
# Algorithm
In this, we have one code file, and two existing text file and another text file will be
formed once the code is run.
Here we have two functions,
# 1) Sales_Record() :
This function takes two arrays and five integers as arguments.
It declares 20 variables with different food names corresponding to the menu lists and
initializes all of them with zero.
It then runs the loop for ‘n’ times (which is the number of food items entered), and each
time checks if the integer stored in the item array at the ith index is equal to which food
code, it then accordingly assigns the value in the qty array at the ith index which
corresponds the value at ith index of item array.
At last, it opens a text file called “quantity data by date” in append mode so that if the file
does not exist, it is created and data can be appended in it and is not overwritten.
The opened file is closed at last.
# 2) billfoodcount() :
This function also takes two arrays and five integers as arguments. It then prints the
general layout of Bill with date and order number.
It declares 20 variables with different food names corresponding to the menu lists and
initializes all of them with zero.
It also creates an integer variable ‘total’ to store the total amount.
Then a loop is run ‘n’ times (which is number of food items entered by user), each time
a condition is checked, where integer in item array(which is food code) is tested for the
value in if/else if statement, and assigning the value accordingly. It also prints the Bill
accordingly and appends the cost to the total variable.
Then it converts the total variable to float and stores in f.
Then it prints the remaining bill layout where it is printing the total amount, GST taxes,
amount with GST added, cash that has to be paid and a thank you message at last.
# main() function :
Then comes the main function from where execution starts.
First some variables of integer type are declared, which will store number of food
items( countorder ), date, month, year and order number( ordno ).
# Printing menu
Then it declares two pointers pointing to two files. Then it opens both the files in read
mode so that data can be read from them.
These two files namely “vegmenu.txt” and “NonVegmenu.txt” essentially contain the
menu of restaurant, with price and food code.
Then it reads characters from both the files and prints menu accordingly, we use while
loop here because menu is changeable and in such case it would be too hectic to every
time edit code accordingly, so we use while loop till the END OF FILE (EOF) which is
the end point of file, so all the contents of the file gets printed.
# Getting Input from User
The user is asked to enter , date, month, year in a specified format, then order number.
User has to enter number of food items in total, which determines the number of times
loop will run in both user made functions billfoodcount() and Sales_Record() .
Two integer type arrays are declared to store food code entered by user and quantity
corresponding to the food code.
Then a loop is run countorder times, where user has to enter food code, and quantity.
# Calling User Defined functions
The two functions are called, which appends the data in a file( Sales_Record() ) and prints
out bill ( billfoodcount() ).
At last, both the files are closed.
# Limitations:
This code is unable to print daily menu according to sales of past 15 days. Although it
can store ordered data date and order wise in a text file, which leaves a possibility that
this code can be improved.
# Future Scope of Work :
This can reduce the time of creating bill and registering data in a log book. Hence, this
can save customer’s time as well as restaurant’s worker’s time by storing data quicky
date and orderwise.
