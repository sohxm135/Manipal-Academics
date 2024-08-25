
public class Number {
    private double value;

    // Constructor to initialize the value
    public Number(double value) {
        this.value = value;
    }

    // Method to check if the number is zero
    public boolean isZero() {
        return this.value == 0;
    }

    // Method to check if the number is positive
    public boolean isPositive() {
        return this.value > 0;
    }

    // Method to check if the number is negative
    public boolean isNegative() {
        return this.value < 0;
    }

    // Method to check if the number is odd
    public boolean isOdd() {
        return this.value % 2 != 0;
    }

    // Method to check if the number is even
    public boolean isEven() {
        return this.value % 2 == 0;
    }

    // Method to check if the number is prime
    public boolean isPrime() {
        if (this.value <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(this.value); i++) {
            if (this.value % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Method to check if the number is an Armstrong number
    public boolean isArmstrong() {
        int temp = (int) this.value;
        int sum = 0;
        int digitCount = String.valueOf(temp).length();
        while (temp > 0) {
            int digit = temp % 10;
            sum += (int) Math.pow(digit, digitCount);
            temp /= 10;
        }
        return sum == this.value;
    }
}


