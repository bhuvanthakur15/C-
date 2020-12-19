//cpp project for Student Report Card Management System

#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<ctype.h>
using namespace std;
 
struct student																			// structure for student details
{
 int rollno; 
 char name[50];
 int e_marks,h_marks,m_marks,s_marks,cs_marks;
 float per;
 char grade;
 char cls;
}st;

fstream fp;	
void write_student()																	// Adding new students
   {
   	system("cls");
   	cout<<"\nEnter the class for which the student is to be added (1 to 5)= ";
    cin>>st.cls;																		//inputting students class
    if(isdigit(st.cls))
    {
	
	if (st.cls=='1')																	//adding details of new student of class 1
	{
		fp.open("students1.txt",ios::out|ios::app);										//open class 1 file
		cout<<"\nPlease Enter The New Details of student \n";
    cout<<"\nEnter The roll number of student: ";
    cin>>st.rollno;
    fflush(stdin);
   cout<<"\n\nEnter The Name of student :";
    gets(st.name);
eng1: cout<<"\nEnter The marks in English out of 100 : ";
    cin>>st.e_marks;
    
	if( st.e_marks>100 ) {																//check if marks exceed 100
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng1;}

	
hin1: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin1;}
mths1: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {															//check if marks exceed 100
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths1;}
sci1: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci1;}
CSc1: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc1;}
    st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;							//%age
    if(st.per>=60)
       st.grade='A';																				//grade calculation
    else if(st.per>=50 &&st.per<60)
      st.grade='B'; 
    else if(st.per>=33 &&st.per<50)
      st.grade='C';
    else
     st.grade='F';

  fp.write((char*)&st,sizeof(student));																//writing record to file
    fp.close();																						//close file

    cout<<"\n\n*****Student Record Has Been Created***** ";
    getch();
	}
	else if (st.cls=='2')																		//new student for class 2nd
	{

	fp.open("students2.txt",ios::out|ios::app);
	
		cout<<"\nPlease Enter The New Details of student \n";
    cout<<"\nEnter The roll number of student ";
    cin>>st.rollno;
    fflush(stdin);
    cout<<"\n\nEnter The Name of student ";
    gets(st.name);
eng2: cout<<"\nEnter The marks in English out of 100 : ";											//getting marks 
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng2;}
hin2: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin2;}
mths2: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths2;}
sci2: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {													//check if marks exceed 100 for all subjects
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci2;}
CSc2: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc2;}
    st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
    if(st.per>=60)
       st.grade='A';																		//calculate grade
    else if(st.per>=50 &&st.per<60)
      st.grade='B';
    else if(st.per>=33 &&st.per<50)
      st.grade='C';
    else
     st.grade='F';

  fp.write((char*)&st,sizeof(student));														//write record to file
    fp.close();

    cout<<"\n\n*****Student Record Has Been Created*****";
    getch();
	}
	else if (st.cls=='3')																	//new student for class 3rd 
	{
			
		fp.open("students3.txt",ios::out|ios::app);												//open file
		
		cout<<"\nPlease Enter The New Details of student \n";								//input marks & check if they exceed 100
    cout<<"\nEnter The roll number of student ";
    cin>>st.rollno;
    fflush(stdin);
    cout<<"\n\nEnter The Name of student ";
    gets(st.name);
  eng3: cout<<"\nEnter The marks in English out of 100 : ";
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng3;}
hin3: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin3;}
mths3: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths3;}
sci3: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci3;}
CSc3: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc3;}
    st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;					
    if(st.per>=60)
       st.grade='A';																			//grade a/c to %age
    else if(st.per>=50 &&st.per<60)
      st.grade='B';
    else if(st.per>=33 &&st.per<50)
      st.grade='C';
    else
     st.grade='F';

  fp.write((char*)&st,sizeof(student));
    fp.close();																					//close file
    
    cout<<"\n\n*****Student Record Has Been Created*****";
    getch();
	}
	else if (st.cls=='4')
	{																			//class 4th student
		
		fp.open("students4.txt",ios::out|ios::app);
		
		cout<<"\nPlease Enter The New Details of student \n";
    cout<<"\nEnter The roll number of student ";
    cin>>st.rollno;
    fflush(stdin);
    cout<<"\n\nEnter The Name of student ";
    gets(st.name);
eng4: cout<<"\nEnter The marks in English out of 100 : ";
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng4;}
hin4: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin4;}
mths4: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths4;}
sci4: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci4;}
CSc4: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc4;}
    st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;						//per
    if(st.per>=60)
       st.grade='A';																			//grade
    else if(st.per>=50 &&st.per<60)
      st.grade='B';
    else if(st.per>=33 &&st.per<50)
      st.grade='C';
    else
     st.grade='F';

  fp.write((char*)&st,sizeof(student));
    fp.close();
    
    cout<<"\n\n*****Student Record Has Been Created*****";
    getch();
	}
	else if (st.cls=='5')																		//new class 5th student
	{
				
		fp.open("students5.txt",ios::out|ios::app);												//open file
		
		cout<<"\nPlease Enter The New Details of student \n";
    cout<<"\nEnter The roll number of student ";
    cin>>st.rollno;
    fflush(stdin);
    cout<<"\n\nEnter The Name of student ";
    gets(st.name);
eng5: cout<<"\nEnter The marks in English out of 100 : ";										//marks
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng5;}
hin5: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin5;}
mths5: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths5;}
sci5: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci5;}
CSc5: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc5;}
    st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;					//%age
    if(st.per>=60)
       st.grade='A';																		//grades
    else if(st.per>=50 &&st.per<60)
      st.grade='B';
    else if(st.per>=33 &&st.per<50)
      st.grade='C';
    else
     st.grade='F';

  fp.write((char*)&st,sizeof(student));														//write to file
    fp.close();

    cout<<"\n\n*****Student Record Has Been Created*****";
    getch();
	}
	else
	{
	cout<<"Enter correct class i.e. between 1st to 5th.";									//if class is other than 1-5
	}
}
else cout<<"Wrong Input! Please enter a valid number.";										//if class in not a number

}



