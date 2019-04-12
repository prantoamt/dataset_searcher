# dataset_searcher

## Assignment of CSE 425
## Section: 04
## Semester: Spring 19
## Course Instructor: KMN1 (Dr. Kamruddin Nur)
##Video Link: https://youtu.be/DDTMpyhC-Ts


##Group Members:
### Md. Badiuzzaman Pranto - 1512236042
### Md. Hasibul Alam Ratul - 1520362042
### Jahidul Alam - 1621558042


#Objective: In real life, we often need to manipulate a huge amount of data with the help of programming languages. For example, many researchers needs to collect data for their research purpose and later does different kinds of operations on this data, many multi-national companies need to do analysis on their previous sale data to predict their future sale, etc. All programming languages are not designed to work with data. Some are made for server maintenance purpose, some are web-base, some for controlling machines. In this assignment, we are given a large amount of data (Air Quality of Barchelona) to do search operation based on different searching criteria using C++, Python and Shell-Script. Then we will compare the language design issues of these three languages.

#Searching Criteria:
By doing analysis of the dataset, we have chosen these searching criterions
1 .	Station
2 .	Air Quality
3 .	O3 Hour
4 .	O3  Quality
5 .	O3 Value
6 .	NO2 Hour
7 .	NO2 Quality
8 .	NO2 Value
9 .	PM10 Hour
10 .	PM10 Quality
11 .	PM10 Value

#Comparison Table:
SL
Python	C++	Shell Script
1	Python has “LIST” which makes the manipulation of huge quantity of data easier.	It is difficult to manipulate huge quantity of data with C++	Shell Script doesn’t have the support of “LIST” like Python but in shell command, it is easier than C++ to manipulate huge amount of data
2	Python has some built in libraries which enables searches easier than C++ & Shell Script.
Example:
if “is” is in “He is a teacher”:
print (“Something”)	For doing these kind of searches, we need to write separate codes.	Bash has AWK support to do text operations easily. So searching in shell is less hard work than C++
3	While coding, programmer doesn’t need to worry about variable type.	Programmer needs to define variable type explicitly.	Like Python, here programmer also doesn’t need to worry about variable type
4	Python execution needs more time than C++ & Shell Script	C++ code runs faster than two other languages.	Shell Script is faster than Python but slower than C++
5	As a programming language, Python is more expressive than C++ and Shell Script.	C++ is less expressive than Python	It seems less expressive than Python but more expressive than C++
6	While manipulating huge amount of data, python seems to be most handy, and flexible.	C++ does not seem to be good option to do operation of huge amount of data.	Shell commands are not as flexible as Python but more flexible than C++
7	Python programs are more readable than others.	C++ codes are lengthier than Python but it is also readable.	Shell commands needs OS supports in many cases. So it seems less readable than python
8	Python is the most feasible language designed to do operations on large amount of data.	The design of C++ does not seems good to do operations on large amount of data.	Shell Scripts seems feasible while manipulating on the dataset but feasibility is lesser than Python


#Conclusion: Coding in three different languages for the same kinds of operations brings up many noticeable design issues. The purpose of all programing languages are not the same, though we can use one language for multiple issues. Here Python is the one seems to be most feasible language for large amount of data manipulation.    
