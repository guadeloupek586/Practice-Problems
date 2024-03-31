"""
    *   Name:  temperature.py
    *
    *   Complete the function that converts a temperature. 
    *   If the second parameter is true, convert the temperature from Fahrenheit to Celsius.
    *   If the second parameter is false, convert the temperature from Celsius to Fahrenheit.
"""

def ConvertTemperture(temperature: float, isFahrenheit: bool) -> float:
    ...
    # Celsius = (Fahrenheit - 32) * 5/9
    # Fahrenheit = Celsius * 9/5 + 32
    # Write your code here

def main() -> None:
    print(f"32°F is {ConvertTemperture(32, True)}°C") # 0°C
    print(f"100°C is {ConvertTemperture(100, False)}°F") # 212°F
    print(f"98.6°F is {ConvertTemperture(98.6, True)}°C") # 37°C

if __name__ == '__main__':
    main()