void display_all()																	//to display all student records class-wise
{
    system("cls");
    cout<<"\n\n\n\t\t\t\tDISPLAYING ALL RECORDS !!!\n\n";
          
	fp.open("students1.txt",ios::in);												//open class 1st file
    
	cout<<" CLASS 1ST RECORDS= \n";
	 
     while(fp.read((char*)&st,sizeof(student)))										//class 1st records
    {
      cout<<"\nRoll Number of Student : "<<st.rollno;
      cout<<"\nName of student : "<<st.name;
      cout<<"\nMarks in English : "<<st.e_marks;
      cout<<"\nMarks in Hindi : "<<st.h_marks;
      cout<<"\nMarks in Maths : "<<st.m_marks;
      cout<<"\nMarks in Science : "<<st.s_marks;
      cout<<"\nMarks in Computer Science : "<<st.cs_marks;
      cout<<"\nPercentage of student is  : "<<st.per;
      cout<<"\nGrade of student is : "<<st.grade;
      cout<<"\n\n====================================\n";
    }
    fp.close() ;																	//close class 1st file
    
        
    fp.open("students2.txt",ios::in);												//class 2nd records
    
	cout<<" CLASS 2ND RECORDS= ";  
 
    while(fp.read((char*)&st,sizeof(student)))
    {
    cout<<"\nRoll Number of Student : "<<st.rollno;
      cout<<"\nName of student : "<<st.name;
      cout<<"\nMarks in English : "<<st.e_marks;
      cout<<"\nMarks in Hindi : "<<st.h_marks;
      cout<<"\nMarks in Maths : "<<st.m_marks;
      cout<<"\nMarks in Science : "<<st.s_marks;
      cout<<"\nMarks in Computer Science : "<<st.cs_marks;
      cout<<"\nPercentage of student is  : "<<st.per;
      cout<<"\nGrade of student is : "<<st.grade;
      cout<<"\n\n====================================\n";
    
    }
    fp.close() ;
        
    fp.open("students3.txt",ios::in);												//class 3rd records
    
	 cout<<" CLASS 3RD RECORDS= ";   
    
    while(fp.read((char*)&st,sizeof(student)))
    {
      cout<<"\nRoll Number of Student : "<<st.rollno;
      cout<<"\nName of student : "<<st.name;
      cout<<"\nMarks in English : "<<st.e_marks;
      cout<<"\nMarks in Hindi : "<<st.h_marks;
      cout<<"\nMarks in Maths : "<<st.m_marks;
      cout<<"\nMarks in Science : "<<st.s_marks;
      cout<<"\nMarks in Computer Science : "<<st.cs_marks;
      cout<<"\nPercentage of student is  : "<<st.per;
      cout<<"\nGrade of student is : "<<st.grade;
      cout<<"\n\n====================================\n";
    }
   
    fp.close() ;
  
   fp.open("students4.txt",ios::in);												//class 4th records
   
	 cout<<" CLASS 4TH RECORDS= ";   
  
   while(fp.read((char*)&st,sizeof(student)))
    {
    cout<<"\nRoll Number of Student : "<<st.rollno;
      cout<<"\nName of student : "<<st.name;
      cout<<"\nMarks in English : "<<st.e_marks;
      cout<<"\nMarks in Hindi : "<<st.h_marks;
      cout<<"\nMarks in Maths : "<<st.m_marks;
      cout<<"\nMarks in Science : "<<st.s_marks;
      cout<<"\nMarks in Computer Science : "<<st.cs_marks;
      cout<<"\nPercentage of student is  : "<<st.per;
      cout<<"\nGrade of student is : "<<st.grade;
      cout<<"\n\n====================================\n";
      
    }
    
    fp.close() ;
    
    fp.open("students5.txt",ios::in);													//open class 5th file
    
	 cout<<" CLASS 5TH RECORDS= ";  
    
    while(fp.read((char*)&st,sizeof(student)))											//display class 5th records
    {
     cout<<"\nRoll Number of Student : "<<st.rollno;
      cout<<"\nName of student : "<<st.name;
      cout<<"\nMarks in English : "<<st.e_marks;
      cout<<"\nMarks in Hindi : "<<st.h_marks;
      cout<<"\nMarks in Maths : "<<st.m_marks;
      cout<<"\nMarks in Science : "<<st.s_marks;
      cout<<"\nMarks in Computer Science : "<<st.cs_marks;
      cout<<"\nPercentage of student is  : "<<st.per;
      cout<<"\nGrade of student is : "<<st.grade;
      cout<<"\n\n====================================\n";
    
    }
    
      fp.close() ;																		//close class 5th file
    getch();
}



