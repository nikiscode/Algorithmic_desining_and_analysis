3. Count Vowels and Consonants
public class CountVC {
public static void main(String[] args) {
String str = "Hello123";
int vowels = 0, consonants = 0, digits = 0;
str = str.toLowerCase();
for (char ch : str.toCharArray()) {
if (Character.isDigit(ch))
digits++;
else if (ch >= 'a' && ch <= 'z') {
if ("aeiou".indexOf(ch) != -1)
vowels++;
else
consonants++;
}
}
System.out.println("Vowels: " + vowels);
System.out.println("Consonants: " + consonants);
System.out.println("Digits: " + digits);
}
}
Output:
Vowels: 2
Consonants: 3
Digits: 3
