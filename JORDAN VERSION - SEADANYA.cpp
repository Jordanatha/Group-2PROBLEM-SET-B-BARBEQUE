#include <iostream>
using namespace std;

 class Barbeque{
 	private :
 		string my_Brand;
 		string my_Model;

 	public :
 		Barbeque (string, string);
 		void loadCoals ();
 		void light ();
 		void light2();
 		void cook ();
 		void reset ();
 		bool hasCoals();
 		bool isLit ();
 		bool isCooking ();
 		bool coalLoaded = false;
 		bool isLighten = false;
 };
 
 Barbeque :: Barbeque (string brand, string model){
 	my_Brand = brand;
 	my_Model = model;
 	
 }
 
  void Barbeque :: loadCoals(){
 	coalLoaded = true;
 }
 
 bool Barbeque :: hasCoals (){
 	return coalLoaded;
 }
 
 void Barbeque :: light(){
 	if(hasCoals()) {
 		cout << "Lightning the grill!" << endl << endl;
 	}
	else {
 		cout << "You have to load the coals before lightning" << endl << endl;
 	}
 }
 
 void Barbeque :: light2 (){
 	isLighten = true;
 }
 
 bool Barbeque :: isLit (){
 	return isLighten;
 } 
 
 void Barbeque :: cook (){
 	if (isLit()) {
 		cout << "Cooking food!!" << endl << endl;
 	}
 	else {
 		cout << "You have to wait until " << my_Brand << " " << my_Model << " has been lit!" << endl<< endl;
 	}
 }
 
void Barbeque :: reset (){
	coalLoaded = false;
	isLighten = false;
}
 
 int main (){
 	char choice;
 	string brand, model;
 	cout << "Enter the brand : " ;
 	getline (cin, brand);
 	cout << endl;
 	
 	cout << "Enter the model : ";
 	getline (cin, model);
 	cout << endl;
 	
 	cout << brand << " " << model << endl;

 	Barbeque bbq = Barbeque(brand, model); 
 	
 	do{
 	cout << "Do you want to load the coals? (Y/N)";
 	cin >> choice;
 	if (choice == 'Y' || choice == 'y'){
 	bbq.loadCoals();
 	bbq.light();
  }
 	else {
 	bbq.light();
 	}
 	}
 	while (choice == 'N' || choice == 'n');
 	
 	do{
 	cout << "Do you want to light up the meat? (Y/N)";
 	cin >> choice;
 	if (choice == 'Y' || choice =='y'){
 		bbq.light2();
 		bbq.cook();
 	}
 	else {
 	bbq.cook();
 	}
 	}
 	while (choice == 'N' || choice == 'n');
 	
 	
 }
