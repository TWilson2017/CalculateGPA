//------------------------------------------------------------------
// File name:   myGPA.cpp
// Assign ID:   PROG2c
// Due Date:    01/24/17 at 11pm 
//
// Purpose:     Write a program to calculate GPA based on the number
//                 of As, Bs, Cs, Ds and Fs earned by a student. Also 
//                 calculate the number of credit hours taken.
// Author:      twilson Tishauna Wilson
//
//------------------------------------------------------------------

#include <iostream>
#include <string> 

using namespace std; 

int main ()
 {
    string First,       // Read First Name.
           Last;        // Read Last Name.
    int Acount,         // # of A's earned.
        Bcount,         // # of B's earned.
        Ccount,         // # of C's earned.
        Dcount,         // # of D's earned.
        Fcount;         // # of F's earned. 
    int HoursTaken,     // Total # credits taken.
        Courses;        // Total # of courses taken. 
  float QualityPoints,  // Sum of Quality Points earned in each class.
        GPA;            // Computed GPA.
    
     cout << endl << "(c) 2017, twilson Tishauna Wilson" << endl << endl; 

    // Insert algorithm comments (from gpa_comments.cpp) 
    
 
   //-|----------------------------------------------------------------------
   //-| 1. Read first name, the last name.
   //-|----------------------------------------------------------------------

    cout << endl << "Enter First Name: ";
    cin >> First;

    cout << endl << "Enter Last Name: ";
    cin >> Last;
    
   //-|----------------------------------------------------------------------
   //-| 2. Read values for number of As, Bs, ..., Fs.
   //-|----------------------------------------------------------------------
  
    cout << endl << "Enter #As: ";
    cin >> Acount; 
    
    cout << endl << "Enter #Bs: ";
    cin >> Bcount;
    
    cout << endl << "Enter #Cs: ";
    cin >> Ccount;
    
    cout << endl << "Enter #Ds: ";
    cin >> Dcount;
    
    cout << endl << "Enter #Fs: ";
    cin >> Fcount;
    
    cout << endl << endl << endl;
   //-|----------------------------------------------------------------------
   //-|  3. Compute HoursTaken = 3 * (Acount + ... + Fcount);
   //-|----------------------------------------------------------------------
  
     HoursTaken = 3 * (Acount + Bcount + Ccount + Dcount + Fcount);                    
    
   //-|----------------------------------------------------------------------
   //-|  4. Compute Courses Taken.
   //-|----------------------------------------------------------------------
         
        Courses = (Acount + Bcount + Ccount + Dcount + Fcount);
    
   //-|----------------------------------------------------------------------
   //-|  5. Compute QualityPoints = 4 * Acount + ... + 0 * Fcount;
   //-|----------------------------------------------------------------------
     QualityPoints = (4* Acount) + (3 * Bcount) + (2 * Ccount) + (1 * Dcount) + (0 * Fcount);

   //-|----------------------------------------------------------------------
   //-| 6. Multiply QualityPoints by #credit hours per course (3).
   //-|----------------------------------------------------------------------
  
    QualityPoints = QualityPoints * 3;

   //-|----------------------------------------------------------------------
   //-| 7. Compute GPA = QualityPoints / HoursTaken;  
   //-|----------------------------------------------------------------------
    
    GPA = (QualityPoints) / (HoursTaken);
    
   //-|----------------------------------------------------------------------
   //-| 8. Output line containing name and computed GPA.
   //-|----------------------------------------------------------------------
    
    cout << Last << ','<< " " << First<< ':';
    cout << " "<< "#Courses = " <<Courses<<','<< " "<< "Credit Hours = "<< HoursTaken <<','<< " ";
    cout << "GPA = "<< GPA << endl << endl;
    cout << endl << "(c) 2017, twilson Tishauna Wilson" << endl << endl; 
    
    return 0;  
    
}