import java.util.List;
import java.util.ArrayList;

class Hotel {
	String name;
	int stars;
	List<Food> menu;

	Hotel(String name, int stars) {
		this.name = name;
		this.stars = stars;
		this.menu = new ArrayList<Food>();
	}

	void addItemToMenu(Food item) {
		this.menu.add(item);
	}

	List<Food> getMenu() {
		return this.menu;
	}
}
