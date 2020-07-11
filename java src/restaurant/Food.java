abstract class Food {
	String name;
	int quantity;

	Food(String name)  {
		this.name = name;
		this.quantity = 0;
	}

	abstract double getPrice();
	abstract void setQuantity(int quantity);

}