#include <iostream>
#include<fstream>
#include <cstring>
using namespace std;
void create_a();
void login(string);
void blogin();
void view_b();
    void account_n();
void pay_g();
    void dstv();
    void wifi();
    void school();
void buy_a();
void deposite_a();
void transfer_g();
int main()
{

    int v;
    cout<<"\n\n\t\t\t********************GE'EZ KEFEYA**********************************"<<endl;
    cout<<"\n\t\t\t\t |    1) LOGIN                            |"<<endl;
    cout<<"\t\t\t\t |    2) SIGN UP                          |"<<endl;
    cout<<"\n\n\t\t\t------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t-ENTER YOUR CHOICE: ";
    cin>>v;
    switch(v){
    case 2:
        create_a();
        break;
    case 1:
        string a,b,c,d;
        int counter;
        system("cls");
        cout<<"\n\t\t--------------LOGIN-----------"<<endl;
        cout<<"\n\t\t-USER NAME: ";
        cin>>a;
        cout<<"\t\t-PASSWORD: ";
        cin>>b;
        ifstream file("acc.txt");
        while(file>>c>>d)
        {
            if(a==c && b==d){
                 counter=1;
                   system("cls");
        }
    }
    file.close();
    if(counter==1){
        login(a);
    }
    else{
            system("cls");
        cerr<<"\t\t\t------------ ACCOUNT NOT FOUND PLEASE TRY AGAIN----------------";
        main();
    }
    }
    return 0;
}

void create_a(){
    string p,n;
    i:

    cout<<"\n\t\t-ENTER USER NAME: ";
    cin>>n;
    if(n.length()>12 || n.length()<4){
        cout<<"NAME SHOULD NOT BE LESS THAN 6 AND MORE THAN 12"<<endl;
       goto i;
    }
    o:
    cout<<"\n\t\t-ENTER PASSWORD: ";
    cin>>p;
       if(p.length()>12 || p.length()<8){
        cout<<"YOUR PASSWORD SHOULD BE BETWEEN 8-12"<<endl;
        goto o;
}
    ofstream file("acc.txt",ios::app);
    file<<n<<" "<<p<<endl;
    system("cls");
    cout<<"\t\t\t------------------YOUR ACCOUNT IS SUCCESSFULLY CREATED --------------------"<<n<<endl;
    main();
}

