 College Management System in C:
This is a simple console-based College Management System written in C language. It allows users to add, view, and search student records based on registration year and roll number.

✅ Features
Add student details (name, father's name, year, roll number, age, percentage)
Display all student records
Search for a student by roll number and registration year
Stores up to 100 student records
Simple text-based interface for interaction

 How It Works ?
Uses parallel arrays to store student data:
name, fname, rollno, year, age, marks

Functions:

addstudent(): Adds a new student

displaystudent(): Displays all student data

searchstudent(): Searches for a student using year and roll number

Menu-driven interface using a while(1) loop and switch-case

Technologies Used
Language: C
Headers: stdio.h, string.h
Input: scanf, gets, getchar

⚠ Note
The roll number is formatted as: GU-<year>-<rollno>
