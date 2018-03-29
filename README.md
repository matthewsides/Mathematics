# Mathematics

  Version 1.00
  
  27/11/2017
     

| Version     | Author          | Date                 | Comments                       |
|-------------|-----------------|----------------------|--------------------------------|
| 1.00        |  Matthew Sides  | 27th  November 2017  | Initial Version                |
| 1.01        |  Matthew Sides  | 5th December 2017    | Edited to suit Mapping docs    | 
| 1.02        | Matthew Sides   | 22th February 2018   | Slight changes to meet criteria| 
| 1.03        | Matthew Sides   | 28th March 2018      | Three Pass criteria Covered    |
|             |                 |                      |                                |
|                                                                                       | 

## Table Of Contents

0 Introduction

1  Calculation of GCD and LCM 

2 Probability of Int being Divisible by 5 

3 Algorithm to calculate Arithmetic and Geometric Progression

4 How to use integral calculus to solve practical problems involving area

5 Algorithm to identify simple shapes using co-ordinates

6 Probability

7

### [0] Introduction

This repository documents information relating to  mathematical methodologies, ideology's and questions that have been defined, answered and documented. 


### [1] How to calculate the greatest common divisor and-least common-multiple of a given pair of numbers?

The GCD an acronym for Greatest Common Divisor, is the largest number that divides into a pair of given numbers. How may this be calculated? The greatest common divisor of a given pair of numbers may be calculated through firstly finding the divisors of the given numbers. For instance the divisors of sixty would be [1,2,3,4,5,15,...],whilst the divisors of say forty-five would be [1,2,3,5,9,15,...]. Through following the above metholodgy and finding the divisors of the given pair of numbers, the first part or step is completed (done), the next step would be to find the correlation between the two lists grafted, essentially finding the greatest number that these two lists share in common. In this example the GCD is 15.


Whilst the Greatest common divisor as explained briefly in the above paragraph deals with division and finding the greatest common number (divisor), LCM which stands for Lowest Common Multiple relates to the smallest number that is a multiple of both given pair of numbers.For instance the multiples of 6 are [ 6, 12, 18, 24, 30,...], whilst the multiples of 8 are [8, 16, 24, 32, 40,...], therefore it is possible to deduce that the lowest common multiple of the given pairs of numbers (in this example 6 and 8) is 24, as it is the lowest integer that may be multipled into both numbers.

### [2] What is the probability of a random integer being divisible by 5?

Probability of a random infinite discrete formula

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Infinite_Discrete_Formula.png?raw=true "Optional Title")

The probability of a random integer being divisible by 5 is 1/5 how do we know this is plausable?, this is because every fifth number is divisible by 5 essentially meaning that every number that ends with either a 0 or 5 can be divided by 5 e.g 5 10 15 20 (numbers in the five timetable), which is every one in five number.Whilst all other numbers in between {0,1,2,3,4} are not probable to equate or be divisible by the random integer, giving the same value of 1 / 5 (note: the equavilance classes {0,1,2,3,4} cannot nor will have the same probality as 5 when dividing by a random integer as it is just not feasable).


Therefore to look at this from another perspective we need to understand that we cannot generate a random number and only create the appearance of random selection from a finite or select amount of possibilities  repeatedly, whilst increasing the size of the finite set of numbers (note:since the parameters or range of numbers are set) to ensure a different outcome each time.

### [3] Algorithm to calculate Arithmetic and Geometric Progression

Objective- Create a Program capable of calculating the Arithmetic and Geometric Progression of an inputted number.

Aims- [Take Input, Display Output, Loop multiple times, Calculate Arithmetic and Calculate Geometric.]

Language/ID : C++, Repl.IT 

Algorithm:

// Take a number (integer | input).

// Multiply the number (input) by itself (Operator *).  

// Inconjunction use addition to merge or double (Add) the number (input) by itself (Operator +).

// Loop said functions displayed above until set variable equal to a pre-set value (re-do the above multiple times).

// Give the final values once the calculations are done (Print the values).

// Presenting or showing the progression of values.

// The * relates to the Geometric, whilst the + is linked to calculating the Arithmetic.

