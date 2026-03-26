def fibonacci(n):
    """
    Calculate the nth Fibonacci number.
    
    Args:
        n: The position in the Fibonacci sequence (0-indexed)
    
    Returns:
        The nth Fibonacci number
    """
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        a, b = 0, 1
        for _ in range(2, n + 1):
            a, b = b, a + b
        return b


def fibonacci_sequence(count):
    """
    Generate the first 'count' numbers in the Fibonacci sequence.
    
    Args:
        count: The number of Fibonacci numbers to generate
    
    Returns:
        A list of Fibonacci numbers
    """
    if count <= 0:
        return []
    
    sequence = [0, 1]
    for i in range(2, count):
        sequence.append(sequence[i - 1] + sequence[i - 2])
    
    return sequence[:count]


if __name__ == "__main__":
    # Example usage
    print("First 10 Fibonacci numbers:")
    print(fibonacci_sequence(10))
    
    print("\nThe 20th Fibonacci number is:", fibonacci(20))
    
    # Interactive mode
    print("\n--- Interactive Mode ---")
    while True:
        try:
            choice = input("\nChoose an option:\n1. Get nth Fibonacci number\n2. Get first n Fibonacci numbers\n3. Exit\nChoice: ")
            
            if choice == '1':
                n = int(input("Enter the position (n): "))
                print(f"Fibonacci({n}) = {fibonacci(n)}")
            
            elif choice == '2':
                count = int(input("How many Fibonacci numbers? "))
                print(f"First {count} Fibonacci numbers: {fibonacci_sequence(count)}")
            
            elif choice == '3':
                print("Goodbye!")
                break
            
            else:
                print("Invalid choice. Please try again.")
        
        except ValueError:
            print("Invalid input. Please enter a valid number.")
