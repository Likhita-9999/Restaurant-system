#include <iostream>
using namespace std;
class Breakfast{
  public:
  void display1(){
      cout<<"-----BREAKFAST MENU------"<<endl;
      cout<<"1.Idly-30/-"<<endl;
      cout<<"2.Vada-40/-"<<endl;
      cout<<"3.Poori-50/-"<<endl;
      cout<<"4.Dosa-45/-"<<endl;
      cout<<"5.Upma-35/-"<<endl;
  }
  int set1(){
      cout<<"Enter 1 for idly"<<endl;
      cout<<"Enter 2 for vada"<<endl;
      cout<<"Enter 3 for poori"<<endl;
      cout<<"Enter 4 for dosa"<<endl;
      cout<<"Enter 5 for upma"<<endl;
      cout<<endl;
      int choice1;
      cout<<"Enter your prefered breakfast choice number"<<endl;
      cin>>choice1;
      if(choice1==1){
          cout<<"You have ordered idly"<<endl;
          cout<<"Total amount to be paid is 30/-"<<endl;
          return 30;
      }
      else if(choice1==2){
          cout<<"You have ordered vada"<<endl;
          cout<<"Total amount to be paid is 40/-"<<endl;
          return 40;
      }
      else if(choice1==3){
          cout<<"You have ordered poori"<<endl;
          cout<<"Total amount to be paid is 50/-"<<endl;
          return 50;
      }
      else if(choice1==4){
          cout<<"You have ordered dosa"<<endl;
          cout<<"Total amount to be paid is 45/-"<<endl;
          return 45;
      }
      else if(choice1==5){
          cout<<"You have ordered upma"<<endl;
          cout<<"Total amount to be paid is 35/-"<<endl;
          return 35;
      }
      else{
          cout<<"Please enter valid choice"<<endl;
          return 0;
      }
  }
};
class Lunch{
  public:
  void display2(){
      cout<<"-----LUNCH MENU------"<<endl;
      cout<<"1.Veg Thali-99/-"<<endl;
      cout<<"2.Chicken Biryani-199/-"<<endl;
      cout<<"3.Non_Veg Thali-149/-"<<endl;
      cout<<"4.Curd Rice-50/-"<<endl;
      cout<<"5.Roti+Curry-70/-"<<endl;
  }
    int set2(){
      cout<<"Enter 1 for Veg Thali"<<endl;
      cout<<"Enter 2 for Chicken Biryani"<<endl;
      cout<<"Enter 3 for Non_Veg Thali"<<endl;
      cout<<"Enter 4 for Curd Rice"<<endl;
      cout<<"Enter 5 for Roti+Curry"<<endl;
      cout<<endl;
      int choice2;
      cout<<"Enter your prefered lunch choice number"<<endl;
      cin>>choice2;
      if(choice2==1){
          cout<<"You have ordered Veg Thali"<<endl;
          cout<<"Total amount to be paid is 99/-"<<endl;
          return 99;
      }
      else if(choice2==2){
          cout<<"You have ordered Chicken Biryani"<<endl;
          cout<<"Total amount to be paid is 199/-"<<endl;
          return 199;
      }
      else if(choice2==3){
          cout<<"You have ordered Non_Veg Thali"<<endl;
          cout<<"Total amount to be paid is 149/-"<<endl;
          return 149;
      }
      else if(choice2==4){
          cout<<"You have ordered Curd Rice"<<endl;
          cout<<"Total amount to be paid is 50/-"<<endl;
          return 50;
      }
      else if(choice2==5){
          cout<<"You have ordered Roti+Curry"<<endl;
          cout<<"Total amount to be paid is 70/-"<<endl;
          return 70;
      }
      else{
          cout<<"Please enter valid choice"<<endl;
          return 0;
      }
    }
};
class Snacks{
  public:
  void display3(){
      cout<<"-----SNACKS MENU------"<<endl;
      cout<<"1.Samosa-15/-"<<endl;
      cout<<"2.Pani Puri-20/-"<<endl;
      cout<<"3.Pav Bhaji-89/-"<<endl;
      cout<<"4.Vada Pav-79/-"<<endl;
      cout<<"5.Cutlet-30/-"<<endl;
  }
  int set3(){
      cout<<"Enter 1 for Samosa"<<endl;
      cout<<"Enter 2 for Pani Puri"<<endl;
      cout<<"Enter 3 for Pav Bhaji"<<endl;
      cout<<"Enter 4 for Vada Pav"<<endl;
      cout<<"Enter 5 for Cutlet"<<endl;
      cout<<endl;
      int choice3;
      cout<<"Enter your prefered snacks choice number"<<endl;
      cin>>choice3;
      if(choice3==1){
          cout<<"You have ordered Samosa"<<endl;
          cout<<"Total amount to be paid is 15/-"<<endl;
          return 15;
      }
      else if(choice3==2){
          cout<<"You have ordered Pani Puri"<<endl;
          cout<<"Total amount to be paid is 20/-"<<endl;
          return 20;
      }
       else if(choice3==3){
          cout<<"You have ordered Pav Bhaji"<<endl;
          cout<<"Total amount to be paid is 89/-"<<endl;
          return 89;
      }
      else if(choice3==4){
          cout<<"You have ordered Vada Pav"<<endl;
          cout<<"Total amount to be paid is 79/-"<<endl;
          return 79;
      }
      else if(choice3==5){
          cout<<"You have ordered Cutlet"<<endl;
          cout<<"Total amount to be paid is 30/-"<<endl;
          return 30;
      }
      else{
          cout<<"Please enter valid choice"<<endl;
          return 0;
      }
  }
};
class Beverages{
  public:
  void display4(){
      cout<<"-----BEVERAGES MENU------"<<endl;
      cout<<"1.Tea-15/-"<<endl;
      cout<<"2.Coffee-20/-"<<endl;
      cout<<"3.Buttermilk-10/-"<<endl;
      cout<<"4.Fresh Lime Soda-25/-"<<endl;
      cout<<"5.Cool Drink-30/-"<<endl;
  }
  int set4(){
      cout<<"Enter 1 for Tea"<<endl;
      cout<<"Enter 2 for Coffee"<<endl;
      cout<<"Enter 3 for Buttermilk"<<endl;
      cout<<"Enter 4 for Fresh Lime Soda"<<endl;
      cout<<"Enter 5 for Cool Drink"<<endl;
      cout<<endl;
      int choice4;
      cout<<"Enter your prefered beverage choice number"<<endl;
      cin>>choice4;
      if(choice4==1){
          cout<<"You have ordered Tea"<<endl;
          cout<<"Total amount to be paid is 15/-"<<endl;
          return 15;
      }
      else if(choice4==2){
          cout<<"You have ordered Coffee"<<endl;
          cout<<"Total amount to be paid is 20/-"<<endl;
          return 20;
      }
      else if(choice4==3){
          cout<<"You have ordered Buttermilk"<<endl;
          cout<<"Total amount to be paid is 10/-"<<endl;
          return 10;
      }
      else if(choice4==4){
          cout<<"You have ordered Fresh Lime Soda"<<endl;
          cout<<"Total amount to be paid is 25/-"<<endl;
          return 25;
      }
       else if(choice4==5){
          cout<<"You have ordered Cool Drink"<<endl;
          cout<<"Total amount to be paid is 30/-"<<endl;
          return 30;
      }
      else{
          cout<<"Please enter valid choice"<<endl;
          return 0;
      }
  }
};
class Dinner{
  public:
  void display5(){
      cout<<"-----DINNER MENU------"<<endl;
      cout<<"1.Chapati+Paneer Curry-80/-"<<endl;
      cout<<"2.Fried Rice-90/-"<<endl;
      cout<<"3.Veg Pulao-85/-"<<endl;
      cout<<"4.Roti+Dal-60/-"<<endl;
      cout<<"5.Egg Curry+Rice-100/-"<<endl;
  }
  int set5(){
      cout<<"Enter 1 for Chapati+Paneer Curry"<<endl;
      cout<<"Enter 2 for Fried Rice"<<endl;
      cout<<"Enter 3 for Veg Pulao"<<endl;
      cout<<"Enter 4 for Roti+Dal"<<endl;
      cout<<"Enter 5 for Egg Curry+Rice"<<endl;
      cout<<endl;
      int choice5;
      cout<<"Enter your prefered dinner choice number"<<endl;
      cin>>choice5;
      if(choice5==1){
          cout<<"You have ordered Chapati+Paneer Curry"<<endl;
          cout<<"Total amount to be paid is 80/-"<<endl;
          return 80;
      }
      else if(choice5==2){
          cout<<"You have ordered Fried Rice"<<endl;
          cout<<"Total amount to be paid is 90/-"<<endl;
          return 90;
      }
      else if(choice5==3){
          cout<<"You have ordered Veg Pulao"<<endl;
          cout<<"Total amount to be paid is 85/-"<<endl;
          return 85;
      }
      else if(choice5==4){
          cout<<"You have ordered Roti+Dal"<<endl;
          cout<<"Total amount to be paid is 60/-"<<endl;
          return 60;
      }
      else if(choice5==5){
          cout<<"You have ordered Egg Curry+Rice"<<endl;
          cout<<"Total amount to be paid is 100/-"<<endl;
          return 100;
      }
      else{
          cout<<"Please enter valid choice"<<endl;
          return 0;
      }
  }
};
int main() {
    int total=0;
    int multipleorders=1;
    cout<<"===========WELCOME TO RESTAURANT=========="<<endl;
    while(multipleorders==1){
    cout<<"Enter 1 for BREAKFAST menu"<<endl;
    cout<<"Enter 2 for LUNCH menu"<<endl;
    cout<<"Enter 3 for SNACKS menu"<<endl;
    cout<<"Enter 4 for BEVERAGES menu"<<endl;
    cout<<"Enter 5 for DINNER menu"<<endl;
    int choice;
    cout<<"Please enter your choice(1,2,3,4,5)"<<endl;
    cin>>choice;
    if(choice==1){
        Breakfast b;
        b.display1();
        total=total+b.set1();
    }
    else if(choice==2){
        Lunch l;
        l.display2();
        total=total+l.set2();
        
    }
    else if(choice==3){
        Snacks s;
        s.display3();
        total=total+s.set3();
    }
    else if(choice==4){
        Beverages b;
        b.display4();
        total=total+b.set4();
    }
    else if(choice==5){
        Dinner d;
        d.display5();
        total=total+d.set5();
    }
    else{
        cout<<"You have entered an invalid choice....."<<endl;
        cout<<"Please enter a valid choice"<<endl;
    }
    cout<<"Enter 1 to order more and 2 to checkout"<<endl;
    cin>>multipleorders;
    cout<<endl;
    
}
    cout<<endl;
    cout<<"===========YOUR BILL=========="<<endl;
    cout<<"Total amount to be paid: "<<total<<"/-"<<endl;
    cout<<"Thank you for visiting!"<<endl;
    return 0;
}
