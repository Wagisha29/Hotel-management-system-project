#include<iostream>
using namespace std;
int main(){
  int Quant;
  int choice;
//quantity of food items
  int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshakes=0, Qchicken=0;
  //food item sold 
 int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Schicken=0, Sshakes=0;
  //total price of item 
  int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_chicken=0, Total_shakes=0;


  cout<<"\n\t Quantity of items we have";
  cout<<"\n Rooms available:";
  cin>>Qrooms;
  cout<<"\n Quantity of pasta : ";
  cin>>Qpasta;
  cout<<"\n Quantity of burger : ";
  cin>>Qburger;
  cout<<"\n Quantity of noodles : ";
  cin>>Qnoodles;
  cout<<"\n Quantity of shakes : ";
  cin>>Qshakes;
  cout<<"\n Quantity of chciken-roll : ";
  cin>>Qchicken;

  m:
  cout<<"\n\t\t\t Please select from given menu options ";
  cout<<"\n\n 1) Rooms ";
  cout<<"\n 2) Pasta ";
  cout<<"\n 3) Burger ";
  cout<<"\n 4) Nodles ";
  cout<<"\n 5) Shakes ";
  cout<<"\n 6) Chicken-roll ";
  cout<<"\n 7) Information regarding sales and collection ";
  cout<<"\n 8) Exit ";

  cout<<"\n\n Please enter your choice! ";
  cin>>choice;

  switch(choice){
    case 1: 
    cout<<"\n\n Enter the no. of rooms you want: ";
    cin>>Quant;
    if(Qrooms-Srooms >= Quant){
      Srooms=Srooms+Quant;
      Total_rooms=Total_rooms+(Quant*1200);
      cout<<"\n\n\t\t"<<Quant<<" rooms have been alloted to you ";
    }
    else{
      cout<<"\n\t Only"<<Qrooms-Srooms<<" rooms remaining in hotel ";  
    }
    break;

    case 2: 
    cout<<"\n\n Enter Pasta Quantity: ";
    cin>>Quant;
    if(Qpasta-Spasta >= Quant){
      Spasta=Spasta+Quant;
      Total_pasta=Total_pasta+(Quant*250);
      cout<<"\n\n\t\t"<<Quant<<" pasta in the order ";
    }
    else{
      cout<<"\n\t Only"<<Qpasta-Spasta<<" pasta remaining in hotel ";
    }
    break;

    case 3: 
    cout<<"\n\n Enter burger quantiy: ";
    cin>>Quant;
    if(Qburger-Sburger >= Quant){
      Sburger=Sburger+Quant;
      Total_burger=Total_burger+(Quant*120);
      cout<<"\n\n\t\t"<<Quant<<" Burger in order! ";
    }
    else{
      cout<<"\n\t Only"<<Qburger-Sburger<<" burger remaining in hotel ";
    }
    break;

    case 4: 
    cout<<"\n\n Enter noodles quantiy : ";
    cin>>Quant;
    if(Qnoodles-Snoodles >= Quant){
      Snoodles=Snoodles+Quant;
      Total_noodles=Total_noodles+(Quant*250);
      cout<<"\n\n\t\t"<<Quant<<" noodles in order! ";
    }
    else{
      cout<<"\n\t Only"<<Qnoodles-Snoodles<<" noodles remaining in hotel ";
    }
    break;

    case 5: 
    cout<<"\n\n Enter shakes quantity: ";
    cin>>Quant;
    if(Qshakes-Sshakes >= Quant){
      Sshakes=Sshakes+Quant;
      Total_rooms=Total_rooms+(Quant*250);
      cout<<"\n\n\t\t"<<Quant<<" shakes in the order! ";
    }
    else{
      cout<<"\n\t Only"<<Qshakes-Sshakes<<" shakes remaining in hotel ";
    }
    break;

    case 6: 
    cout<<"\n\n Enter chicken-roll quantity: ";
    cin>>Quant;
    if(Qchicken-Schicken >= Quant){
      Schicken=Schicken+Quant;
      Total_chicken=Total_chicken+(Quant*300);
      cout<<"\n\n\t\t"<<Quant<<" chicken-rolls in order! ";
    }
    else{
      cout<<"\n\t Only"<<Qchicken-Schicken<<" chicken-rolls remaining in hotel ";
    }
    break;

    case 7:
    cout<<"\n\t\t Details of sales and collection ";
    cout<<"\n\n Number of rooms we had : "<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
    cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
    cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

    cout<<"\n\n Number of pasta we had : "<<Qpasta;
    cout<<"\n\n Number of pasta we gave for rent : "<<Spasta;
    cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
    cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;

    cout<<"\n\n Number of burger we had : "<<Qburger;
    cout<<"\n\n Number of burger we gave for rent : "<<Sburger;
    cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
    cout<<"\n\n Total buger collection for the day : "<<Total_burger;

    cout<<"\n\n Number of noodles we had : "<<Qnoodles;
    cout<<"\n\n Number of noodles we gave for rent : "<<Snoodles;
    cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;

    cout<<"\n\n Number of shakes we had : "<<Qshakes;
    cout<<"\n\n Number of shakes we gave for rent : "<<Sshakes;
    cout<<"\n\n Remaining shakes : "<<Qshakes-Sshakes;
    cout<<"\n\n Total shakes collection for the day : "<<Total_shakes;

    cout<<"\n\n Number of chciken-roll we had : "<<Qchicken;
    cout<<"\n\n Number of chciken-rol we gave for rent : "<<Schicken;
    cout<<"\n\n Remaining chciken-rol : "<<Qchicken-Schicken;
    cout<<"\n\n Total chciken-rol collection for the day : "<<Total_chicken;
    break;

    case 8:
    exit(0);
    break;

    default:
    cout<<"\n Please select the numbers mentioned above!";
    
  }
  goto m; 
  
}
