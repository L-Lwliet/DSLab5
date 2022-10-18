#include <iostream>
using namespace std;

class Student {
   public:
   string id, name;
   float cg;
   int cc;

   Student() {}

   Student(string x, string y, float p, int q) {
      name = x;
      id = y;
      cg = p;
      cc = q;
   }

   void printDetails() {
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
      cout<<"CGPA: "<<cg<<endl;
      cout<<"Credits Completed: "<<cc<<endl;
   }
};

int main() {
   Student *st = new Student[2];

   string id, name;
   float cg, temp;
   int cc;

   for(int i=0; i<2; i++){
        cout<<"Enter info for student"<<i+1<<endl;
        cin>>name;
        cin>>id;
        cin>>cg;
        cin>>cc;
        st[i] = Student(name, id, cg, cc);
   }

   cout<<endl<<endl;


   for(int i=0; i <2; i++) {
      st[i].printDetails();
      cout<<endl;
   }

   int op, counter = 0;
   do{
   cout<<"\n\nSelect an option: \n1. Bubble sort CGPA wise \n2. Selection sort Credit wise \n3. Passes Completed \n4. Close"<<endl;
   cin>>op;



   switch(op){
   case 1:
       for(int i=0; i<(2-1); i++){
        for(int j=0; j<(2-i-1); j++){
            if(st[j].cg>st[j+1].cg){
                temp = st[j].cg;
                st[j].cg = st[j+1].cg;
                st[j+1].cg = temp;
            }
        }
        counter++;
      }
      cout<<"Student info after applying bubble sort CGPA wise: ";
      for(int i=0; i <2; i++) {
         st[i].printDetails();
         cout<<endl;
      }

    break;

   case 2:
       int i, j, minIndex;
        for(i=0; i<2-1; i++){
            minIndex=i;
            for(j=i+1; j<2; j++){
                if(st[j].cc < st[ minIndex ].cc){
                    minIndex=j;
                    swap(st[ minIndex ].cc, st[ i ].cc);
                }
            }
        }

      cout<<"Student info after applying selection sort Credit wise: "<<endl;
      for(int i=0; i <2; i++) {
        st[i].printDetails();
        cout<<endl;
      }
    break;

   case 3: cout<<"Number of passes: "<<5-1<<endl;
    break;
   }}
   while(op!=4);



   return 0;
}

