#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        int id;
        string name;
        string category;
        double price;
        int quantity;
    
    public:
        Product(int id, string name, string category, double price, int  quantity){
            this->id = id;
            this->name = name;
            this->category = category;
            this->price = price;
            this->quantity = quantity;
        }

        int getId const(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }

        string getName const(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }

        string getCategory const(){
            return category;
        }
        void setCategory(string category){
            this->category = category;
        }

        double getPrice const(){
            return price;
        }
        void setPrice(double price){
            this->price = price;
        }

        int getQuantity const(){
            return quantity;
        }
        void setQuantity(int quantity){
            this->quantity = quantity;
        }
};

class Inventory{
    private:

}


int main(){
    Inventory i;
    bool flag = true;

    do{
        cout << "-----------------------------------------------------------" <<endl;
        cout << "---------------Inventory Management System ----------------" <<endl;   
        cout << "-----------------------------------------------------------" <<endl;
        cout << "------------------------- Welcome! ------------------------" <<endl;
        cout << "-----------------------------------------------------------" <<endl;
        char choice;

        cout<< "Please choose an option --"<<endl;
        cout<< "1. Add a product"<<endl;
        cout<< "2. Remove a product"<<endl;
        cout<< "3. Find a product"<<endl;
        cout<< "4. Update a product"<<endl;
        cout<< "5. View all products"<<endl;
        cout<< "6. Save inventory to a file"<<endl;
        cout<< "7. Load inventory from file"<<endl;
        cout<< "8. Exit"<<endl;

        if(choice == '1'){

        }   

        else if(choice == '2'){

        }
    
        else if(choice == '3'){

        }

        else if(choice == '4'){

        }

       else if(choice == '5'){

        }

       else if(choice == '6'){

        }

        else if(choice == '7'){

        }
        else if(choice == '8'){
            flag = false;
        }
        else{

        }
        
    } while(flag);

    return 0;
}