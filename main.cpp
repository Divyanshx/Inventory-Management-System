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

        int getId() const{
            return id;
        }
        void setId(int id){
            this->id = id;
        }

        string getName() const{
            return name;
        }
        void setName(string name){
            this->name = name;
        }

        string getCategory() const{
            return category;
        }
        void setCategory(string category){
            this->category = category;
        }

        double getPrice() const{
            return price;
        }
        void setPrice(double price){
            this->price = price;
        }

        int getQuantity() const{
            return quantity;
        }
        void setQuantity(int quantity){
            this->quantity = quantity;
        }
};

class Inventory{
    private:
        vector<Product> products;
    
    public:
        void addProduct(Product product){
            if(findProduct(product.getId())){
                cout << "-----------------------------------------------------------" <<endl;
                cout<<"Product ID Already Present in the inventory. Try with Another ID" << endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
            else{
                products.push_back(product);
                cout << "Product added successfully." << endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
        }

        void removeProduct(int id){
            for(auto it = products.begin(); it != products.end(); it++){
                if(it->getId() == id){
                    products.erase(it);
                    cout << "Product removed successfully" << endl;
                    cout << "-----------------------------------------------------------" << endl;
                    return;
                }
            }
            cout << "Product Not Present" << endl;
            cout << "-----------------------------------------------------------" << endl;
        }

        Product* findProduct(int id){
            for(auto &p: products){
                if(p.getId() == id) return &p;
            }
            return nullptr;
        }

        void updateProduct(int id, string name, string category, double price, int quantity){
            Product* prod = findProduct(id);
            if(prod){
                prod->setName(name);
                prod->setCategory(category);
                prod->setPrice(price);
                prod->setQuantity(quantity);
                cout<<"Product updated successfully"<<endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
            else{
                cout << "Product Not Present" << endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
        }

        void printProducts(){
            if(products.empty()){
                cout<<"Empty Inventory. Try adding something"<<endl;
                return;
            }
            cout << "Product ID" << "\t" << "Name" << "\t" << "Category" << "\t" << "Price" << "\t" << "Quantity" <<endl;
            for(auto p = products.begin(); p != products.end(); p++){
                cout << p->getId() << "\t\t" << p->getName() << "\t" << p->getCategory() << "\t\t" << p->getPrice() << "\t" << p->getQuantity() <<endl;
            }
        }

};


int main(){
    Inventory inventory;
    bool flag = true;

    cout << "-----------------------------------------------------------" <<endl;
    cout << "---------------Inventory Management System ----------------" <<endl;   
    cout << "-----------------------------------------------------------" <<endl;
    cout << "------------------------- Welcome! ------------------------" <<endl;
    cout << "-----------------------------------------------------------" <<endl;

    do{
        char choice;

        cout<< endl << "Please choose an option --"<<endl;
        cout<< "1. Add a product"<<endl;
        cout<< "2. Remove a product"<<endl;
        cout<< "3. Find a product"<<endl;
        cout<< "4. Update a product"<<endl;
        cout<< "5. View all products"<<endl;
        cout<< "6. Save inventory to a file"<<endl;
        cout<< "7. Load inventory from file"<<endl;
        cout<< "8. Exit"<<endl;

        cin >> choice;

        if(choice == '1'){
            int id;
            string name, category;
            double price;
            int quantity;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product category: ";
            cin >> category;
            cout << "Enter product price: ";
            cin >> price;
            cout << "Enter product quantity: ";
            cin >> quantity;
            Product product(id, name, category, price, quantity);
            inventory.addProduct(product);
        }   
        else if(choice == '2'){
            int id;
            cout << "Enter product id: ";
            cin >> id;
            inventory.removeProduct(id);
        }
        else if(choice == '3'){
            int id;
            cout << "Enter product id: ";
            cin >> id;
            Product* prod = inventory.findProduct(id);
            if(prod){
                cout << "Name: " << prod->getName() << endl;
                cout << "Category: " << prod->getCategory() << endl;
                cout << "Price: " << prod->getPrice() << endl;
                cout << "Quantity: " << prod->getQuantity() << endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
            else{
                cout<< "Product not found." << endl;
                cout << "-----------------------------------------------------------" <<endl;
            }
        }
        else if(choice == '4'){
            int id;
            string name, category;
            double price;
            int quantity;
            cout << "Enter product id: ";
            cin >> id;
            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product category: ";
            cin >> category;
            cout << "Enter product price:  ";
            cin >> price;
            cout << "Enter product quantity: ";
            cin >> quantity;
            inventory.updateProduct(id, name, category, price, quantity);
        }
       else if(choice == '5'){
            inventory.printProducts();
        }
       else if(choice == '6'){

        }

        else if(choice == '7'){

        }
        else if(choice == '8'){
            flag = false;
            cout << "Thank you for using the inventory management system."<< endl;
            cout << "-----------------------------------------------------------" <<endl;
        }
        else{
            cout << "Invalid Choice. Please Try again" << endl;
            cout << "-----------------------------------------------------------" <<endl;
        }
        
    } while(flag);

    return 0;
}