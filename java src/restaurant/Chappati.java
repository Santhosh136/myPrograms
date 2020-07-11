class Chappati extends Food {
	String flavour;
	double price;

	Chappati(String flavour) {
		super("Chappati");
		this.flavour = flavour;
		if(flavour.equals("Palak")) setPrice(50.0);
		if(flavour.equals("Paneer")) setPrice(60.0);
	}

	void setPrice(double price) {
		this.price = price;
	}

	void setQuantity(int quantity)  {
		this.quantity = quantity;
	}

	double getPrice() {
		return (this.quantity)*(this.price);
	}

	public String toString() {
		return this.flavour+" "+this.name+" : "+this.price;
	}
}