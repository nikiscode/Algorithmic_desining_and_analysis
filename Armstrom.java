




//Armstrom
public class ArmstrongNumber {
    
    /**
     * Check if a number is an Armstrong number.
     * An Armstrong number is a number that is equal to the sum of its own digits
     * each raised to the power of the number of digits.
     * 
     * @param num The number to check
     * @return true if the number is an Armstrong number, false otherwise
     */
    public static boolean isArmstrong(int num) {
        if (num < 0) {
            return false;
        }
        
        // Convert number to string to count digits
        String numStr = String.valueOf(num);
        int numDigits = numStr.length();
        
        // Calculate sum of digits raised to power of number of digits
        int sum = 0;
        for (char digit : numStr.toCharArray()) {
            int d = Character.getNumericValue(digit);
            sum += Math.pow(d, numDigits);
        }
        
        return sum == num;
    }
    
    /**
     * Find all Armstrong numbers within a given range.
     * 
     * @param start The start of the range (inclusive)
     * @param end The end of the range (inclusive)
     * @return A list of Armstrong numbers in the range
     */
    public static void findArmstrongNumbers(int start, int end) {
        System.out.println("Armstrong numbers between " + start + " and " + end + ":");
        
        boolean found = false;
        for (int i = start; i <= end; i++) {
            if (isArmstrong(i)) {
                System.out.println(i);
                found = true;
            }
        }
        
        if (!found) {
            System.out.println("No Armstrong numbers found in this range.");
        }
    }
    
    /**
     * Count Armstrong numbers in a given range.
     * 
     * @param start The start of the range (inclusive)
     * @param end The end of the range (inclusive)
     * @return The count of Armstrong numbers
     */
    public static int countArmstrongNumbers(int start, int end) {
        int count = 0;
        for (int i = start; i <= end; i++) {
            if (isArmstrong(i)) {
                count++;
            }
        }
        return count;
    }
    
    public static void main(String[] args) {
        System.out.println("=== Armstrong Number Program ===\n");
        
        // Test single numbers
        System.out.println("Testing single numbers:");
        int[] testNumbers = {153, 370, 371, 407, 1634, 8208, 9474, 123, 456};
        for (int num : testNumbers) {
            System.out.println(num + " is Armstrong: " + isArmstrong(num));
        }
        
        // Find Armstrong numbers in ranges
        System.out.println("\n--- Finding Armstrong numbers in ranges ---\n");
        
        System.out.println("1-digit Armstrong numbers (1-9):");
        findArmstrongNumbers(1, 9);
        
        System.out.println("\n2-digit Armstrong numbers (10-99):");
        findArmstrongNumbers(10, 99);
        
        System.out.println("\n3-digit Armstrong numbers (100-999):");
        findArmstrongNumbers(100, 999);
        
        System.out.println("\n4-digit Armstrong numbers (1000-9999):");
        findArmstrongNumbers(1000, 9999);
        
        // Count Armstrong numbers
        System.out.println("\n--- Counting Armstrong numbers ---");
        System.out.println("Count in 1-9: " + countArmstrongNumbers(1, 9));
        System.out.println("Count in 100-999: " + countArmstrongNumbers(100, 999));
        System.out.println("Count in 1000-9999: " + countArmstrongNumbers(1000, 9999));
        
        // Interactive mode
        System.out.println("\n--- Interactive Mode ---");
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        
        while (true) {
            System.out.println("\nChoose an option:");
            System.out.println("1. Check if a number is Armstrong");
            System.out.println("2. Find Armstrong numbers in a range");
            System.out.println("3. Exit");
            System*
