# Problem.md — Pseudocode for Lab 03 Problems

## Problem 1: Display Student Information Using Different Data Types

```
START
    DECLARE name AS STRING
    DECLARE rollNumber AS INTEGER
    DECLARE gpa AS FLOAT
    DECLARE isEnrolled AS CHARACTER ('Y' or 'N')

    PRINT "Enter student name: "
    INPUT name

    PRINT "Enter roll number: "
    INPUT rollNumber

    PRINT "Enter GPA: "
    INPUT gpa

    PRINT "Is enrolled (Y/N): "
    INPUT isEnrolled

    PRINT "Name: ", name
    PRINT "Roll Number: ", rollNumber
    PRINT "GPA: ", gpa
    PRINT "Enrolled: ", isEnrolled
END
```

## Problem 2: Read and Display a Character Using getchar() and putchar()

```
START
    DECLARE ch AS CHARACTER

    PRINT "Enter a character: "
    ch = getchar()   // reads a single character from input

    PRINT "You entered: "
    putchar(ch)      // displays the character
END
```

## Problem 3: Display a Floating-Point Value Using Different Precision Settings

```
START
    DECLARE value AS FLOAT

    PRINT "Enter a floating-point number: "
    INPUT value

    PRINT value WITH 0 DECIMAL PLACES
    PRINT value WITH 2 DECIMAL PLACES
    PRINT value WITH 4 DECIMAL PLACES
END
```
