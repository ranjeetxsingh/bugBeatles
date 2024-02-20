#include<iostream>
#include<vector>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allProducts = {
	Product(1, "apple", 26),
	Product(2, "mango", 16),
	Product(3, "guava", 36),
	Product(5, "banana", 56),
	Product(4, "strawberry", 29),
	Product(6, "pineapple", 20)

};

Product* chooseProduct() {

	//display the list of products
	string productList;
	cout << "Available Products " << endl;

	for (auto product : allProducts) {
		productList.append(product.getDisplayName());
	}
	cout << productList << endl;

	cout << "---------------------" << endl;
	string choice;
	cin >> choice;

	for (int i = 0; i < allProducts.size(); i++) {
		if (allProducts[i].getShortName() == choice) {
			return &allProducts[i];
		}
	}

	cout << "Product not found!" << endl;
	return NULL;
}

bool checkout(Cart &cart) {
	if (cart.isEmpty()) {
		return false;
	}

	int total = cart.getTotal();
	cout << "Pay in Cash ";

	int paid;
	cin >> paid;

	if (paid >= total) {
		cout << "Change: Rs. " << (paid - total) << endl;
		cout << "ThankYou For Shopping With Us!" << endl;
		return true;
	}
	else {
		cout << "Not Enough Cash!" << endl;
		return false;
	}
}

int main() {


	char action;
	Cart cart;
	while (true) {
		cout << "select an action - (a)dd item, (v)iew cart, (c)heckout" << endl;
		cin >> action;

		if (action == 'a') {
			//ToDO: Add to cart
			// view all products + choose the product + add to cart

			Product * product = chooseProduct();
			if (product != NULL) {
				cout << "Added to the cart " << product->getDisplayName() << endl;
				cart.addProduct(*product);
			}



		}
		else if (action == 'v') {
			// view cart
			cout << "---------------" << endl;
			cout << cart.viewCart();
			cout << "---------------" << endl;
		}
		else if (action == 'c') {
			//checkout
			cart.viewCart();
			if (checkout(cart)) {
				break;
			}

		}
		else {
			cout << "Please choose valid action!" << endl;
		}
	}



	return 0;
}