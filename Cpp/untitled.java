public class Liam {
	public static void main(String[] args) {
		Pattern p = Pattern.compile("a*b");		// matches all of strings that has 'a' as prefix and 'b' as suffix
		Matcher m = p.matches("aaaaab");		// "aaaaab" matches "a*b"
		boolean b = m.matches();				// b is true
		
		boolean b = Pattern.matches("a*b", "aaaaab");	// equivalent to the three statements above
	}
}