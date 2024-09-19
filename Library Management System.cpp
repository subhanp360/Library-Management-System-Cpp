#include<iostream>
using namespace std;
int main(){
//Book Arrays
int IBAN[5],OAmount[5],Amount[5],Edition[5],Price[5];
char book1[20],book2[20],book3[20],book4[20],book5[20],Publisher1[20],Publisher2[20],Publisher3[20],Publisher4[20],Publisher5[20];
//Student Arrays
int Student_RollNo[5],Age[5];
char student_name1[20],student_name2[20],student_name3[20],student_name4[20],student_name5[20];
char Gender[5];
//Simple
int rollno=0,User_input=0,bookIBAN=0,flag=0,j=0,k=0;

cout<<"=========================================================================================================================="<<endl;
cout<<"                                                  WELCOME TO LIBRARY                                                      "<<endl;
cout<<"=========================================================================================================================="<<endl;
cout<<endl;
cout<<"------------------------------------------------------------------"<<endl;
cout<<"                     ENTER ALL BOOK DETAILS                       "<<endl;
cout<<"------------------------------------------------------------------"<<endl;
//Taking inputs of books from user
for(int i=0;i<5;i++){
cout<<endl;
k=k+1;
    cout<<"Enter the IBAN number of book : "<<k<<" = ";
    cin>>IBAN[i];
    cout<<"Enter the book name of book = ";
    if(i==0){
        cin>>book1;
    }
    if(i==1){
        cin>>book2;
    }
    if(i==2){
        cin>>book3;
    }
    if(i==3){
        cin>>book4;
    }
    if(i==4){
        cin>>book5;
    }
    cout<<"Enter the Publisher name of book = ";
    if(i==0){
        cin>>Publisher1;
    }
    if(i==1){
        cin>>Publisher2;
    }
    if(i==2){
        cin>>Publisher3;
    }
    if(i==3){
        cin>>Publisher4;
    }
    if(i==4){
        cin>>Publisher5;
    }
    cout<<"Enter The Amount of book = ";
    cin>>Amount[i];
    OAmount[j++]=Amount[i];
    cout<<"Enter the edition of book = ";
    cin>>Edition[i];
    cout<<"Enter the Price of book = ";
    cin>>Price[i];
}
//Taking inputs of students from user 
cout<<"--------------------------------------------------------------"<<endl;
cout<<"                  ENTER ALL STUDENTS DETAILS                  "<<endl;
cout<<"--------------------------------------------------------------"<<endl;

k=0;
for(int i=0;i<5;i++){
cout<<endl;
k=k+1;
cout<<"Enter the name of student : "<<k<<" = ";
    if(i==0){
    cin>>student_name1;
    }
    if(i==1){
    cin>>student_name2;
    }
    if(i==2){
    cin>>student_name3;
    }
    if(i==3){
    cin>>student_name4;
    }
    if(i==4){
    cin>>student_name5;
    }

cout<<"Enter the roll number of student = ";
cin>>Student_RollNo[i];
cout<<"Enter Age of student = ";
cin>>Age[i];
cout<<"Enter gender (M for Male and F for Female) of student = ";
cin>>Gender[i];
}
//Taking roll no for login in library
cout<<"--------------------------------------------------------------------------------------"<<endl;
cout<<"             Note you can only access library if you registered roll number           "<<endl;
cout<<"--------------------------------------------------------------------------------------"<<endl;
cout<<"Enter Your Roll number : ";
cin>>rollno;
int sign=0;
//Checking if roll number is valid or not 
while(sign==0){
    for(int i=0;i<5;i++){
        if(rollno==Student_RollNo[i]){
            sign=1;
        }
    }
    if(sign==0){
        cout<<"NO DATA FOUND."<<endl;
        cout<<"ENTER ROLL NO (AGAIN) : ";
        cin>>rollno;
    }
}
for(int i=0;i<5;i++){
    if(rollno==Student_RollNo[i]){
    cout<<"YOUR ROLL NUMBER WAS FOUND. YOU CAN ACCESS THE LIBRARY"<<endl;  
    cout<<"================================"<<endl;
    cout<<"       WElCOME TO LIBRARY       "<<endl;
    cout<<"================================"<<endl;
    }
}
//Main program starts from here
while(User_input!=5){
for(int i=0;i<5;i++){
    if(rollno==Student_RollNo[i]){
    flag=1;
cout<<"================================"<<endl;
cout<<"Press 1 : To Issue A Book "<<endl;
cout<<"Press 2 : To Return A Book "<<endl;
cout<<"Press 3 : Display All The Available Books In The Library "<<endl;
cout<<"Press 4 : Display All Students Details "<<endl;
cout<<"Press 5 : To End Program."<<endl;
cout<<"================================"<<endl;

cout<<"Please Enter The Action You Want To Perfrom : ";
cin>>User_input;
    }
}

if(flag==0){
    cout<<"Your roll number was not found in the data."<<endl;
    cout<<"Enter Your Roll number (Again): ";
    cin>>rollno;
}

if(User_input==1 && flag==1){
   int flag1=0,button1=0;
cout<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"          OPTION 1 : TO ISSUE A BOOK           "<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl;

    cout<<"Please Enter The IBAN Number Of The Book You Want To Get : ";
    cin>>bookIBAN;
    for(int i=0;i<5;i++){
        if(IBAN[i]==bookIBAN){
        if(Amount[i]>1){
        Amount[i]=Amount[i]-1;
        button1=1;
        if(i==1){
            cout<<"Book name is : "<<book1<<endl;
            cout<<"Publisher name is : "<<Publisher1<<endl;
        }
        if(i==2){
            cout<<"Book name is : "<<book2<<endl;
            cout<<"Publisher name is : "<<Publisher2<<endl;
        }
        if(i==3){
            cout<<"Book name is : "<<book3<<endl;
            cout<<"Publisher name is : "<<Publisher3<<endl;
        }
        if(i==4){
            cout<<"Book name is : "<<book4<<endl;
            cout<<"Publisher name is : "<<Publisher4<<endl;
        }
        if(i==5){
            cout<<"Book name is : "<<book5<<endl;
            cout<<"Publisher name is : "<<Publisher5<<endl;
        }
        cout<<"The book IBAN number is : "<<IBAN[i]<<endl;
        cout<<"The book Edition is : "<<Edition[i]<<endl;
        cout<<"The book price is : "<<Price[i]<<endl;
        cout<<"The book Amount left in the library is : "<<Amount[i]<<endl;
        }
        if(Amount[i]<=1 && button1==0){
            cout<<"Sorry currently there are no books to give from the library."<<endl;
        }
        flag1=1;
    }
}
    if(flag1==0){
        cout<<"No book with this IBAN number was found."<<endl;
    }
}
if(User_input==2 && flag==1){
int flag2=0,button=0;
cout<<endl;
cout<<"-----------------------------------------------"<<endl;    
cout<<"           OPTION 2 : TO RETURN BOOK           "<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl;
    cout<<"Please Enter The IBAN Number Of The Number You Want To Return : ";
    cin>>bookIBAN;
    for(int i=0;i<5;i++){
        if(IBAN[i]==bookIBAN){
            if(Amount[i]<OAmount[i]){
            Amount[i]=Amount[i]+1;
            cout<<"Thank you for returing the book."<<endl;
            if(i==1){
            cout<<"Book name is : "<<book1<<endl;
            cout<<"Publisher name is : "<<Publisher1<<endl;
            }
            if(i==2){
            cout<<"Book name is : "<<book2<<endl;
            cout<<"Publisher name is : "<<Publisher2<<endl;
            }
            if(i==3){
            cout<<"Book name is : "<<book3<<endl;
            cout<<"Publisher name is : "<<Publisher3<<endl;
            }
            if(i==4){
            cout<<"Book name is : "<<book4<<endl;
            cout<<"Publisher name is : "<<Publisher4<<endl;
            }
            if(i==5){
            cout<<"Book name is : "<<book5<<endl;
            cout<<"Publisher name is : "<<Publisher5<<endl;
            }
            cout<<"The book IBAN number is : "<<IBAN[i]<<endl;
            cout<<"The book Edition is : "<<Edition[i]<<endl;
            cout<<"The book price is : "<<Price[i]<<endl;
            cout<<"The book Amount the library is : "<<Amount[i]<<endl;
            button=1;
            }
            if(Amount[i]==OAmount[i] && button==0){
            cout<<"Sorry !!! We Have All The Copies Of Book Available."<<endl;
            }
            flag2=1;
        }
    }
    if(flag2==0){
        cout<<"Sorry no book with this IBAN number is registred."<<endl;
    }

}
if(User_input==3 && flag==1){
cout<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"              DETAILS OF ALL BOOKS             "<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl;
for(int i=0;i<5;i++){
    cout<<endl;
    if(IBAN[i]==IBAN[0]){
        cout<<"Book name is : "<<book1<<endl;
        cout<<"Publisher name is : "<<Publisher1<<endl;
    }
    if(IBAN[i]==IBAN[1]){
        cout<<"Book name is : "<<book2<<endl;
        cout<<"Publisher name is : "<<Publisher2<<endl;
    }
    if(IBAN[i]==IBAN[2]){
        cout<<"Book name is : "<<book3<<endl;
        cout<<"Publisher name is : "<<Publisher3<<endl;
    }
    if(IBAN[i]==IBAN[3]){
        cout<<"Book name is : "<<book4<<endl;
        cout<<"Publisher name is : "<<Publisher4<<endl;
    }
    if(IBAN[i]==IBAN[4]){
        cout<<"Book name is : "<<book5<<endl;
        cout<<"Publisher name is : "<<Publisher5<<endl;
    }
    cout<<"The book IBAN number is : "<<IBAN[i]<<endl;
    cout<<"The book Edition is : "<<Edition[i]<<endl;
    cout<<"The book price is : "<<Price[i]<<endl;
    cout<<"The book Amount the library is : "<<Amount[i]<<endl;    
    }
}
if(User_input==4 && flag==1){
cout<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"         DETAILS OF ALL STUDENTS               "<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl;
for(int i=0;i<5;i++){
    cout<<endl;
    if(Student_RollNo[i]==Student_RollNo[0]){
    cout<<"Student name is : "<<student_name1<<endl;
    }
    if(Student_RollNo[i]==Student_RollNo[1]){
    cout<<"Student name is : "<<student_name2<<endl;
    }
    if(Student_RollNo[i]==Student_RollNo[2]){
    cout<<"Student name is : "<<student_name3<<endl;
    }
    if(Student_RollNo[i]==Student_RollNo[3]){
    cout<<"Student name is : "<<student_name4<<endl;
    }
    if(Student_RollNo[i]==Student_RollNo[4]){
    cout<<"Student name is : "<<student_name5<<endl;
    }
    cout<<"Student Age is : "<<Age[i]<<endl;
    cout<<"Student Gender is : "<<Gender[i]<<endl;
    }
}
if(User_input<=0 || User_input>=6){
    cout<<"---------------------------"<<endl;
    cout<<"      ATTENTION!!!!!!!     "<<endl;
    cout<<"Please enter a valid input."<<endl;
    cout<<"---------------------------"<<endl;

}
}
//The part will only run User Input=5
if(User_input==5){
cout<<"-----------------------------------------------"<<endl;
cout<<"    Thank You For Coming. Do Visit Again.      "<<endl;
cout<<"-----------------------------------------------"<<endl;
}

return 0;
}