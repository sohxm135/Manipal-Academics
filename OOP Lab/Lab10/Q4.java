 class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

public class Q4 {
    public static void main(String[] args) {
        try {
            throw new CustomException("This is a custom error message.");
        } catch (CustomException e) {
            System.out.println(e.getMessage());
        }
    }
}
