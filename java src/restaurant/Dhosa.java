class Dhosa extends Food{
	String flavour;
	double price;

	Dhosa(String flavour) {
		super("Dhosa");
		this.flavour = flavour;
		if(flavour.equals("Ghee")) setPrice(80.0);
		if(flavour.equals("Masal")) setPrice(60.0);
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