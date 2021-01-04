package frequency;

import java.util.Arrays;
import java.util.TreeMap;
import java.util.stream.Stream;

public class MostFrequent {
	public static void main(String[] args) {
		String s = "hello world is, a program for saying hello to the world! Hello world program is, a world of hello program.";
		s = s.replaceAll("[^a-zA-Z]", " ");
		String words[] = s.split(" +");
		System.out.println(Arrays.toString(words));
	
		var count = new TreeMap<String, Integer>(
				);
		
		Stream.of(words)
		.map(word -> word.toLowerCase())
		.forEach(word -> count.put(word, count.getOrDefault(word, 0)+1));
		
		System.out.println(count);
		
		count.entrySet()
		.stream()
		.sorted( (e1, e2) -> {
			Integer v1 = e1.getValue();
			Integer v2 = e2.getValue();
			
			int c = v1.compareTo(v2);
			if(c == 0) {
				return e1.getKey().compareTo(e2.getKey());
			}
			
			return c;
		})
		.forEach(entry -> System.out.println(entry));
		
	}
}	
