//
//  main.cpp
//  Lab 3
//
//  Created by Khilola Mirsagatova on 01/10/26.
//
/*
 
 Part A
 1 right
 2 starts with a digit
 3 right
 4 keyword
 5 contains a space
 6 right
 7 contains-
 8 right
 9 right
 10 keyword
 Part B
 1 int,int students = 20;
 2 double, double gpa = 3.5;
 3 char, char initial = 'M';
 4 bool, bool_is_open=true;
 5 double, double temperature = 26.5;
 6 int, int seconds_in_year=31536000
 7 const double, const double PI=3.14159265359
 8 long long, long long population=8100000000LL
 Part C
 1. 3
 2. 2
 3. 17
 4. 3.4
 5. -3
 6. -2
 7. 13
 8. -2
 9. 3
 10. 0
 11. 2
 12. n=7 m=7 p=14
 Part D
     a  b
 1. 10  3
 2. 10  7
 3. 3   7
 4. 3   14
 5. 5   14
 6. 5   -2
  lines 1-3 changed a to 3 b to 7
 Part E
 a) syntax error after endl should be ;
 –> correct line:
 int main() {
 cout << "Result: " << 42 << endl;
 return 0;
 }
 b) logic error the solution will be 8 as it is written int
 -> correct line:
 int a = 7, b = 8, c = 10;
 double avg = (a + b + c) / 3.0;
 c) syntax error not double quoting as it is not a text
 -> correct line:
 char grade='A'
 d) syntax error rrows should be in opposite direction
 -> correct line:
 int age;
 cin>>age;
 Part F
 1 F -> closing braces }
 2 F -> they are different variables
 3 F -> both are integer so it gives integer 3
 4 T -> double is 8 bytes and float is 4 bytes
 5 F -> it reads only one word
 6 F -> ’5’ it is char while 5 is int
 7 T
 Part G
 1. a
 2. c
 3. c
 4. b
 5. b
 6. b
 7. d
 Part H
 #include <iostream>
  #include <string>
 using namespace std;
 int main(int argc, const char * argv[]) {
     // insert code here...
     string name;
     int age;
     float height;
     char group_letter;
     bool full_time;
      
     cout<<"Enter Name, age, height (m), group letter, full-time (1/0):";
     cin>> name >> age >> height >> group_letter >> full_time;
     cout<< "--- Student card ---" << endl;
     cout<< "Name:"<<name<<endl;
     cout<<"Height:"<<height<<" m"<<endl;
     cout<<"Group:"<<group_letter<<endl;
     cout<<"full-time:"<<full_time<<endl;
     cout<<"Age in months:"<<age*12<<endl;
     cout << "Bytes: int " << sizeof(int) << ", float " << sizeof(float)
              << ", char " << sizeof(char) << ", bool " << sizeof(bool) << endl;
     
     
   
     return EXIT_SUCCESS;
 }
 Part I
 #include <iostream>
  #include <string>
 using namespace std;
 int main(int argc, const char * argv[]) {
     // insert code here...
     int a, b ;
     cout<<"Enter two integers(b != 0)";
     cin>>a>>b;
     cout<<"Sum:"<< a+b<<endl;
     cout<<"Difference:"<< a-b<<endl;
     cout<<"Product:"<< a*b<<endl;
     cout<<"Quotient:"<< a/b<<endl;
     cout<<"Remainder:"<< a%b<<endl;
     cout<<"Exact:"<< 1.0*a/b<<endl;
     return EXIT_SUCCESS;
 }
Part J
 #include <iostream>
  #include <string>
 using namespace std;
 int main(int argc, const char * argv[]) {
     // insert code here...
     int total;
         cout << "Enter seconds: ";
         cin >> total;
      
         int days = total / 86400;
         int hours = total % 86400 / 3600;
         int minutes = total % 3600 / 60;
         int seconds = total % 60;
      
         cout << total << " s = " << days << " d " << hours << " h "
              << minutes << " min " << seconds << " s" << endl;
     return EXIT_SUCCESS;
 }
 Part K
 #include <iostream>
  #include <string>
 using namespace std;
 int main(int argc, const char * argv[]) {
     // insert code here...
     const int NOTEBOOK = 8000, PEN = 2500, CALC = 95000;
        const int VAT_PERCENT = 12;
     
        int nb, pen, calc;
        cout << "Enter quantities (notebooks, pens, calculators): ";
        cin >> nb >> pen >> calc;
     
        int nbTotal = nb * NOTEBOOK;
        int penTotal = pen * PEN;
        int calcTotal = calc * CALC;
        int subtotal = nbTotal + penTotal + calcTotal;
        int vat = subtotal * VAT_PERCENT / 100;
        int total = subtotal + vat;
     
        cout << "Notebook x " << nb << " = " << nbTotal << endl;
        cout << "Pen x " << pen << " = " << penTotal << endl;
        cout << "Calculator x " << calc << " = " << calcTotal << endl;
        cout << "Subtotal: " << subtotal << " so'm" << endl;
        cout << "VAT " << VAT_PERCENT << "%: " << vat << " so'm" << endl;
        cout << "TOTAL: " << total << " so'm" << endl;
     
        int paid;
        cout << "Amount paid: ";
        cin >> paid;
        cout << "Paid: " << paid << endl;
        cout << "Change: " << paid - total << " so'm" << endl;
     return EXIT_SUCCESS;
 }
 Enter quantities (notebooks, pens, calculators):
 2
 3
 2
 Notebook x 2 = 16000
 Pen x 3 = 7500
 Calculator x 2 = 190000
 Subtotal: 213500 so'm
 VAT 12%: 25620 so'm
 TOTAL: 239120 so'm
 Amount paid: 250000
 Paid: 250000
 Change: 10880 so'm
 
 */
#include <iostream>
 #include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    const int NOTEBOOK = 8000, PEN = 2500, CALC = 95000;
       const int VAT_PERCENT = 12;
    
       int nb, pen, calc;
       cout << "Enter quantities (notebooks, pens, calculators): ";
       cin >> nb >> pen >> calc;
    
       int nbTotal = nb * NOTEBOOK;
       int penTotal = pen * PEN;
       int calcTotal = calc * CALC;
       int subtotal = nbTotal + penTotal + calcTotal;
       int vat = subtotal * VAT_PERCENT / 100;
       int total = subtotal + vat;
    
       cout << "Notebook x " << nb << " = " << nbTotal << endl;
       cout << "Pen x " << pen << " = " << penTotal << endl;
       cout << "Calculator x " << calc << " = " << calcTotal << endl;
       cout << "Subtotal: " << subtotal << " so'm" << endl;
       cout << "VAT " << VAT_PERCENT << "%: " << vat << " so'm" << endl;
       cout << "TOTAL: " << total << " so'm" << endl;
    
       int paid;
       cout << "Amount paid: ";
       cin >> paid;
       cout << "Paid: " << paid << endl;
       cout << "Change: " << paid - total << " so'm" << endl;
    return EXIT_SUCCESS;
}