View Notepad file labelled 'Calculator-arithmetic-geometric' for code-snippet pertaining to the above documentation.

For the Download, ZIP the repository and then extract the required files copying and pasting the code into an ID (Inparticular; Repl.IT, Visual Studios, etc.) for testing. Recommended: Use the command line console whilst in both build mode and with the finished build.

### [4] How to use integral calculus to solve practical problems involving area

#### Calculus 
The fundamental idea of calculus is to study change by studying "instantaneous" change, by which we mean changes over tiny intervals of time.

#### Integral 
In mathematics, an integral assigns numbers to functions in a way that can describe displacement, area, volume, and other concepts that arise by combining infinitesimal data. 

#### Indefinite integral 
An Indefinite integral is essentially the opposite of an derivative 


### [5] Algorithm to identify simple shapes using co-ordinates

Objective- Create a Program capable of identifying simple shapes using co-ordinates.

Aims- [Take Input, Display Output, Loop multiple times, identify simple shapes using cordinates.]

Language/ID : C++, Repl.IT, Notepad++ 

Algorithm:

// Store or hold values that make a shape.

// Take (input) X and Y cordinates (maximum amount of cords required equals four)

// Store the shape cords twice in the same variable.

// Use pythagoras theorem a2 + b2 = c2 on the pre stored cord values that when connected form either a square or rectangle.

// Once the value has been doubled, added and squared by itself square root the value 

// Furthermore check the points to each other to decphiher what shape the cordinates form when measuring the distance and are connected.

// if all sides are equal to 0 it will form a rectangle

// whilst if the cords do not equal to either a triangle, square or rectangle (simple shapes) no shape is given (outputted) just text stating that the values given are not a simple shape.

#### Comparator Table (Properties of Quadrilaterals)

The shape comparator table presented below details all the possible outcomes through comparision of coordinates and points, though not all the shapes were implemented into the coded program the outcome is illustrated none the less below showing the variables required to form each shape.

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Shape_Comparator_Table.png?raw=true "Optional Title")

#### Formulas and Methodologys Applied 

The below images detail formulas that were used, the methodology and ideology applied in the creation of a program capable of generating geometrical shapes based on user input (identify shapes based on input).

Slope Formula-

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Slope_Formula.png?raw=true "Optional Title")

Distance Formula-

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Distance_Formula.png?raw=true "Optional Title")

Mid Point Formula-

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Midpoint_Fomula.gif?raw=true "Optional Title")

Parallel Lines- 

Two Lines are parallel if they are the same distance apart, never crossing each other, essentially having the same slope and different y-intercept's.

Perpendicular Lines- 

A perpendicular line is said to form based on the relationship between two lines which intersect essentially creating a right angle (90 degree angle), expanding on the idea of an perpendicular line, one is formed if their slopes are negative reciprocals.

Parallelogram- 

A parallelogram is a simple (non-self-intersecting) quadrilateral with two pairs of parallel sides.

Rectangle-

A quadrilateral with 4 right angles.

Rhombus-

A quadrilateral with four equal sides.

Square-

A quadrilateral with four equal sides and four right angles.



Links used for reference:

http://www.cplusplus.com/reference/cmath/pow/

https://www.mathsisfun.com/pythagoras.html

The above link is and was integeral to understanding the progam, as pythagoras (theorem) is applied in the algortihm and code.

View C++ file labelled 'simple-shape-identifier' for code-snippet pertaining to the above documentation

For the Download, ZIP the repository and then extract the required files either copying and pasting the code into an IDE or opening it in an IDE (Inparticular; Repl.IT, Visual Studios, Notepad++, etc.) for testing. Recommended: Use the command line console whilst in both build mode and with the finished build.


### [6] Probability

Rule for Conditional Probability

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/Conditional_Property_Formula.png?raw=true "Optional Title")

#### What is the probability of having 7 when rolling two die?

The probablity of having a seven when rolling two die is 6/36 = 1/6, this outcome was found through adding the numbers on the two die for each of the possible outcomes, counting how many times the sum was seven. Through doing so it can be seen that the sum is seven for six of the possible outcomes. Thus the sum is a 7 in 6 of the 36 outcomes and hence the probability of rolling a 7 is 6/36 = 1/6.

