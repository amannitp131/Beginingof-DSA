import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

class UniqueCharacterCounter {
    
    private String name;

    public UniqueCharacterCounter(String name) {
        this.name = name;
    }

  
    public Set<Character> getUniqueCharacters() {
        Set<Character> uniqueChars = new HashSet<>();
        for (char c : name.toCharArray()) {
            uniqueChars.add(c);
        }
        return uniqueChars;
    }

    public int countUniqueCharacters() {
        return getUniqueCharacters().size();
    }

    public void printUniqueCharacterDetails() {
        Set<Character> uniqueChars = getUniqueCharacters();
        System.out.println(name + " contains " + uniqueChars.size() + " unique characters.");
        System.out.print("The characters that are unique  are: ");
        for (char c : uniqueChars) {
            System.out.print(c + " ");
        }
        System.out.println();
    }
}

public class Main1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print(" name: ");
        String name = scanner.nextLine();

       
        UniqueCharacterCounter counter = new UniqueCharacterCounter(name);
        counter.printUniqueCharacterDetails();
    }
}
