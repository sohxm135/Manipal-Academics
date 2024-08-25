import java.util.Scanner;

class Book implements Comparable<Book> {
    String title;
    String author;
    int edition;

    public Book(String title, String author, int edition) {
        this.title = title;
        this.author = author;
        this.edition = edition;
    }

    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public int getEdition() {
        return edition;
    }

    @Override
    public int compareTo(Book other) {
        return this.title.compareTo(other.title);
    }

    @Override
    public String toString() {
        return "Book{" +
                "title='" + title + '\'' +
                ", author='" + author + '\'' +
                ", edition=" + edition +
                '}';
    }
}

public class Q6 {
    public static void main(String[] args) {
        Book[] bookArray = new Book[6];

        bookArray[0] = new Book("Book1", "Author1", 1);
        bookArray[1] = new Book("Book2", "Author2", 2);
        bookArray[2] = new Book("Book3", "Author3", 3);
        bookArray[3] = new Book("Book4", "Author1", 4);
        bookArray[4] = new Book("Book5", "Author2", 5);
        bookArray[5] = new Book("Book6", "Author3", 6);

        sortBooks(bookArray);

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter author name: ");
        String authorName = scanner.nextLine();

        for (Book book : bookArray) {
            if (book.getAuthor().equals(authorName)) {
                System.out.println(book);
            }
        }
    }

    public static void sortBooks(Book[] bookArray) {
        for (int i = 0; i < bookArray.length - 1; i++) {
            for (int j = i + 1; j < bookArray.length; j++) {
                if (bookArray[i].compareTo(bookArray[j]) > 0) {
                    Book temp = bookArray[i];
                    bookArray[i] = bookArray[j];
                    bookArray[j] = temp;
                }
            }
        }
    }
}