void display_sp()																//searches and displays report card of a student
{
    int flag=0,rno;
    int cls;
    system("cls");
    cout<<" \nEnter the class for which the student is to be displayed= ";
    cin>>cls;																				//input student's class
    cout<<" Enter the roll no. of the student= ";
    cin>>rno;																				//input rollNo

    switch(cls)
    {
	
	case 1:
    
    {
    	    	
    	fp.open("students1.txt",ios::in);													//open if class 1st
    	
     while(fp.read((char*)&st,sizeof(student)))
    {
     if(st.rollno==rno  )
        {
         
            cout<<"\n\t\t\t\t\tRoll No. : "<<st.rollno;
            cout<<"\t\t\tName : "<<st.name;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\tEnglish : "<<st.e_marks;
            cout<<"\tHindi : "<<st.h_marks;
            cout<<"\tMaths : "<<st.m_marks;
            cout<<"\tScience : "<<st.s_marks;
            cout<<"\tComputer Science : "<<st.cs_marks;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\t\t\t\tPercentage : "<<st.per;
            cout<<"\t\tGrade : "<<st.grade;
         flag=1;
        }
	else if(flag==0)
	 {
	 cout<<"\n\nRecord does not exist";break;
 	 }
 	 
    }
    char ans;
        cout<<"\n\nDo you want to See More Result (y/n)?";								//conti. displaying report card
        ans=getche();
        if (ans=='y'||ans=='Y')
        {
        display_sp();	
		}
		else
		{
		break;
		}
  
    fp.close();																		//close class1st file
    getch();
	}

	case 2:
    {
    
    fp.open("students2.txt",ios::in);												//class 2nd
    
    while(fp.read((char*)&st,sizeof(student)))
    {
     if(st.rollno==rno)
        {
         	cout<<"\n\t\t\t\t\tRoll No. : "<<st.rollno;
            cout<<"\t\t\tName : "<<st.name;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\tEnglish : "<<st.e_marks;
            cout<<"\tHindi : "<<st.h_marks;
            cout<<"\tMaths : "<<st.m_marks;
            cout<<"\tScience : "<<st.s_marks;
            cout<<"\tComputer Science : "<<st.cs_marks;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\t\t\t\tPercentage : "<<st.per;
            cout<<"\t\tGrade : "<<st.grade;
         flag=1;
        }
	else
	 {
	 cout<<"\n\nRecord does not exist";
 	 }
    }
    char ans;
        cout<<"\n\nDo you want to See More Result (y/n)?";								//conti. displaying records
        ans=getche();
        if (ans=='y'||ans=='Y')
        {
        display_sp();	
		}
		else
		{
		break;
		}
    
    fp.close();																			//close class 2nd file
    getch();
    }
  
	case 3:
 	   {
 	   	  
 	  fp.open("students3.txt",ios::in);												//class 3rd 
 	
  	   while(fp.read((char*)&st,sizeof(student)))									//read records from class 3 file 
    	{ 
     if(st.rollno==rno)
        {
         
            cout<<"\n\t\t\t\t\tRoll No. : "<<st.rollno;
            cout<<"\t\t\tName : "<<st.name;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\tEnglish : "<<st.e_marks;
            cout<<"\tHindi : "<<st.h_marks;
            cout<<"\tMaths : "<<st.m_marks;
            cout<<"\tScience : "<<st.s_marks;
            cout<<"\tComputer Science : "<<st.cs_marks;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\t\t\t\tPercentage : "<<st.per;
            cout<<"\t\tGrade : "<<st.grade;
         flag=1;
        }
     else
	 {
	 cout<<"\n\nRecord does not exist";															//if record not found
 	 }
    }
    char ans;
        cout<<"\n\nDo you want to See More Result (y/n)?";
        ans=getche();
        if (ans=='y'||ans=='Y')
        {
        display_sp();	
		}
		else
		{
		break;
		}
    
    fp.close();																			//close file
    getch();
	}
   


case 4:
    {
        
    fp.open("students4.txt",ios::in);													//for class 4th 
    
    while(fp.read((char*)&st,sizeof(student)))											//find record
    {
     if(st.rollno==rno)
        {
         
           cout<<"\n\t\t\t\t\tRoll No. : "<<st.rollno;
            cout<<"\t\t\tName : "<<st.name;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\tEnglish : "<<st.e_marks;
            cout<<"\tHindi : "<<st.h_marks;
            cout<<"\tMaths : "<<st.m_marks;
            cout<<"\tScience : "<<st.s_marks;
            cout<<"\tComputer Science : "<<st.cs_marks;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\t\t\t\tPercentage : "<<st.per;
            cout<<"\t\tGrade : "<<st.grade;
         flag=1;
        }
     else
	 {
	 cout<<"\n\nRecord does not exist";
 	 }
    }
    char ans;
        cout<<"\n\nDo you want to See More Result (y/n)?";								//continue displaying results
        ans=getche();
        if (ans=='y'||ans=='Y')
        {
        display_sp();	
		}
		else
		{
		 break;
		}
    
    fp.close();																		//close file
    getch();
}


case 5:
    {
      
   fp.open("students5.txt",ios::in);												//class 5th 
   
    while(fp.read((char*)&st,sizeof(student)))
    {
     if(st.rollno==rno)
        {
         cout<<"\n\t\t\t\t\tRoll No. : "<<st.rollno;
            cout<<"\t\t\tName : "<<st.name;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\tEnglish : "<<st.e_marks;
            cout<<"\tHindi : "<<st.h_marks;
            cout<<"\tMaths : "<<st.m_marks;
            cout<<"\tScience : "<<st.s_marks;
            cout<<"\tComputer Science : "<<st.cs_marks;
            cout<<"\n\t------------------------------------------------------------------------------------------------------------";
            cout<<"\n\t\t\t\t\tPercentage : "<<st.per;
            cout<<"\t\tGrade : "<<st.grade;
         flag=1;
        }
     else
	 {
	 cout<<"\n\nRecord does not exist";
 	 }
    }
    char ans;
        cout<<"\n\nDo you want to See More Result (y/n)?";							//conti. displaying results
        ans=getche();
        if (ans=='y'||ans=='Y')
        {
        display_sp();	
		}
		else
		{
		break;
		}
    fp.close();
    
default:
	{
	cout<<"Enter correct class i.e. between 1st to 5th.";
	break;
	}
    getch();
}
}
}



