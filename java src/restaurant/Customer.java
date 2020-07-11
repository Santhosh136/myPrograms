import java.util.List;
import java.util.ArrayList;

class Customer {
	String name;
	String email;
	String password;
	List<Food> cart;

	Customer(String name, String email, String password) {
		this.name = name;
		this.email = email;
		this.password = password;
		this.cart = new ArrayList<Food>();
	}

	void addToCart(Food item) {
		cart.add(item);
	}

	double cartTotal() {
		double total = 0.0;
		for(Food item: cart) {
			total += item.getPrice();
		}
		return total;
	}

	void emptyCart() {
		cart.clear();
	}

}
