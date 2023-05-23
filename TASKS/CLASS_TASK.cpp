#include <iostream>
#include <string>
using namespace std;

class matriale
{
	private:
		string name;
		
	public:
		matriale(){
			name = "";
		}

		matriale(string n){
			name = n;
		}
		void setName(string n){
			name = n;
		}

		string getName(){
			return name;
		}
		virtual void printData()
		{
			cout << "Name: " << getName() << endl;
			
		}
		
	
};
/**********************************************************************************************8**********/
class Non_living_thing:public matriale
{
	private:
		string color;
	public:
		Non_living_thing() : matriale() {
			color = "";
		}
		Non_living_thing(string n, string c) : matriale(n) {
			color = c;
		}
		void setColor(string c) {
			color = c;
		}
		string getColor() {
			return color;
		}
		virtual void printData() {
			matriale::printData();
			cout << "Color: " << color << endl;
		}
};
/*************************************************************************************************8***********/
class air:public Non_living_thing
{
	private:
		float denisty;
	public:
		air() : Non_living_thing() {
			denisty = 0.0;
		}
		air(string n, string c, float d) : Non_living_thing(n, c) {
			denisty = d;
		}

		void setDensity(float d) {
			denisty = d;
		}
		float getDensity() {
			return denisty;
		}
		virtual void printData() {
			Non_living_thing::printData();
			cout << "Density: " << denisty << endl;
		}
};
/************************************************************************************************************************/

class Rock:public Non_living_thing
{
	private:
		float hardness;
		float stiffness;
		float strength;
		float toughness;
	public:
		Rock() : Non_living_thing() {
			hardness = 0.0;
			stiffness = 0.0;
			strength = 0.0;
			toughness = 0.0;
		}

		Rock(string n, string c, float h, float s, float st, float t) : Non_living_thing(n, c) {
			hardness = h;
			stiffness = s;
			strength = st;
			toughness = t;
		}

		void setHardness(float h) {
			hardness = h;
		}

		void setStiffness(float s) {
			stiffness = s;
		}

		void setStrength(float st) {
			strength = st;
		}

		void setToughness(float t) {
			toughness = t;
		}

		float getHardness() {
			return hardness;
		}

		float getStiffness() {
			return stiffness;
		}

		float getStrength() {
			return strength;
		}

		float getToughness() {
			return toughness;
		}

		virtual void printData() {
			Non_living_thing::printData();
			cout << "Hardness: " << hardness << endl;
			cout << "Stiffness: " << stiffness << endl;
			cout << "Strength: " << strength << endl;
			cout << "Toughness: " << toughness << endl;
		}

};
/******************************************************************************************************/

class living_thing:public matriale
{
	private:
		int age;
		string type;
	public:
		living_thing() : matriale() {
			age = 0;
			type = "";
		}

		living_thing(string n, int a, string t) : matriale(n) {
			age = a;
			type = t;
		}
	
		void setAge(int a) {
			age = a;
		}

		void setType(string t) {
			type = t;
		}

		int getAge() {
			return age;
		}

		string getType() {
			return type;
		}

		virtual void printData() {
			matriale::printData();
			cout << "Age: " << age << endl;
			cout << "Type: " << type << endl;
		}
};
/*****************************************************/

class plant:public living_thing
{
	private:
		string color;
		string species;         //type
	public:
		plant() : living_thing() {
			color = "";
			species = "";
		}

		plant(string n, int a, string t, string c, string s) : living_thing(n, a, t) {
			color = c;
			species = s;
		}

		void setColor(string c) {
			color = c;
		}

		void setSpecies(string s) {
			species = s;
		}
		string getColor() {
			return color;
		}

		string getSpecies() {
			return species;
		}
		virtual void printData() {
			living_thing::printData();
			cout << "Color: " << color << endl;
			cout << "Species: " << species << endl;
		}
	
};
/*****************************************************/

class Animale:public living_thing
{
	private:
		
	public:
		Animale() : living_thing() {
		}

		Animale(string n, int a, string t) : living_thing(n, a, t) {
		}

		virtual void printData() {
			living_thing::printData();
		}
		
};
/***********************************************************************************************/
class Reptile:public Animale
{
	private:
		string species;
		string habitat;  //place
	public:
		Reptile() : Animale() {
			species = "";
			habitat = "";
		}

		Reptile(string n, int a, string t, string s, string h) : Animale(n, a, t) {
			species = s;
			habitat = h;
		}

		void setSpecies(string s) {
			species = s;
		}

		void setHabitat(string h) {
			habitat = h;
		}
		string getSpecies() {
			return species;
		}

		string getHabitat() {
			return habitat;
		}

		virtual void printData() {
			Animale::printData();
			cout << "Species: " << species << endl;
			cout << "Habitat: " << habitat << endl;
		}
};
/*****************************************************/
class Mammal:public Animale
{
	private:
		string species;
		string habitat;
		string gender; 
		
	public:
		Mammal() : Animale() {
			species = "";
			habitat = "";
			gender = "";
			
		}
		Mammal(string n, int a, string t, string s, string h, string g) : Animale(n, a, t) {
			species = s;
			habitat = h;
			gender = g;
			
		}