void modify_student()																	//to modify a students record
{
    int no,found=0;
    char cls;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"Enter the class for which the student record is to be modified= ";
    cin>>cls;																			// input class to modify
    cout<<"\n\n\tPlease Enter The roll number of student";
    cin>>no;																			//studnts rollNo
    if (cls=='1')																		//if of class 1st 
    {
    	
    	fp.open("students1.txt",ios::in|ios::out);
    
    while(fp.read((char*)&st,sizeof(student)) && found==0)							//display old details first
    {
    if(st.rollno==no)
           {
             cout<<"\nRoll number of student : "<<st.rollno;
            cout<<"\nName of student : "<<st.name;
            cout<<"\nMarks in English : "<<st.e_marks;
            cout<<"\nMarks in Hindi : "<<st.h_marks;
            cout<<"\nMarks in Maths : "<<st.m_marks;
            cout<<"\nMarks in Science : "<<st.s_marks;
            cout<<"\nMarks in Computer Science : "<<st.cs_marks;
            cout<<"\nPercentage of student is  : "<<st.per;
            cout<<"\nGrade of student is : "<<st.grade;
            cout<<"\n**PLEASE ENTER THE NEW DETAILS OF THE STUDENT** \n";			//input new details
            cout<<"\nEnter The roll number of student ";
            cin>>st.rollno;
            fflush(stdin);
eng11: cout<<"\nEnter The marks in English out of 100 : ";							//new marks
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng11;}
hin11: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin11;}
mths11: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths11;}
sci11: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci11;}
CSc11: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc11;}
            
            st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
            
			if(st.per>=60)																		//new grade
               st.grade='A';
            else if(st.per>=50 && st.per<60)
               st.grade='B';
            else if(st.per>=33 && st.per<50)
               st.grade='C';
            else
               st.grade='F';
            


			int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));											//update record

            cout<<"\n\n\t Record Updated";
            found=1;
           }
         }

    fp.close();																				//close file
    
    
    if(found==0)
    cout<<"\n\n Record Not Found ";
	}
    
	else if (cls=='2')																		//for 2nd class
    {
    
    fp.open("students2.txt",ios::in|ios::out);
    
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
    if(st.rollno==no)
           {
            cout<<"\nRoll number of student : "<<st.rollno;									//old details
            cout<<"\nName of student : "<<st.name;
            cout<<"\nMarks in English : "<<st.e_marks;
            cout<<"\nMarks in Hindi : "<<st.h_marks;
            cout<<"\nMarks in Maths : "<<st.m_marks;
            cout<<"\nMarks in Science : "<<st.s_marks;
            cout<<"\nMarks in Computer Science : "<<st.cs_marks;
            cout<<"\nPercentage of student is  : "<<st.per;
            cout<<"\nGrade of student is : "<<st.grade;
            cout<<"\n**PLEASE ENTER THE NEW DETAILS OF THE STUDENT** \n";
            cout<<"\nEnter The roll number of student ";									//new details
            cin>>st.rollno;
            fflush(stdin);
            eng22: cout<<"\nEnter The marks in English out of 100 : ";
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng22;}
hin22: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin22;}
mths22: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths22;}
sci22: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci22;}
CSc22: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc22;}
            
            st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
            
			if(st.per>=60)
               st.grade='A';
            else if(st.per>=50 && st.per<60)
               st.grade='B';
            else if(st.per>=33 && st.per<50)
               st.grade='C';
            else
               st.grade='F';
            
			int pos=-1*sizeof(st);														//write new details to file
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));
            
            cout<<"\n\n\t Record Updated";
            found=1;
           }
         }

    fp.close();
    
    if(found==0)
    cout<<"\n\n Record Not Found ";
	}
    
     else if (cls=='3')
    {																				//class 3rd 
    	
    	fp.open("students3.txt",ios::in|ios::out);
    
   while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
    if(st.rollno==no)
           {
            cout<<"\nRoll number of student : "<<st.rollno;							//old details
            cout<<"\nName of student : "<<st.name;
            cout<<"\nMarks in English : "<<st.e_marks;
            cout<<"\nMarks in Hindi : "<<st.h_marks;
            cout<<"\nMarks in Maths : "<<st.m_marks;
            cout<<"\nMarks in Science : "<<st.s_marks;
            cout<<"\nMarks in Computer Science : "<<st.cs_marks;
            cout<<"\nPercentage of student is  : "<<st.per;
            cout<<"\nGrade of student is : "<<st.grade;
            cout<<"\n**PLEASE ENTER THE NEW DETAILS OF THE STUDENT** \n";
            cout<<"\nEnter The roll number of student ";
            cin>>st.rollno;
            fflush(stdin);
        eng33: cout<<"\nEnter The marks in English out of 100 : ";							//new details
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng33;}
hin33: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin33;}
mths33: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths33;}
sci33: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci33;}
CSc33: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc33;}
            
            st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
            
			if(st.per>=60)
               st.grade='A';
            else if(st.per>=50 && st.per<60)
               st.grade='B';
            else if(st.per>=33 && st.per<50)
               st.grade='C';
            else
               st.grade='F';
            
			int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));

            cout<<"\n\n\t Record Updated";
            found=1;
           }
         }
    fp.close();
    
    if(found==0)
    cout<<"\n\n Record Not Found ";												//record to modify not found
	}
    
    else if (cls=='4')
    {
    	    	
    	fp.open("students4.txt",ios::in|ios::out);										//open class 4 file
    	
   while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
    if(st.rollno==no)
           {
            cout<<"\nRoll number of student : "<<st.rollno;								//old details
            cout<<"\nName of student : "<<st.name;
            cout<<"\nMarks in English : "<<st.e_marks;
            cout<<"\nMarks in Hindi : "<<st.h_marks;
            cout<<"\nMarks in Maths : "<<st.m_marks;
            cout<<"\nMarks in Science : "<<st.s_marks;
            cout<<"\nMarks in Computer Science : "<<st.cs_marks;
            cout<<"\nPercentage of student is  : "<<st.per;
            cout<<"\nGrade of student is : "<<st.grade;
            cout<<"\n**PLEASE ENTER THE NEW DETAILS OF THE STUDENT** \n";
            cout<<"\nEnter The roll number of student ";
            cin>>st.rollno;
            fflush(stdin);
            eng44: cout<<"\nEnter The marks in English out of 100 : ";							//new details
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng44;}
hin44: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin44;}
mths44: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths44;}
sci44: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci44;}
CSc44: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc44;}
            
            st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
            
			if(st.per>=60)
               st.grade='A';
            else if(st.per>=50 && st.per<60)
               st.grade='B';
            else if(st.per>=33 && st.per<50)
               st.grade='C';
            else
               st.grade='F';

			int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));												//write new details to file

            cout<<"\n\n\t Record Updated";
            found=1;
           }
         }

    fp.close();
    
    if(found==0)
    cout<<"\n\n Record Not Found ";
	}
    
     else if (cls=='5')
    {																						//for class 5th 
    
    	fp.open("students5.txt",ios::in|ios::out);
    
    while(fp.read((char*)&st,sizeof(student)) && found==0)										//display old details
    {
    if(st.rollno==no)
           {
          cout<<"\nRoll number of student : "<<st.rollno;
            cout<<"\nName of student : "<<st.name;
            cout<<"\nMarks in English : "<<st.e_marks;
            cout<<"\nMarks in Hindi : "<<st.h_marks;
            cout<<"\nMarks in Maths : "<<st.m_marks;
            cout<<"\nMarks in Science : "<<st.s_marks;
            cout<<"\nMarks in Computer Science : "<<st.cs_marks;
            cout<<"\nPercentage of student is  : "<<st.per;
            cout<<"\nGrade of student is : "<<st.grade;
            cout<<"\n**PLEASE ENTER THE NEW DETAILS OF THE STUDENT** \n";						//Input new details
            cout<<"\nEnter The roll number of student ";
            cin>>st.rollno;
            fflush(stdin);
            eng55: cout<<"\nEnter The marks in English out of 100 : ";
    cin>>st.e_marks; if(st.e_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto eng55;}
hin55: cout<<"\nEnter The marks in Hindi out of 100 : ";
    cin>>st.h_marks;if(st.h_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto hin55;}
mths55: cout<<"\nEnter The marks in Maths out of 100 : ";
	cin>>st.m_marks;if(st.m_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto mths55;}
sci55: cout<<"\nEnter The marks in Science out of 100 : ";
    cin>>st.s_marks;if(st.s_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto sci55;}
CSc55: cout<<"\nEnter The marks in Computer Science out of 100 : ";
    cin>>st.cs_marks;if(st.cs_marks>100) {
	cout<<"\n****Enter valid marks (less than or equal to 100)****";
	goto CSc55;}
            
            st.per=(st.e_marks+st.h_marks+st.m_marks+st.s_marks+st.cs_marks)/5.0;
            
			if(st.per>=60)																				//grade
               st.grade='A';
            else if(st.per>=50 && st.per<60)
               st.grade='B';
            else if(st.per>=33 && st.per<50)
               st.grade='C';
            else
               st.grade='F';
            
            int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));
            
            cout<<"\n\n\t Record Updated";
            found=1;
           }
         }
    fp.close();																				//close file
    
    if(found==0)
    cout<<"\n\n Record Not Found ";
	}
}
	