#### What is the probability of having having at least one 2 when rolling two die?

The probability of having at least one two when rolling two die is 11/36, this numerical value coming to frutition using similiar  methods as the above question. The total number of possibilities can be obtained from the multiplication principle: there are 6 possibilities for dice one, and for each outcome for dice one, there are 6 possibilities for dice two. So, the total number of joint outcomes (diceone and dicetwo) is 6 times 6 which is 36. Thereafter countng how many times the sum was two which is 11, therefore the outcome 11/36.


#### What is the probability of having 7 after rolling a 2?

The probability of having a seven after rolling a two is 1/6 and does not change since rolling a two should not affect the probability since even after a two was rolled all the other outcomes including getting a two again are avaliable and therefore the probability should not have changed (Its similiar to a trick question, expecting one to think that the probability would have changed from what it ussually would be in that instance using two die).

#### What is the probability of having a 7, knowing for sure that I will roll a 2?

The probability of having a seven and knowing for sure that a two will be rolled equates to 11/36, not changing from the usual probability as all the possible outcomes are still avaliable including the recently rolled seven, thus the probability in this instance has not changed (Similiar to the above question and  a trick question, expecting one to think that the probability would have changed from what it ussually would be in that instance using two die).

### [7] Vectors 

A vector is a quantity with two independent properties; magnitude and direction.For instance a displacement from a fixed point A to a 
fixed point B is a vector because its magnitude is the distance between A and B and the direction is the direction in which it is 
necessary to move in a straight line to get from A to B.

The term also denotes the mathematical or geometrical representation of such a quantity.Vectors are usually represented in diagrams by directional lines, i.e. lines with arrows indicating the direction.

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/vector.png?raw=true "Optional Title")

In contrast to vectors, normal quantities which do not have direction are called scalars.

#### Determine shape parameters using appropriate vector methods.


Algorithm to determine shape parameters using appropriate vector methods-



### [8] Rate of change

Rate of change is the average rate in which a function changes value, illustrating the difference between the function result and input result. The rate of change is generally depicted or represented as a ratio between a change in one variable relative to a corresponding change in another; graphically, the rate of change is represented by the slope of a line.

Whilst delving further into the process,the average rate of change function entails a calculation of the the amount of change in one item divided by the corresponding amount of change in another. Using function notation, the Average rate of Change of a function may be defined from a to x as (formula):

<img src="https://github.com/matthewsides/Mathematics/blob/master/average_rate_of_change.jpg" width="280" height="100">

Examples pertaining to the rate of change within an algebraic function (solved):

##### Q1|S1

The average rate of change of f(x) on the interval [a,b] is f(b)−f(a)/b−a.

- F(x) = x^3+10

- Rate of change from 0 to 1.

- a = 0, b = 0

|                |                 |                   |    |
|----------------|-----------------|-------------------|----|
| f(b) - f(a)    |  ((1))^4 + 10 - ( ((0))^4 + 10 |    |    |            
|  b - a         |  / 1 - (0)      |                   |    |
|                |                 |                   | = 1|
                                                  

Answer the average rate of change is 1.

Conversion to Binary = 1

##### Q2|S2

The average rate of change of f(x) on the interval [a,b] is f(b)−f(a)/b−a.

- F(x) = 3x^3+2x^2+20x+100

- Rate of change from 0 to 16 .

- a = 10, b = 16


|                |                 |                   |    |
|----------------|-----------------|-------------------|----|
| f(b) - f(a)    |  3((16))^4+2((16))^2+20(16)+100-(3((0))^4+2((0))^2+20(0)+100)|       |    |            
|  b - a         |  / 16 - (0)      |                |    |
|                |                 |                   | = 12340|

Answer the average rate of change is 12340.

Conversion to Hex = 

Note: ^4 is known as a quartic,whilst cubed (^3) is a derivative of a quartic function.

Conversion Table:

![Alt text](https://github.com/matthewsides/Mathematics/blob/master/vector.png?raw=true "Optional Title")