		void setGender(string g) {
			gender = g;
		}

		/*void setHealthStatus(string hS) {
			healthStatus = hS;
		}*/

		string getGender() {
			return gender;
		}

		/*string getHealthStatus() {
			return healthStatus;
		}*/

		virtual void printData() {
			Animale::printData();
			cout << "Species: " << species << endl;
			cout << "Habitat: " << habitat << endl;
			cout << "Gender: " << gender << endl;
		}
};
/*****************************************************/
class Platypus:public Mammal
{
	private:
		string uniqueFeature;
	public:
		Platypus() : Mammal() {
		uniqueFeature = "";
		}
		
		Platypus(string n, int a, string t,string s, string h, string g, string uF) : Mammal(n, a,t,s, h, g) {
		uniqueFeature = uF;
		}

		
		void setUniqueFeature(string uF) {
			uniqueFeature = uF;
		}
	
		string getUniqueFeature() {
			return uniqueFeature;
		}
		virtual void printData() 
		{
			Mammal::printData();
			cout << "Unique feature: " << uniqueFeature << endl;
		}

};
/*****************************************************/
class Dog:public Mammal
{
	private:
		string breed; 
	public:
		
		Dog() : Mammal() {
			breed = "";
		}

		// Parameterized Constructor
		Dog(string n, int a, string t, string s, string h,  string g, string b) : Mammal(n, a,t,s, h, g) {
			breed = b;
		}

		
		void setBreed(string b) {
			breed = b;
		}

		string getBreed() {
			return breed;
		}

		virtual void printData() {
			Mammal::printData();
			cout << "Breed: " << breed << endl;
		}
};
/*****************************************************/
class Cat:public Mammal
{
	private:
		string coat; 
	public:
		Cat() : Mammal()
		{
			coat = "";
		}
		Cat(string n, int a, string t, string s, string h,  string g, string c ) : Mammal(n, a ,t,s, h, g) {
			coat = c;
		}
		void setCoat(string c) {
			coat = c;
		}

		string getCoat() {
			return coat;
		}
		virtual void printData() {
			Mammal::printData();
			cout << "Coat: " << coat << endl;
		}
};
/*****************************************************/
class Human_Being:public Mammal
{
	private:
		string healthStatus;
	public:
		Human_Being(): Mammal()
		{
			healthStatus = "";
		}
		Human_Being(string n, int a, string t, string s, string h,  string g, string hS) : Mammal(n, a, t,s, h, g) {
			healthStatus =  hS;
		}
		void setHealthStatus(string hS) {
			healthStatus = hS;
		}

		string getHealthStatus() {
			return healthStatus;
		}
		virtual void printData() {
			Mammal::printData();
			cout << "Health status: " << healthStatus << endl;
		}
};
/*****************************************************/
class Dentist:public Human_Being
{
	private:
		string specialty;
	public:
		Dentist() : Human_Being() {
			specialty = "";
		}
		Dentist(string n, int a,  string t, string s, string h, string g, string hS, string spec) : Human_Being(n, a, t, s,h, g, hS) {
			specialty = spec;
		}
		void setSpecialty(string spec) {
			specialty = spec;
		}
		string getSpecialty() {
			return specialty;
		}
		virtual void printData() {
			Human_Being::printData();
			cout << "Specialty: " << specialty << endl;
		}
};
/***************************************************************/
class ShopKeeper:public Human_Being
{
	private:
		string shopName;
	public:
		ShopKeeper() : Human_Being() {
		shopName = "";
	}
	ShopKeeper(string n, int a,string t, string s, string h, string g, string hS, string shop) : Human_Being(n, a,t, s,h, g, hS) {
		shopName = shop;
	}
	void setShopName(string shop) {
		shopName = shop ;
		}
		string getShopName() {
	return shopName;
	}
	virtual void printData() {
		Human_Being::printData();
		cout << "Shop Name: " << shopName << endl;
	}
};
/*******************************************************************/
class Artist:public Human_Being
	{
	private:
		string artStyle;
	public:
		Artist() : Human_Being() {
			artStyle = "";
		}
		Artist(string n, int a,string t, string s, string h, string g, string hS, string style) : Human_Being(n, a,t, s, h, g, hS) {
			artStyle = style;
		}
		void setArtStyle(string style) {
			artStyle = style;
		}
		string getArtStyle() {
			return artStyle;
		}
		virtual void printData() {
			Human_Being::printData();
			cout << "Art Style: " << artStyle << endl;
}

};
/*********************************************************/
int main()
{
	Dentist Ken("Ken", 30, "human", "male", "earth", "sdfgbh", "healthy", "orthodontics");
    Ken.printData(); 
	Artist Beth("Beth", 30, "human", "male", "earth", "painting", "healthy", "impressionism");
    Beth.printData(); 
    ShopKeeper flo("flo", 35, "human", "male", "earth", "selling", "healthy", "My Shop");
    flo.printData(); 
    return 0;
}