void login(string a){
    int c;//customer input
    cout<<"\n\n\t\t\t********************WELCOME TO GE'EZ KEFEYA "<<a<<"**********************************"<<endl;
    cout<<"\n\t\t\t\t*       1) PAY WITH GE'EZ                                     *"<<endl;
    cout<<"\t\t\t\t*       2) BUY AIRTIME                                        *"<<endl;
    cout<<"\t\t\t\t*       3) DEPOSIT TO ACCOUNT                                 *"<<endl;
    cout<<"\t\t\t\t*       4) TRANSFER TO GE'EZ                                  *"<<endl;
    cout<<"\t\t\t\t*       5) VIEW BALANCE                                       *\n"<<endl;
    cout<<"\t\t\t------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t-ENTER YOUR CHOICE: ";
    cin>>c;
    switch(c){

case 1:
    system("cls");
    int p;
     cout<<"\n\t\t*********** DSTV PAYMENT ************"<<endl;
    cout<<"\n\t\t 1) DSTV PAYMENT"<<endl;
    cout<<"\t\t 2) WIFI PAYMENT"<<endl;
    cout<<"\t\t 3) UNITY UNIVERSITY PAYMENT"<<endl;
    cout<<"\t\t 4) BACK"<<endl;
    cout<<"\n\t\t----------------------------------------"<<endl;
    cout<<"\t-ENTER YOUR CHOICE: ";
    cin>>p;
        switch(p){
case 1:
    system("cls");
   dstv();
    break;
case 2:
    system("cls");
   wifi();
    break;
case 3:
    system("cls");
    school();
   break;

case 4:
    system("cls");
    login(a);
    break;
default:
    system("cls");
    cout<<"----INVALID INPUT PLEASE TRY AGAIN----";
    main();
    }

    break;
case 2:
    system("cls");
    int ba;
    cout<<"\n\t\t***********BUY AIRTIME************"<<endl;
    cout<<"\n\t- ENTER PHONE NUMBER: ";
    cin>>ba;
   cout<<" buy_a(ba)";
    break;
case 3:
    system("cls");
    int dg;
    cout<<"\n\t\t***********DEPOSITE TO GE'EZ ACCOUNT************"<<endl;
    cout<<"\t------FROM WHICH BANK YOU WOULD LIKE TO DEPOSITE TO GE'EZ------"<<endl;
    cout<<"\n\t\t 1) CBE"<<endl;
    cout<<"\t\t 2) ABYYSINIA"<<endl;
    cout<<"\t\t 3) AWASH"<<endl;
    cout<<"\n\t--------------------------------------------------"<<endl;
    cout<<"\t-ENTER YOUR CHOICE: ";
    cin>>dg;
    switch(dg){
case 1:
    system("cls");
    cout<<"cbe()";
    break;
case 2:
      system("cls");
    cout<<"abby()";
    break;
case 3:
      system("cls");
    cout<<"awash";
    break;
default:
     system("cls");
    cout<<"\t\t\t\t\t----INVALID INPUT PLEASE TRY AGAIN----";
    main();
    }
break;
case 4:
    system("cls");
    int t;
    cout<<"\n\t\t***********TRANSFER TO GE'EZ ACCOUNT************"<<endl;
    cout<<"\n\t- ENTER ACCOUNT NUMBER: ";
    cin>>t;
    cout<<"transfer_g(t)";
    break;
case 5:
    system("cls");
    int a;
     cout<<"\n\t\t***********VIEW BALANCE************"<<endl;
    cout<<"\n\t- ENTER ACCOUNT NUMBER: ";
    cin>>a;
   cout<<"account_n(a)";
    break;
    default:
        system("cls");
    cout<<"\t\t\t\t\t----INVALID INPUT PLEASE TRY AGAIN----";
    main();
    break;
    }

}
 void dstv(){
   string s,u,na,nf,pack,bi;
     int pa;
    cout<<"\n\t\t*********** DSTV ************"<<endl;
    cout<<"\n\t-ENTER YOUR SMART NUMBER: ";
    cin>>u;
    ifstream file("dstv.txt");
    while(file>>s>>na>>nf>>pack>>bi){
        if(u==s){

            system("cls");
             cout<<"\n\t\t------DSTV FOUND--------"<<endl;
        cout<<"\n\t---------- INFORMATION ------------"<<endl;
        cout<<"\t\tNAME:    "<<na<<" "<<nf<<endl;
        cout<<"\t\tPACKAGE: "<<pack<<endl;
        cout<<"\t\tBIRR:    "<<bi;
        cout<<"\n\t----------------------------------------"<<endl;
        cout<<"\t\tENTER 1 TO PAY ";
        cin>>pa;
           file.close();
        if(pa==1){
            cout<<"\n\t\t-------DSTV SUCCESSFULLY PAID------";

        }
        else{
                system("cls");
            cout<<"\t\t-------INVALID INPUT PLEASE TRY AGAIN------";
             dstv();
             }
        }
        else{
                system("cls");
            cout<<"\t\t********INVALID NUMBER PLEASE TRY AGAIN**********";

        }
    }
 }




  void wifi(){

      string i,id,na,fn,me,bi;
      int pa;
      cin>>id;
      ifstream open("wifi.txt");
       while(open>>i>>na>>fn>>me>>bi){
        if(i==id){
                system("cls");
            cout<<"\n\t\t**********WIFI FOUND**************\n";
            cout<<"\n\t\t\tNAME "<<na<<" "<<fn<<endl;
            cout<<"\t\t\tMEGABYTE "<<me<<endl;
            cout<<"\t\t\tBIRR "<<bi;
        cout<<"\n\n\t\t--------------------------------------------";
            cout<<"\n\t-ENTER 1 TO PAY : ";
            cin>>pa;
            open.close();
            if(pa==1){
                cout<<"\n\t\tSUCCESSFULLY PAID";
            }
            else{
                    system("cls");
                cout<<"\t\tINVALID INPUT PLEASE TRY AGAIN";
                wifi();
            }

        }
        else{
                system("cls");
            cout<<"\n\t\t******INVALID INPUT PLEASE TRY AGAIN*******";
        }


  }
  }
 void school(){

    string i,id,na,fn,dep,sec,n1,c1,n2,c2,n3,c3,n4,c4,n5,c5,n6,c6,bi;
    int pa;
    cout<<"\t\t\t************SCHOOL PAY**************"<<endl;
    cout<<"\n\t\t- ENTER YOUR ID NUMBER ";
    cin>>i;
    ifstream open("school.txt");
    while(open>>id>>na>>fn>>dep>>sec>>n1>>c1>>n2>>c2>>n3>>c3>>n4>>c4>>n5>>c5>>n6>>c6>>bi){
        if(i==id){
                system("cls");
        cout<<"\n\t\t\t*******************  STUDENT INFO ***************"<<endl;
            cout<<"\n\t\t- NAME "<<na<<" "<<fn<<endl;
            cout<<"\t\t- DEPARTMENT "<<dep<<endl;
            cout<<"\t\t- SECTION "<<sec<<endl;
            cout<<"\n\n\t\t-------NUMBER OF COURSES YOU WILL TAKE IN THIS SEMISTER--------"<<endl;
            cout<<"\n\t\tCOURSES                                CREADITE HOURE"<<endl;
            cout<<"\t\t"<<n1<<"                                   "<<c1<<endl;
            cout<<"\t\t"<<n2<<"                                   "<<c2<<endl;
            cout<<"\t\t"<<n3<<"                                   "<<c3<<endl;
            cout<<"\t\t"<<n4<<"                                   "<<c4<<endl;
            cout<<"\t\t"<<n5<<"                                   "<<c5<<endl;
            cout<<"\t\t"<<n6<<"                                   "<<c6<<endl;
            cout<<"\n\t\t\t\t TOTAL FEW="<<bi<<endl;
            cout<<"\n\t\t- ENTER 1 TO PAY: ";
            cin>>pa;
            open.close();
            if(pa==1){
                cout<<"SUCCESSFULLY PAID";
            }
            else{
                cout<<"INVALID NUMBER CHOOSEN ";
            }
        }
        else{
                system("cls");
            cout<<"\n\t\t*********NO MATCH ID IS FOUND TRY AGAIN ************"<<endl;

        }
    }
 }
