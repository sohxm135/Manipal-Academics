 class Time {
    int hours;
    int minutes;
    int seconds;

    // Constructor to initialize time to zero
    public Time() {
        this.hours = 0;
        this.minutes = 0;
        this.seconds = 0;
    }

    // Constructor to initialize time to fixed value
    public Time(int hours, int minutes, int seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    // Method to display time in hh:mm:ss format
    public void displayTime() {
        System.out.printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    // Method to add two Time objects
    public Time addTime(Time time) {
        int totalSeconds = this.seconds + time.seconds;
        int totalMinutes = this.minutes + time.minutes;
        int totalHours = this.hours + time.hours;

        totalMinutes += totalSeconds / 60;
        totalHours += totalMinutes / 60;

        totalSeconds %= 60;
        totalMinutes %= 60;

        return new Time(totalHours, totalMinutes, totalSeconds);
    }

    
}

public class Q3{
    public static void main(String[] args) {
        Time time1 = new Time(10, 30, 0);
        Time time2 = new Time(2, 45, 30);

        time1.displayTime();
        time2.displayTime();

        Time totalTime = time1.addTime(time2);
        totalTime.displayTime();
    }
}
