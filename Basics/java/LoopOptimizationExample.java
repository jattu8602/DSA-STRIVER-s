public class LoopOptimizationExample {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int target = 6;

        // Using 'break' to exit the loop early when the target is found
        for (int num : numbers) {
            if (num == target) {
                System.out.println("Target found: " + target);
                break; // Exit the loop immediately
            }
            System.out.println("Checking: " + num);
        }

        // Using 'continue' to skip specific elements
        for (int num : numbers) {
            if (num % 2 == 0) {
                continue; // Skip even numbers
            }
            System.out.println("Odd number: " + num);
        }
    }
}