/*
    *   Name:  Temperature.java
    *
    *   Complete the function that converts a temperature. 
    *   If the second parameter is true, convert the temperature from Fahrenheit to Celsius.
    *   If the second parameter is false, convert the temperature from Celsius to Fahrenheit.
*/

public class Tempurature {
    public static double ConvertTemperature(double temperature, boolean isFahrenheit) {
        // Celsius = (Fahrenheit - 32) * 5/9
        // Fahrenheit = (Celsius * 9/5) + 32
        // Write your code here

        return 0.0; // replace 0.0 with the converted temperature
    }

    public static void main(String[] args) {
        System.out.println("32°F is " + ConvertTemperature(32, true) + "°C"); // 0°C
        System.out.println("100°C is " + ConvertTemperature(100, false) + "°F"); // 212°F
        System.out.println("98.6°F is " + ConvertTemperature(98.6, true) + "°C"); // 37°C
    }
}