void delete_student()																	//to delete a student record
   {
    int no;
    FILE *fptr2;
 char cls;
 system("cls");
    cout<<"\n\n\n\tDelete Record";
    cout<<" \n Enter the class from which the record is to be deleted= ";
    cin>>cls;																		// input class from which to delete
    cout<<"\n\nPlease Enter The roll number of student You Want To Delete";
    cin>>no;																		//students roll no to be deleted
    if (cls=='1')																	//class 1st 
    {
	
    fp.open("students1.txt",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.txt",ios::out);													//temp file for storing non deleting rec. 
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.rollno!=no)
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();																		//close file
    remove("students1.txt");														//remove old file
    rename("Temp.txt","students1.txt");												//rename temp to original file name
    cout<<"\n\n\tRecord Deleted ..";
    getch();
    
    }
    
    if (cls=='2')																//class 2nd 
    {
int flag=0;
    fp.open("students2.txt",ios::in|ios::out);									//open class file
    fstream fp2;
    fp2.open("Temp.txt",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.rollno!=no)														//copy all records except the one to delete to temp
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("students2.txt");
    rename("Temp.txt","students2.txt");											//rename temp as original file
    cout<<"\n\n\tRecord Deleted ..";
    flag=1;
    }
    
    if (cls=='3')																//class 3rd 
    {

    
    fp.open("students3.txt",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.txt",ios::out);												//open temp file
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.rollno!=no)														//copy all rec. except the one to delete
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("students3.txt");
    rename("Temp.txt","students3.txt");											//rename temp as original file
    cout<<"\n\n\tRecord Deleted ..";
    
    }
    
    
    if (cls=='4')																			//class 4th 
    {

    fp.open("students4.txt",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.txt",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.rollno!=no)																//write all rec except the one to delete
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("students4.txt");															//remove old file
    rename("Temp.txt","students4.txt");													//rename temp as original file
    cout<<"\n\n\tRecord Deleted ..";
    
    }
    
    if (cls=='5')																//for class 5th 
    {

    fp.open("students5.txt",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.txt",ios::out);												//open temp file
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.rollno!=no)														//write all except the one to delete to temp
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("students5.txt");
    rename("Temp.txt","students5.txt");											//rename temp to original file
    cout<<"\n\n\tRecord Deleted ..";
    
    }
}

//====================================================== ==========================================//

    void class_result()																//to display class-wise results
    {
    	int cla;
    	system("cls");
    	system("color 70");
        cout<<" Enter class for which the result is to be displayed= ";
        cin>>cla;																					//input class to display
    cout<<"\n\n\t\tALL CLASS "<<cla<<" STUDENTS RESULT \n\n";
      cout<<"==================================================================\n";
      cout<<"R.No.    Name     E\t H\t M\t Sc\t CSc\t Per\tGrade\n";
      cout<<"==================================================================\n";
      switch(cla)
{
	  
     case 1:																						//for class 1st 
	   {
	    
fp.open("students1.txt",ios::in);

       while(fp.read((char*)&st,sizeof(student)))												//display all rec.
     {
       cout<<st.rollno<<"\t"<<st.name<<"\t"<<st.e_marks<<"\t"<<st.h_marks<<"\t"<<st.m_marks<<"\t"<<st.s_marks<<"\t"<<st.cs_marks<<"\t"<<st.per<<"\t"<<st.grade;
       cout<<"\n";
     }
     fp.close();																				//close file
     break;
 		}
 
 case 2:																						//class 2nd 
	   {
		 
        fp.open("students2.txt",ios::in);
    
      while(fp.read((char*)&st,sizeof(student)))
     {
       cout<<st.rollno<<"\t"<<st.name<<"\t"<<st.e_marks<<"\t"<<st.h_marks<<"\t"<<st.m_marks<<"\t"<<st.s_marks<<"\t"<<st.cs_marks<<"\t"<<st.per<<"\t"<<st.grade;
       cout<<"\n";
     }
    
     fp.close();																	//close file
     break;
 }
 
case 3:																				//class 3rd	
	   {
	    
     fp.open("students3.txt",ios::in);
    
        while(fp.read((char*)&st,sizeof(student)))
     {
       cout<<st.rollno<<"\t"<<st.name<<"\t"<<st.e_marks<<"\t"<<st.h_marks<<"\t"<<st.m_marks<<"\t"<<st.s_marks<<"\t"<<st.cs_marks<<"\t"<<st.per<<"\t"<<st.grade;
       cout<<"\n";
     }
    fp.close();
     break;
 }

case 4:																				//class 4th
	   {
		 
          fp.open("students4.txt",ios::in);
          
      while(fp.read((char*)&st,sizeof(student)))
     {
       cout<<st.rollno<<"\t"<<st.name<<"\t"<<st.e_marks<<"\t"<<st.h_marks<<"\t"<<st.m_marks<<"\t"<<st.s_marks<<"\t"<<st.cs_marks<<"\t"<<st.per<<"\t"<<st.grade;
       cout<<"\n";
     }
    
    fp.close();
     break;
 	}
 
  case 5:																			//class 5th
	   {
		 
          fp.open("students5.txt",ios::in);
          
      while(fp.read((char*)&st,sizeof(student)))
     {
       cout<<st.rollno<<"\t"<<st.name<<"\t"<<st.e_marks<<"\t"<<st.h_marks<<"\t"<<st.m_marks<<"\t"<<st.s_marks<<"\t"<<st.cs_marks<<"\t"<<st.per<<"\t"<<st.grade;
       cout<<"\n";
     }
     
     fp.close();
     break;
       }
     
   default: 
    {
	
       cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Entry Menu to create File";				//if file does not open
       cout<<"\n\n\n Program is closing ....";
       getch();
       exit(0);
       break;
	}
     getch();
}
}

//=============================================================================================================================================
   void result()
   {																							//result related menu options
    int ans,rno;
    char ch;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t\t\tRESULT MENU";
    cout<<"\n\n\n\t\t1. Class Result\t\t\t2. Student Report Card\t\t\t3.Back to Main Menu";
    cout<<"\n\n\nEnter Choice (1/2)? ";
    cin>>ans;
    switch(ans)
    {
     case 1 : class_result();																	//call ftn class_result
	 		break;
     case 2 :
	  {
        display_sp();
      }
     default:  cout<<"\a";
    }
 }


void intro()																			//intro page of the program
{
 system("cls");
 system("color E0");
 cout<<"\n\n\n\n\n\n\n\n";
 cout<<"\n\n\t\t\t\t\t\t  **WELCOME**\n\n";
 cout<<"\t\t\t\t\t STUDENT REPORT CARD MANAGEMENT";
 cout<<"\n\t\t\t\t\t================================";
 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t SUBMITTED BY:\n";
 cout<<"\t\t\t\t\t\t\t\t\t\t\t Bhuvan Thakur\n";
 cout<<"\t\t\t\t\t\t\t\t\t\t\t MCA 2nd Sem.(Morning)\n";
 cout<<"\t\t\t\t\t\t\t\t\t\t\t Panjab University, Chandigarh\n";
 getch();
 system("cls");
 cout<<"\n\t\t\t\t\t***MAIN UTILITIES OF THE PROJECT***\n\n ";
 cout<<" MAIN MENU:-";
 cout<<"\t\n\n 1. Result Menu\n\t i. Class wise Result\n\t ii. Student Report Card";
 cout<<"\t\n\n 2. Entry/Edit Menu\n\t i. Create Student Record\n\t ii. Display all students Record";
 cout<<"\n\t iii. Search Student Record\n\t iv. Modify Student Record\n\t v. Delete Student Record";
 cout<<"\n\n\n\n\n\n\n\n\n\n Press any key to begin...";													//any key to continue
 getch();
 system("cls");
}

void entry_menu()																		//entry menu
{
    char ch2;
   system("cls");
  cout<<"\n\n\n\t\t\t\t\t\t\tENTRY MENU:";
  cout<<"\n\n\t1.CREATE STUDENT RECORD";
  cout<<"\t\t\t2.DISPLAY ALL STUDENTS RECORDS";
  cout<<"\t\t3.SEARCH STUDENT RECORD ";
  cout<<"\n\n\t4.MODIFY STUDENT RECORD";
  cout<<"\t\t\t5.DELETE STUDENT RECORD";
  cout<<"\t\t\t6.BACK TO MAIN MENU";
  cout<<"\n\n\tPlease Enter Your Choice (1-6): ";
  ch2=getche();
  switch(ch2)
   {
      case '1': getch();write_student();break;								//call to ftn for adding new student
      case '2': getch();display_all();break;								//call to ftn for displaying all student records
      case '3': getch();display_sp();break;									//call to ftn for displaying student report card
      case '4': getch();modify_student();break;								//call to ftn for modifying student records
      case '5': getch();delete_student();break;								//call to ftn for deleting student record
      case '6': break;
      default:
	  {
	  	cout<<"\n\n\t\t\t**Enter correct option**";
	  	getch();
	    entry_menu();}
   }
}
int main()
{
  char ch;
  intro();
  do																//main menu options
    {
    	system("color 70");
      cout<<"\n\n\n\t\t\t\t\t\t MAIN MENU";
      cout<<"\n\t\t\t\t\t\t===========\n";
      cout<<"\n\t01. RESULT MENU";
      cout<<"\t\t\t02. ENTRY/EDIT MENU";
      cout<<"\t\t\t03. EXIT";
      cout<<"\n\n\tPlease Select Your Option (1-3) ";							//select an option
      ch=getche();
      switch(ch)
      {
         case '1': 
               result();
               break;
          case '2': entry_menu();
                break;
          case '3':exit(0);
          default :
		  cout<<"\n\t**Enter correct option**";
		  cout<<"\a";
  	  }
    }while(ch!='3');
   system("cls");
}
